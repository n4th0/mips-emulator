#include <cstdint>
#include "debugg.h"
#include "alu.h"
#include "desplazadores.h"
#include "memoria.h"
#include <exception>
#include <iostream>

using namespace std;

#define BASE 268500992

/*
 * las unicas operaciones válidas son:
 *
 * and & 
 * or  | 
 * xor ^
 * not ~
 *
 * lógicas (y por tanto el uso de ifs):
 *
 * and && 
 * or ||
 * not !
 * equal == 
 *
 *
 * No va a soportar pseudo instrucciones, 
 * a pesar de que la implementación no sería demasiado comleja
 * de momento no se van a implementar
 *
 * testear antes de cada fase
 *
 * fase 1:
 * hacer la funcionalidad, hacer que decodifique la instrucción correctamente
 *
 * fase 2:
 * modularizarlo en poo
 * 
 *
 *
 * ----Memoria----
 *
 *
 * fase 3:
 * lectura de ficheros
 *
 *
 *
 *
 */

enum errorType{
    overflow
};

enum OperacionAlu{
    suma, 
    resta,
    multiplicacion,
    division,
    oro,
    ando

};

/*
 * funcion que maneja las interrupciones
 * */
void error(errorType e){
    switch (e) {
        case overflow:
            cerr << "ERROR: overflow"<<endl;
            exit(-1);
    }

}

/*
 * entradas : dos registros de 32 bits y código de operacion
 * salidas : aluout y zero
 *
 * */
bool alu( OperacionAlu I, int32_t A, int32_t B, int32_t & aluOut){ 

    switch (I) {
        case suma:
            aluOut = sumador(A, B, true);
            break;

        case resta:
            aluOut = sumador(A, B, false);
            break;

        case multiplicacion:
            aluOut = booth(A, B);
            break;

        case division:
            int32_t resto;
            divisionSinRestauracion(A, B, aluOut, resto);
            break;

        case oro:
            aluOut = A | B;
            break;

        case ando:
            aluOut = A & B;
            break;

    }

    return false;
}

/*
 * la misma que la anterior pero sin guardar el aluout
 * */
bool alu(OperacionAlu I, int32_t A, int32_t B){ 
    int32_t aluOut;

    switch (I) {
        case suma:
            aluOut = sumador(A, B, true);
            break;

        case resta:
            aluOut = sumador(A, B, false);
            break;

        case multiplicacion:
            aluOut = booth(A, B);
            break;

        case division:
            int32_t resto;
            divisionSinRestauracion(A, B, aluOut, resto);
            break;

        case oro:
            aluOut = A | B;
            break;

        case ando:
            aluOut = A & B;
            break;

    }

    return false;
}



/*
 * recibe 16 bits y lo devuelve como 32 bits
 * */
uint32_t extensionDeSigno(int16_t A){
    return (int32_t) A;
}

/*
 * futuro constructor
 * */
void iniciarRegistros(int32_t * R){
    for (int i = 0; i<32; i++) {
        R[i] = 0;
    }
}
/*
 *
 * */

void printRegisters(int32_t * R){
    cout << "----------------------------------------------------------------------------------------------------------------------------------"<< endl;
    for (int i = 0; i<32; i++) {
        cout << "| " << R[i] <<" ";
    }
    cout << "|"<<endl;
    cout << "----------------------------------------------------------------------------------------------------------------------------------"<< endl;


}

int main(){

    int32_t Registers[32];
    int32_t A;
    int32_t B;
    int32_t MemoryRegister;

    Memoria Memoria;

    // int32_t MemoriaI[1000]; 

    int32_t AluOut = 0;

    uint32_t Instruccion;
    uint32_t PC = 0;

    char op; 
    char func; 

    bool zero = false;


    iniciarRegistros(Registers);
    Registers[10] = 5;


    Memoria.putWordInMemory(0, 0x2149000f);
    // MemoriaI[0] = 0x2084000F;


    // fase 1
    // Instruccion = MemoriaI[PC];
    Instruccion = Memoria.getWord(PC);

    alu(suma, PC, 0x00000004, AluOut);
    PC = AluOut;
    // cout << PC <<endl;

    // fase 2
    op = desplazadorDerecha((Instruccion & 0xFC000000), 26);
    // op =  ((Instruccion & 0xFC000000)>> 26);
    A = Registers[desplazadorDerecha((Instruccion & 0x03E00000),21)];
    B = Registers[desplazadorDerecha((Instruccion & 0x001F0000), 16)];

    int16_t inmediato = (Instruccion & 0x0000FFFF);

    func = (Instruccion & 0x0000003F);

    alu(suma, PC, inmediato, AluOut);


    // fase 3
    switch (op) {
        // tipo R
        case 0b000000:
            switch (func) {
                // TODO 
                // añadir instrucciones de multiplicacion y division

                // and   100100
                case 0b00100100:
                    alu(ando, A, B, AluOut);
                    // fase 4
                    Registers[desplazadorDerecha((Instruccion & 0x0000F800), 11)] = AluOut;
                    break;

                    // or    100101
                case 0b00100101: 
                    alu(oro, A, B, AluOut);
                    // fase 4
                    Registers[desplazadorDerecha((Instruccion & 0x0000F800), 11)] = AluOut;
                    break;

                    // add  100000
                case 0b00100000: 
                    alu(suma, A, B, AluOut);
                    // fase 4
                    Registers[desplazadorDerecha((Instruccion & 0x0000F800), 11)] = AluOut;
                    break;

                    // sub 100010
                case 0b00100010: 
                    alu(resta, A, B, AluOut);
                    // fase 4
                    Registers[desplazadorDerecha((Instruccion & 0x0000F800), 11)] = AluOut;
                    break;
                case 0b00000010:
                    // srl $9, $10, 15
                    // 000000 00000 01010 01001 01111 000010
                    // 6 5 registro destinoregistro cantidadDesp func
                    
                    break;
                case 0b00000000:
                    // sll $9, $10, 15
                    // 000000 00000 01010 01001 01111 000000
                    break;
            }

            break;

        // addi
        case 0b001000:
            alu(suma,  A, inmediato,  AluOut);
            // fase 4
            Registers[desplazadorDerecha((Instruccion & 0x001F0000), 16)] = AluOut;
            break;

        // lw
        case 0b000011:
            alu(suma,  A, inmediato,  AluOut);
            // fase 4
            MemoryRegister = Memoria.getWord(AluOut);
            // MemoryRegister = MemoriaI[AluOut];
            // fase 5
            Registers[desplazadorDerecha((Instruccion & 0x0003E000), 21)] = MemoryRegister;
            break;

        // sw
        case 0b000001:
            alu(suma,  A, inmediato,  AluOut);
            // fase 4
            if (Memoria.putWordInMemory(AluOut, Registers[desplazadorDerecha((Instruccion & 0x0003E000), 21)])) {
                cout << "error memoria";
            }

            // MemoriaI[AluOut] = Registers[desplazadorDerecha((Instruccion & 0x0003E000), 21)];
            Memoria.putWordInMemory(AluOut, Registers[desplazadorDerecha((Instruccion & 0x0003E000), 21)]);

            break;

        // beq
        case 0b000100:
            // fase 3
            if(alu(resta,  A, B)){
                PC = AluOut;
            }

            break;

        // bne
        case 0b000101:
            // fase 3
            if(!alu(resta,  A, B)){
                PC = AluOut;
            }
            
            break;

        // j
        case 0b000010:

            // no se requiere la alu en teoria
            // TODO queda por ver

            break;
    }
    printRegisters(Registers);
    

}


