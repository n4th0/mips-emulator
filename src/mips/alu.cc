#include <cstdio>
#include <iostream>
#include "alu.h"
#include "desplazadores.h"
#include <cstdint>
using namespace std;

// negador literal, no inversor
int32_t negador(int32_t b){
    int32_t prueba3 = b;
    int32_t aux;
    int32_t mascara = 0x00000001;
    b = 0x00000000;

    for (int i = 0; i<32; i++) {
        aux = (prueba3 & mascara);
        if (!aux) {
            b = b | desplazadorIzquierda(0x00000001, i);
            // b = b | (0x00000001 << i);
        }

        prueba3 = desplazadorDerecha(prueba3, 1); 
        // prueba3 = prueba3 >> 1; 
    }

    return b;
}

int32_t sumador(int32_t a, int32_t b, bool suma){
    int32_t carry = 0x00000000;
    int32_t mascara = 0x00000001;

    if(!suma){
        carry = 0x00000001;
        b = negador(b);
    }

    int32_t aprima;
    int32_t bprima;

    int32_t base = 0x00000000;

    int32_t prueba1 = a;
    int32_t prueba2 = b;

    for (int i = 0; i<32; i++) {
        aprima = (prueba1 & mascara);
        bprima = (prueba2 & mascara);

        if (aprima && bprima && carry) {
            // s 1 c 1
            base = (base | desplazadorIzquierda(0x00000001, i));
            // base = (base | (0x00000001 << i));
            carry = 1;

        } else if (aprima && bprima && !carry) {
            // s 0 c 1
            carry = 1;

        } else if (aprima && !bprima && carry) {
            // s 0 c 1
            carry = 1;

        } else if (aprima && !bprima && !carry) {
            // s 1 c 0
            base = (base | desplazadorIzquierda(0x00000001, i));
            // base = (base | (0x00000001 << i));

        } else if (!aprima && bprima && carry) {
            // s 0 c 1
            carry = 1;

        } else if (!aprima && bprima && !carry) {
            // s 1 c 0
            base = (base | desplazadorIzquierda(0x00000001, i));
            // base = (base | (0x00000001 << i));

        } else if (!aprima && !bprima && carry) {
            // s 1 c 0
            base = (base | desplazadorIzquierda(0x00000001, i));
            // base = (base | (0x00000001 << i));
            carry = 0;

        } else if (!aprima && !bprima && !carry) {
            // s 0 c 0
        }

        // prueba1 = (prueba1 >> 1);
        // prueba2 = (prueba2 >> 1);
        prueba1 = desplazadorDerecha(prueba1, 1);
        prueba2 = desplazadorDerecha(prueba2, 1);
    }

    return base;
}


void desplazadorBooth(int32_t &up, int32_t &down){
    bool a;
    a = (up & 1);
    up = desplazadorDerecha(up, 1);
    down = desplazadorDerecha(down, 1); 
    down = down & 0x7FFFFFFF; // de aritmético a lógico

    if (a) {
        down = down | 0x80000000;
    }

}

int64_t ttos(int32_t up, int32_t down){
    int64_t a = 0;
    if(up & 0x00000001) { a = a | 0x0000000100000000; }
    if(up & 0x00000002) { a = a | 0x0000000200000000; }
    if(up & 0x00000004) { a = a | 0x0000000400000000; }
    if(up & 0x00000008) { a = a | 0x0000000800000000; }
    if(up & 0x00000010) { a = a | 0x0000001000000000; }
    if(up & 0x00000020) { a = a | 0x0000002000000000; }
    if(up & 0x00000040) { a = a | 0x0000004000000000; }
    if(up & 0x00000080) { a = a | 0x0000008000000000; }
    if(up & 0x00000100) { a = a | 0x0000010000000000; }
    if(up & 0x00000200) { a = a | 0x0000020000000000; }
    if(up & 0x00000400) { a = a | 0x0000040000000000; }
    if(up & 0x00000800) { a = a | 0x0000080000000000; }
    if(up & 0x00001000) { a = a | 0x0000100000000000; }
    if(up & 0x00002000) { a = a | 0x0000200000000000; }
    if(up & 0x00004000) { a = a | 0x0000400000000000; }
    if(up & 0x00008000) { a = a | 0x0000800000000000; }
    if(up & 0x00010000) { a = a | 0x0001000000000000; }
    if(up & 0x00020000) { a = a | 0x0002000000000000; }
    if(up & 0x00040000) { a = a | 0x0004000000000000; }
    if(up & 0x00080000) { a = a | 0x0008000000000000; }
    if(up & 0x00100000) { a = a | 0x0010000000000000; }
    if(up & 0x00200000) { a = a | 0x0020000000000000; }
    if(up & 0x00400000) { a = a | 0x0040000000000000; }
    if(up & 0x00800000) { a = a | 0x0080000000000000; }
    if(up & 0x01000000) { a = a | 0x0100000000000000; }
    if(up & 0x02000000) { a = a | 0x0200000000000000; }
    if(up & 0x04000000) { a = a | 0x0400000000000000; }
    if(up & 0x08000000) { a = a | 0x0800000000000000; }
    if(up & 0x10000000) { a = a | 0x1000000000000000; }
    if(up & 0x20000000) { a = a | 0x2000000000000000; }
    if(up & 0x40000000) { a = a | 0x4000000000000000; }
    if(up & 0x80000000) { a = a | 0x8000000000000000; }
    a = a | down;
    return a;
}

int64_t booth(int32_t a, int32_t b){
    int32_t mascaraAbajo = 1;
    bool q = false;
    int32_t up = 0;
    int32_t down = b;

    for (int i = 0; i<32; i++) {

        if ((down & mascaraAbajo) && !q) {
            // resta
            up = sumador(up,  a, false);
        } else if (!(down & mascaraAbajo) && q) {
            // suma
            up = sumador(up,  a, true);
        }     

        q = (down & mascaraAbajo);


        desplazadorBooth(up, down);
        // result = result >> 1;

    }

    return ttos(up, down);
}


void desplazadorDivision(int32_t &a, int32_t &b){

    // a = a << 1;
    a = desplazadorIzquierda(a, 1);

    if (b < 0) {
        a = a | 0x00000001;
    }

    b = desplazadorIzquierda(b, 1);
    // b = b << 1;

}

// grande a 
// pequeño b
void divisionSinRestauracion(int32_t a, int32_t b, int32_t &cociente, int32_t &resto){
    int32_t up = 0;
    int32_t dw = 0;

    up = sumador(0, b, false);
    dw = a;

    for (int i = 0; i < 32; i++) {

        if (up < 0) {

            desplazadorDivision(up, dw);
            up = sumador(up,  b, true);

        } else {
            desplazadorDivision(up, dw);
            up = sumador(up,  b, false);

        }

        if (up < 0) {
        }else {
            dw = dw | 1;
        }
    }

    if (up < 0) {
        up = sumador(up,  b, true);
    }

    resto = up; // resto
    cociente = dw; // cociente

}

