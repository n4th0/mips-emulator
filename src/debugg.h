#ifndef _DEBUGG_H_
#define _DEBUGG_H_

#include <iostream>
#include <cstdint>

using namespace std;

inline void debugg(char n){
    cout << (int)n << endl;
}

inline void debugg(int32_t n){
    cout << (int)n << endl;
}

inline void debugg(uint16_t n){
    cout << (int)n << endl;
}


#endif

