#ifndef _MEMORIA_H_
#define _MEMORIA_H_

#include <iostream>
#include <cstdint>
#include <vector>
using namespace std;


struct B{
    int32_t direccion;
    char elemento;
};

struct Half{
    int32_t direccion;
    int16_t elemento;
};

struct Word{
    int32_t direccion;
    int32_t elemento;
};


// esto es para simular la memoria de mips
class Memoria{

    private:
        vector<B> bytes; 
        vector<Half> halfword;
        vector<Word> word;
        bool checkColisions(); // esta funcion debe de decirnos si hay solapamiento en memor
    public:
        Memoria();
        // devuelve la posicion, si no la encuentra es -1 (excepcion)
        int searchInMemory(int32_t direccion, int codigo); 

        vector<int32_t> readFile(string name);
        bool useVector(vector<int32_t> v);
        void printMemory(int a);

        char getByte(int position); 
        int16_t getHalf(int position);
        int32_t getWord(int position);

        // deben comprobar que no haya colision en memoria
        bool putByteInMemory(int32_t direccion, char elemento);
        bool putHalfInMemory(int32_t direccion, int16_t elemento);
        bool putWordInMemory(int32_t direccion, int32_t elemento);
};

#endif
