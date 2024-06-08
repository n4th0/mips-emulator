#include <iostream>
#include "syscall.h"
#include <cstdint>
using namespace std;

void syscall(int32_t reg[32]){
    switch (reg[2]) {
        case 1:
            cout << (int)reg[4];
            break;
        case 2:
            // print float
            break;
        case 3:
            // print double
            break;
        case 4:
            // print string
            break;
        case 5:
            // read int
            cin >> reg[2];
            break;
        case 6:
            // read float
            break;
        case 7:
            // read double
            break;
        case 8:
            // read string
            break;
        case 10:
            exit(0);
            break;
        case 11:
            cout << (char)reg[4];
            break;
        case 12:
            char a;
            cin >> a;
            reg[4] = (int)a;
            break;
    }
}

