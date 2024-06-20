#ifndef  _LEERARCHIVO_H_
#define  _LEERARCHIVO_H_
#include <iostream>
#include <string>
#include "../mips/memoria.h"
using namespace std;

#define S_LW "lw"
#define S_SW "sw"
#define S_ADD "add"
#define S_ADDI "addi"
#define S_AND "and"
#define S_OR "or"
#define S_BEQ "beq"
#define S_BNE "bne"
#define S_J "j"
#define S_SRL "srl"
#define S_SLL "sll"
#define S_SUB "sub"

bool readFile(string name, Memoria &m);
bool separateFile(string name, string &textName, string &dataName);
bool readInstructions(string name, Memoria &m);
bool readText(string name, Memoria &m);
#endif
