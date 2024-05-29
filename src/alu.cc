#include <cstdio>
#include <iostream>
#include "alu.h"
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
            b = b | (0x00000001 << i);
        }

        prueba3 = prueba3 >> 1; 
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
            base = (base | (0x00000001 << i));
            carry = 1;

        } else if (aprima && bprima && !carry) {
            // s 0 c 1
            carry = 1;

        } else if (aprima && !bprima && carry) {
            // s 0 c 1
            carry = 1;

        } else if (aprima && !bprima && !carry) {
            // s 1 c 0
            base = (base | (0x00000001 << i));

        } else if (!aprima && bprima && carry) {
            // s 0 c 1
            carry = 1;

        } else if (!aprima && bprima && !carry) {
            // s 1 c 0
            base = (base | (0x00000001 << i));

        } else if (!aprima && !bprima && carry) {
            // s 1 c 0
            base = (base | (0x00000001 << i));
            carry = 0;

        } else if (!aprima && !bprima && !carry) {
            // s 0 c 0
        }

        prueba1 = (prueba1 >> 1);
        prueba2 = (prueba2 >> 1);
    }

    return base;
}

int64_t booth(int32_t a, int32_t b){
    int64_t result;
    int64_t mascaraAbajo = 0x0000000000000001;
    result = (int64_t)a;
    bool q = false;
    int32_t resultadoAlu;

    for (int i = 0; i<32; i++) {

        if ( (result & mascaraAbajo) && !q) {
            // resta
            resultadoAlu = sumador(((int32_t)(result >> 32)),  b, false);
            result = ((result & 0x00000000FFFFFFFF) | (((int64_t)resultadoAlu) << 32));

        } else if ( !(result & mascaraAbajo) && q) {
            // suma
            resultadoAlu = sumador((int32_t)(result >> 32),  b, true);
            result = ((result & 0x00000000FFFFFFFF) | (((int64_t)resultadoAlu) << 32));
        }     

        q = (result & mascaraAbajo);

        result = result >> 1;

    }

    return result;
}


void desplazadorDivision(int32_t &a, int32_t &b){
    a = a << 1;

    if (b < 0) {
        a = a | 0x00000001;
    }

    b = b << 1;

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

