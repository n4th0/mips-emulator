# MIPS
Este repositorio contiene el código para emular la arquitectura MIPS.

## Introducción
El R2000 es un conjunto de chips de microprocesador de 32 bits desarrollado por MIPS Computer Systems que implementó 
la arquitectura de conjunto de instrucciones MIPS I (ISA). Presentado en enero de 1986, fue la primera implementación 
comercial de la arquitectura MIPS y el primer procesador comercial RISC disponible para todas las empresas. El R2000 
compitió con las minicomputadoras VAX de Digital Equipment Corporation (DEC) y con los microprocesadores Motorola 68000, 
y el 80386 de Intel. Los usuarios de R2000 incluyeron las estaciones de trabajo Unix de Ardent Computer, DEC, Silicon Graphics, 
Northern Telecom y MIPS. 

## Reglas
Podría no poner ninguna regla a la hora de hacer el emulador pero no me parecería correcto el hecho de, por ejemplo,
el sistema de la alu usar las operaciones aritméticas que me ofrece C++. Es decir he de imponer ciertas normas para ver 
que puedo y que no puedo hacer.

- No puedo usar operadores aritméticos (+,-,*,/,%) ni desplazadores << / >> (la unica excepción es en la parte de memora, que debe estar simulada, pero aun así cuando sea necesario se usará una forma en la que no se requieran los operadores)
- Puedo usar enums para las señales, a pesar de que es posible la realización de la comunicación de la UC con la ALU mediante bits, lo voy a simplificar usando enums cuando su uso sea trivial

## Compilación 
    make

## Notas
La memoria está simulada, en el sentido de que no se emula a bajo nivel como el caso de la ALU.
Para el uso se debe de introducir la codificación de la instruccione en el archivo principal.cc, una vez metido debe compilarse y ejecutarse, para pasarle el archivo.bin a mips-emu.


## Inspiraciones/Fuentes de información
- La asignatura de EC de la carrera de ingenieria informática.
- El simulador MARS.



