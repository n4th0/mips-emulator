
#include <cstdint>
#include <iostream>
#include <fstream>
#include "../mips/memoria.h"
#include "../mips/desplazadores.h"
#include "leerArchivo.h"
using namespace std;

enum TypeOfInstructions{
    directive,
    instruction,
    label
};

struct Element{
    TypeOfInstructions type;
    int32_t direction;
    string content;
};


bool tipor(string &s, int &reg1, int &reg2, int &reg3){

    if(s.find_first_of('$') == string::npos)
        return true;

    s.erase(0, s.find_first_of('$')+1);

    if (s.find_first_of(',') == string::npos)
        return true;
    reg1 = atoi(s.substr(0, s.find_first_of(',')).c_str());

    if(s.find_first_of('$') == string::npos)
        return true;
    s.erase(0, s.find_first_of('$')+1);

    if (s.find_first_of(',') == string::npos)
        return true;
    reg2 = atoi(s.substr(0, s.find_first_of(',')).c_str());

    if(s.find_first_of('$') == string::npos)
        return true;
    s.erase(0, s.find_first_of('$')+1);

    reg3 = atoi(s.c_str());

    return false;
}

bool cond(string &s, int &reg1, int &reg2){

    if(s.find_first_of('$') == string::npos)
        return true;
    s.erase(0, s.find_first_of('$')+1);

    reg1 = atoi(s.c_str());

    if(s.find_first_of('$') == string::npos)
        return true;

    s.erase(0, s.find_first_of('$')+1);

    reg2 = atoi(s.c_str());

    if(s.find_first_of(' ') == string::npos)
        return true;

    s.erase(0, s.find_first_of(' ')+1);

    if(s.find_first_of(' ')!=string::npos)
        s.erase( s.find_first_of(' '), s.size());


    if(s.find_first_of('#')!=string::npos)
        s.erase( s.find_first_of('#'), s.size());

    return false;
}

bool mem(string &s, int &reg1, int &reg2, int & inmediato){

    if(s.find_first_of('$') == string::npos)
        return true;

    s.erase(0, s.find_first_of('$')+1);

    if(s.find_first_of(',') == string::npos)
        return true;

    reg1 = atoi(s.substr(0, s.find_first_of(',')).c_str());

    if(s.find_first_of(' ') == string::npos ){
        s.erase(0, s.find_first_of(',')+1);
    }else {
        s.erase(0, s.find_first_of(' ')+1);
    }

    if(s.find_first_of('(') == string::npos)
        return true;

    inmediato = atoi(s.substr(0, s.find_first_of('(')).c_str());

    if(s.find_first_of('$') == string::npos)
        return true;

    s.erase(0, s.find_first_of('$')+1);

    if(s.find_first_of(')') == string::npos)
        return true;

    s.erase(s.find_first_of(')')+1, s.size());
    reg2 = atoi(s.c_str());

    return false;
}

bool jump(string &s){
    if(s.find_first_of('#') != string::npos){
        s.erase(s.find_first_of('#'), s.size());
    }

    if(s.find_first_of(' ') != string::npos){
        s.erase(s.find_first_of(' '), s.size());
    }

    return true;
}


/*
 * primer paso:
 * quitar los comentarios y clasificar las líneas que hayan
 * TODO testear
 * */
bool readInstructions(string name, vector<Element> &elements){
    
    Element e;
    ifstream fr;
    fr.open(name);
    string line;


    int32_t cont = 0x00400000;

    while(getline(fr, line)){
        // elimina los comentarios
        if (line.find('#') != string::npos) {
            line.erase(line.find('#'), line.find('#')-line.size());
        }


        // quita los espacios en blanco de delante
        while (line[0] == ' ') {
            line.erase(0, 1);
        }

        // quita los espacios en blanco de detras
        while (line[line.size()-1] == ' ') {
            line.erase(line.size()-1, 1);
        }

        if (line.empty()) {
            continue;
        }

        if (line.find('.') != string::npos) {
            e.content = line;
            e.direction = cont;
            e.type = directive;
            cont+=4;
            elements.push_back(e);
            continue;
        }

        if (line.find(':') != string::npos) {
            e.content = line;
            e.direction = cont;
            e.type = label;
            cont+=4;
            elements.push_back(e);
            continue;
        }

        e.content = line;
        e.direction = cont;
        e.type = instruction;
        cont+=4;
        elements.push_back(e);
    }
    fr.close();
    return 1;
}


/*
 * segundo paso:
 * clasificar las líneas entre instrucciones y datos
 * */
bool readElements(const vector<Element> &elements){
    vector<Element> dataElements;
    vector<Element> textElements;
    bool data = false;

    for (unsigned i = 0; i<elements.size(); i++) {
        if (elements[i].type == directive && elements[i].content == ".data") {
            data = true;
        }
        if (elements[i].type == directive && elements[i].content == ".text") {
            data = false;
        }

        if (data) {
            dataElements.push_back(elements[i]);
        }else {
            textElements.push_back(elements[i]);
        }
    }

    return false;
}

/*
 * TODO 
 * tercer paso:
 * clasificar instrucciones
 * */



        // reg2 = 0;
        // reg3 = 0;
        // inmediato = 0;
        // currentInstruction = 0;
        // int lineNum = (cont-0x00400000)/4;

        // aux = line.substr(0, line.find(' '));

        // line.erase(0, line.find_first_of(' ')+1);


        // // TODO añadir los campos de operacion/func
        // if (aux == S_LW) {
        //     if(mem(line, reg1, reg2, inmediato))
        //         cout << "error: " << 1+lineNum << "del archivo"<<endl;

        //     currentInstruction = currentInstruction | desplazadorIzquierda(0x1F & reg1, 20);
        //     currentInstruction = currentInstruction | desplazadorIzquierda(0x1F & reg2, 15);
        //     currentInstruction = currentInstruction | (0xFFFF & inmediato);
        //     currentInstruction = currentInstruction | desplazadorIzquierda(000011, 25);

        // } else if (aux == S_SW) {
        //     if(mem(line, reg1, reg2, inmediato))
        //         cout << "error: " << 1+lineNum << "del archivo"<<endl;
        //     currentInstruction = currentInstruction | desplazadorIzquierda(0x1F & reg1, 20);
        //     currentInstruction = currentInstruction | desplazadorIzquierda(0x1F & reg2, 15);
        //     currentInstruction = currentInstruction | (0xFFFF & inmediato);
        //     currentInstruction = currentInstruction | desplazadorIzquierda(000001, 25);

        // } else if (aux == S_ADD) {
        //     if (tipor(line, reg1, reg2, reg3))
        //         cout << "error: " << 1+lineNum << "del archivo"<<endl;
        //     currentInstruction = currentInstruction | desplazadorIzquierda(0x1F & reg1, 20);
        //     currentInstruction = currentInstruction | desplazadorIzquierda(0x1F & reg2, 15);
        //     currentInstruction = currentInstruction | desplazadorIzquierda(0x1F & reg3, 10);
        //     currentInstruction = currentInstruction | 0b00100000;

        // } else if (aux == S_ADDI) { // TODO hacer la funcion de este formato
        //     if(mem(line, reg1, reg2, inmediato))
        //         cout << "error: " << 1+lineNum << "del archivo"<<endl;
        //     currentInstruction = currentInstruction | desplazadorIzquierda(0x1F & reg1, 20);
        //     currentInstruction = currentInstruction | desplazadorIzquierda(0x1F & reg2, 15);
        //     currentInstruction = currentInstruction | (0xFFFF & inmediato);

        // } else if (aux == S_AND) {
        //     if (tipor(line, reg1, reg2, reg3))
        //         cout << "error: " << 1+lineNum << "del archivo"<<endl;
        //     currentInstruction = currentInstruction | desplazadorIzquierda(0x1F & reg1, 20);
        //     currentInstruction = currentInstruction | desplazadorIzquierda(0x1F & reg2, 15);
        //     currentInstruction = currentInstruction | desplazadorIzquierda(0x1F & reg3, 10);
        //     currentInstruction = currentInstruction | 0b00100100;

        // } else if (aux == S_OR) {
        //     if (tipor(line, reg1, reg2, reg3))
        //         cout << "error: " << 1+lineNum << "del archivo"<<endl;
        //     currentInstruction = currentInstruction | desplazadorIzquierda(0x1F & reg1, 20);
        //     currentInstruction = currentInstruction | desplazadorIzquierda(0x1F & reg2, 15);
        //     currentInstruction = currentInstruction | desplazadorIzquierda(0x1F & reg3, 10);
        //     currentInstruction = currentInstruction | 0b00100101;

        // } else if (aux == S_BEQ) {
        //     if (cond(line, reg1, reg2))
        //         cout << "error: " << 1+lineNum << "del archivo"<<endl;
        //     currentInstruction = currentInstruction | desplazadorIzquierda(000100, 25);

        // } else if (aux == S_J) {
        //     if(jump(line))
        //         cout << "error: " << 1+lineNum << "del archivo"<<endl;

        // } else if (aux == S_SRL) {
        //     // 0b00000010

        // } else if (aux == S_SLL) {
        //     // 0b00000000
        //     
        // } else if (aux == S_SUB) {
        //     if (tipor(line, reg1, reg2, reg3))
        //         cout << "error: " << 1+lineNum << "del archivo"<<endl;
        //     currentInstruction = currentInstruction | desplazadorIzquierda(0x1F & reg1, 20);
        //     currentInstruction = currentInstruction | desplazadorIzquierda(0x1F & reg2, 15);
        //     currentInstruction = currentInstruction | desplazadorIzquierda(0x1F & reg3, 10);
        //     currentInstruction = currentInstruction | 0b00100010;

        // } 
