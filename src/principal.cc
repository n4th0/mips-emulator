#include <iostream>
#include <vector>
#include <fstream>
#include <cstdint>
using namespace std;

const string filename = "archivo.bin";


bool writeFile(vector<int32_t> aux){
    fstream fr;
    fr.open(filename, ios::binary| ios::out);

    for (unsigned int i = 0; i<aux.size(); i++) {
        fr.write((const char *)&aux[i], sizeof(int32_t));
    }
    fr.close();

    return true;
}


int main(){
    vector<int32_t> aux;

    //     6         5         5        5        5     6
    // operacion registro1 registro2 registro3 shmat function
    //
    //     6         5         5            16
    // operacion registro1 registro2    Inmediato
    //
    // --------------------------------------------------------
    //              tipo Registro (operacion a 0)
    // --------------------------------------------------------
    //                            func
    //
    //                  and      100100
    //                  or       100101
    //                  xor      100110
    //                  nor      100111
    //                  add      100000
    //                  sub      100010
    //                  srl      000010
    //                  sll      000000
    //                  sra      000011
    //                  syscall  000100
    //
    // --------------------------------------------------------
    //                      tipo Inmediato
    // --------------------------------------------------------
    //                           opcode
    //
    //                  addi     001000
    //                  lw       000011
    //                  sw       000001
    //                  lb       100000
    //                  sb       101000
    //                  lh       100001
    //                  sh       100100
    //                  beq      000100
    //                  bne      000101
    //                  ori      001101
    //                  andi     001100
    //                  xori     001110
    //                  mul      011100
    //

    aux.push_back(0x2102000a);
    aux.push_back(0x0000000c);




    writeFile(aux);
    return 0;
}



