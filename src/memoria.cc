
#include <iostream>
#include <cstdint>
#include <string>
#include <vector>
#include <fstream>
#include "memoria.h"

using namespace std;

Memoria::Memoria(){

}

vector<int32_t> Memoria::readFile(string name){
    fstream fr;
    int32_t aux;
    vector<int32_t> vectorp;

    fr.open(name, ios::binary | ios::in);

    if (!fr.is_open())
        throw "error file";

    while (fr.read((char *)&aux, sizeof(int32_t))) 
        vectorp.push_back(aux);

    fr.close();
    return vectorp;
}

// esta funcion debe de decirnos si hay solapamiento en memoria entre los vectores
bool Memoria::checkColisions(){
    // que un halfword esté dentro de un word
    // que un byte esté dentro de un halfword
    // que un byte esté dentro de un word
    
    for(unsigned i = 0; i<word.size(); i++){
        for(unsigned j = 0; j<halfword.size(); j++){
            if (word[i].direccion-1 <= halfword[j].direccion && word[i].direccion+3 >= halfword[j].direccion ) {
                return true;
            }
        }
    }

    for(unsigned i = 0; i<halfword.size(); i++){
        for(unsigned j = 0; j<bytes.size(); j++){
            if (bytes[j].direccion == halfword[i].direccion || bytes[j].direccion == halfword[i].direccion+1) {
                return true;
            }
        }
    }

    for(unsigned i = 0; i<word.size(); i++){
        for(unsigned j = 0; j<bytes.size(); j++){
            if (bytes[j].direccion <= word[i].direccion && bytes[j].direccion < word[i].direccion+3) {
                return true;
            }
        }
    }

    return false;
} 

bool Memoria::useVector(vector<int32_t> v){
    for (unsigned int i = 0; i<v.size(); i++) {
        this->putWordInMemory((i*4)+0x00400000, v[i]);
    }

    return true;
}

// 1 => bytes
// 2 => halfword
// 3 => word
int Memoria::searchInMemory(int32_t direccion, int codigo){


    switch (codigo) {
        case 1:
            for (unsigned i = 0; i<bytes.size(); i++) {
                if (bytes[i].direccion == direccion) {
                    return i;
                }
            }

            // arriba = bytes.size();
            // while (bajo <= arriba) {
            //     media = (bajo+arriba)/2;
            //     if (direccion == bytes[media].direccion) {
            //         return bytes[media].direccion;
            //     }else if (direccion<bytes[media].direccion ) {
            //         arriba = media-1;
            //     }else {
            //         bajo = media+1;
            //     }
            // }


            break;
        case 2:
            for (unsigned i = 0; i<halfword.size(); i++) {
                if (halfword[i].direccion == direccion) {
                    return i;
                }
            }
            // arriba = halfword.size();
            // while (bajo <= arriba) {
            //     media = (bajo+arriba)/2;
            //     if (direccion == halfword[media].direccion) {
            //         return halfword[media].direccion;
            //     }else if (direccion<halfword[media].direccion ) {
            //         arriba = media-1;
            //     }else {
            //         bajo = media+1;
            //     }
            // }

            break;
        case 3:
            for (unsigned i = 0; i<word.size(); i++) {
                if (word[i].direccion == direccion) {
                    return i;
                }
            }
            // arriba = word.size();
            // while (bajo <= arriba) {
            //     media = (bajo+arriba)/2;
            //     if (direccion == word[media].direccion) {
            //         return word[media].elemento;
            //     }else if (direccion<word[media].direccion ) {
            //         arriba = media-1;
            //     }else {
            //         bajo = media+1;
            //     }
            // }
            break;
    }


    throw "error not found";
}

void Memoria::printMemory(int a){
    if (a == 0) {
        for (unsigned i = 0; i<word.size(); i++) {
            cout <<  to_string(word[i].direccion) << " :: "<< to_string(word[i].elemento)<< endl;
        
        }
    
    }

}

char Memoria::getByte(int32_t position){

    try {
        int a = this->searchInMemory(position, 1);
        return bytes[a].elemento;
    } catch (...) {

        if (this->putByteInMemory(position, 0)) {
            throw "error colision";
        }
    }
    return 0;
}

int16_t Memoria::getHalf(int position){
    try {
        int a = this->searchInMemory(position, 2);
        return halfword[a].elemento;
    } catch (...) {
        if (this->putHalfInMemory(position, 0)) {
            throw "error colision";
        }
    }
    return 0;

}

int32_t Memoria::getWord(int position){
    try {
        int a = this->searchInMemory(position, 3);
        return word[a].elemento;
    } catch (...) {
        if (this->putWordInMemory(position, 0)) {
            throw "error colision";
        }
    }
    return 0;
}

// deben comprobar que no haya colision en memoria
bool Memoria::putByteInMemory(int32_t direccion, char elemento){

    for (unsigned int i = 0; i<bytes.size(); i++) {
        if (direccion == bytes[i].direccion)  {
            return false;
        }
    }

    B a;
    a.direccion = direccion;
    a.elemento = elemento;
    bytes.push_back(a);

    
    for (unsigned int i = 1; i<bytes.size(); i++) {
        a = bytes[i];
        unsigned j = i-1;
        while (j >= 0 && bytes[j].direccion > a.direccion) {
            bytes[j+1] = bytes[j];
            j--;
        }
        bytes[j+1] = a;
    }



    return true;
}

bool Memoria::putHalfInMemory(int32_t direccion, int16_t elemento){

    for (unsigned int i = 0; i<halfword.size(); i++) {
        if (direccion <= halfword[i].direccion && halfword[i].direccion < direccion+1) {
            return false;
        }
    }

    Half a;
    a.direccion = direccion;
    a.elemento = elemento;
    halfword.push_back(a);

    for (unsigned int i = 1; i<halfword.size(); i++) {
        a = halfword[i];
        unsigned j = i-1;
        while (j >= 0 && halfword[j].direccion > a.direccion) {
            halfword[j+1] = halfword[j];
            j--;
        }
        halfword[j+1] = a;
    }


    return true;
}

bool Memoria::putWordInMemory(int32_t direccion, int32_t elemento){

    for (unsigned int i = 0; i<word.size(); i++) {
        if (direccion <= word[i].direccion && word[i].direccion < direccion+3) {
            return false;
        }
    }

    Word a;
    a.direccion = direccion;
    a.elemento = elemento;
    word.push_back(a);

    for (unsigned int i = 1; i<word.size(); i++) {
        a = word[i];
        unsigned j = i-1;
        while (j >= 0 && word[j].direccion > a.direccion) {
            word[j+1] = word[j];
            j--;
        }
        word[j+1] = a;
    }

    return true;
}


