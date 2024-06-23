#ifndef _ALU_H_
#define _ALU_H_
#include <cstdint>

// negador
int32_t negador(int32_t b);

// sumador/restador
int32_t sumador(int32_t a, int32_t b, bool suma);

// multiplicacion con el argoritmo de booth
int64_t booth(int32_t a, int32_t b);

// desplazador conectado a y b
void desplazadorDivision(int32_t &a, int32_t &b);

// division 
void divisionSinRestauracion(int32_t a, int32_t b, int32_t &cociente, int32_t &resto);
#endif
