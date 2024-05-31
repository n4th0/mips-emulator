#include <cstdint>
#include "desplazadores.h"
using namespace std;

int32_t desplazadorDerecha(int32_t a, int cantidad){

    int32_t base = 0;

    switch (cantidad) {
        case 0:
            base = a;
            break;
        case 1:

            if(0x80000000 & a) { base = base | 0x80000000;  
                                 base = base | 0x40000000; }
            if(0x40000000 & a) { base = base | 0x20000000; }
            if(0x20000000 & a) { base = base | 0x10000000; }
            if(0x10000000 & a) { base = base | 0x08000000; }
            if(0x08000000 & a) { base = base | 0x04000000; }
            if(0x04000000 & a) { base = base | 0x02000000; }
            if(0x02000000 & a) { base = base | 0x01000000; }
            if(0x01000000 & a) { base = base | 0x00800000; }
            if(0x00800000 & a) { base = base | 0x00400000; }
            if(0x00400000 & a) { base = base | 0x00200000; }
            if(0x00200000 & a) { base = base | 0x00100000; }
            if(0x00100000 & a) { base = base | 0x00080000; }
            if(0x00080000 & a) { base = base | 0x00040000; }
            if(0x00040000 & a) { base = base | 0x00020000; }
            if(0x00020000 & a) { base = base | 0x00010000; }
            if(0x00010000 & a) { base = base | 0x00008000; }
            if(0x00008000 & a) { base = base | 0x00004000; }
            if(0x00004000 & a) { base = base | 0x00002000; }
            if(0x00002000 & a) { base = base | 0x00001000; }
            if(0x00001000 & a) { base = base | 0x00000800; }
            if(0x00000800 & a) { base = base | 0x00000400; }
            if(0x00000400 & a) { base = base | 0x00000200; }
            if(0x00000200 & a) { base = base | 0x00000100; }
            if(0x00000100 & a) { base = base | 0x00000080; }
            if(0x00000080 & a) { base = base | 0x00000040; }
            if(0x00000040 & a) { base = base | 0x00000020; }
            if(0x00000020 & a) { base = base | 0x00000010; }
            if(0x00000010 & a) { base = base | 0x00000008; }
            if(0x00000008 & a) { base = base | 0x00000004; }
            if(0x00000004 & a) { base = base | 0x00000002; }
            if(0x00000002 & a) { base = base | 0x00000001; }

            break;
        case 2:

            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; }
            if(0x40000000 & a) { base = base | 0x10000000; }
            if(0x20000000 & a) { base = base | 0x08000000; }
            if(0x10000000 & a) { base = base | 0x04000000; }
            if(0x08000000 & a) { base = base | 0x02000000; }
            if(0x04000000 & a) { base = base | 0x01000000; }
            if(0x02000000 & a) { base = base | 0x00800000; }
            if(0x01000000 & a) { base = base | 0x00400000; }
            if(0x00800000 & a) { base = base | 0x00200000; }
            if(0x00400000 & a) { base = base | 0x00100000; }
            if(0x00200000 & a) { base = base | 0x00080000; }
            if(0x00100000 & a) { base = base | 0x00040000; }
            if(0x00080000 & a) { base = base | 0x00020000; }
            if(0x00040000 & a) { base = base | 0x00010000; }
            if(0x00020000 & a) { base = base | 0x00008000; }
            if(0x00010000 & a) { base = base | 0x00004000; }
            if(0x00008000 & a) { base = base | 0x00002000; }
            if(0x00004000 & a) { base = base | 0x00001000; }
            if(0x00002000 & a) { base = base | 0x00000800; }
            if(0x00001000 & a) { base = base | 0x00000400; }
            if(0x00000800 & a) { base = base | 0x00000200; }
            if(0x00000400 & a) { base = base | 0x00000100; }
            if(0x00000200 & a) { base = base | 0x00000080; }
            if(0x00000100 & a) { base = base | 0x00000040; }
            if(0x00000080 & a) { base = base | 0x00000020; }
            if(0x00000040 & a) { base = base | 0x00000010; }
            if(0x00000020 & a) { base = base | 0x00000008; }
            if(0x00000010 & a) { base = base | 0x00000004; }
            if(0x00000008 & a) { base = base | 0x00000002; }
            if(0x00000004 & a) { base = base | 0x00000001; }

            break;
        case 3:

            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000;  
                base = base | 0x10000000; }
            if(0x40000000 & a) { base = base | 0x08000000; }
            if(0x20000000 & a) { base = base | 0x04000000; }
            if(0x10000000 & a) { base = base | 0x02000000; }
            if(0x08000000 & a) { base = base | 0x01000000; }
            if(0x04000000 & a) { base = base | 0x00800000; }
            if(0x02000000 & a) { base = base | 0x00400000; }
            if(0x01000000 & a) { base = base | 0x00200000; }
            if(0x00800000 & a) { base = base | 0x00100000; }
            if(0x00400000 & a) { base = base | 0x00080000; }
            if(0x00200000 & a) { base = base | 0x00040000; }
            if(0x00100000 & a) { base = base | 0x00020000; }
            if(0x00080000 & a) { base = base | 0x00010000; }
            if(0x00040000 & a) { base = base | 0x00008000; }
            if(0x00020000 & a) { base = base | 0x00004000; }
            if(0x00010000 & a) { base = base | 0x00002000; }
            if(0x00008000 & a) { base = base | 0x00001000; }
            if(0x00004000 & a) { base = base | 0x00000800; }
            if(0x00002000 & a) { base = base | 0x00000400; }
            if(0x00001000 & a) { base = base | 0x00000200; }
            if(0x00000800 & a) { base = base | 0x00000100; }
            if(0x00000400 & a) { base = base | 0x00000080; }
            if(0x00000200 & a) { base = base | 0x00000040; }
            if(0x00000100 & a) { base = base | 0x00000020; }
            if(0x00000080 & a) { base = base | 0x00000010; }
            if(0x00000040 & a) { base = base | 0x00000008; }
            if(0x00000020 & a) { base = base | 0x00000004; }
            if(0x00000010 & a) { base = base | 0x00000002; }
            if(0x00000008 & a) { base = base | 0x00000001; }

            break;
        case 4:

            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; }
            if(0x40000000 & a) { base = base | 0x04000000; }
            if(0x20000000 & a) { base = base | 0x02000000; }
            if(0x10000000 & a) { base = base | 0x01000000; }
            if(0x08000000 & a) { base = base | 0x00800000; }
            if(0x04000000 & a) { base = base | 0x00400000; }
            if(0x02000000 & a) { base = base | 0x00200000; }
            if(0x01000000 & a) { base = base | 0x00100000; }
            if(0x00800000 & a) { base = base | 0x00080000; }
            if(0x00400000 & a) { base = base | 0x00040000; }
            if(0x00200000 & a) { base = base | 0x00020000; }
            if(0x00100000 & a) { base = base | 0x00010000; }
            if(0x00080000 & a) { base = base | 0x00008000; }
            if(0x00040000 & a) { base = base | 0x00004000; }
            if(0x00020000 & a) { base = base | 0x00002000; }
            if(0x00010000 & a) { base = base | 0x00001000; }
            if(0x00008000 & a) { base = base | 0x00000800; }
            if(0x00004000 & a) { base = base | 0x00000400; }
            if(0x00002000 & a) { base = base | 0x00000200; }
            if(0x00001000 & a) { base = base | 0x00000100; }
            if(0x00000800 & a) { base = base | 0x00000080; }
            if(0x00000400 & a) { base = base | 0x00000040; }
            if(0x00000200 & a) { base = base | 0x00000020; }
            if(0x00000100 & a) { base = base | 0x00000010; }
            if(0x00000080 & a) { base = base | 0x00000008; }
            if(0x00000040 & a) { base = base | 0x00000004; }
            if(0x00000020 & a) { base = base | 0x00000002; }
            if(0x00000010 & a) { base = base | 0x00000001; }
            break;
        case 5:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; }
            if(0x40000000 & a) { base = base | 0x02000000; }
            if(0x20000000 & a) { base = base | 0x01000000; }
            if(0x10000000 & a) { base = base | 0x00800000; }
            if(0x08000000 & a) { base = base | 0x00400000; }
            if(0x04000000 & a) { base = base | 0x00200000; }
            if(0x02000000 & a) { base = base | 0x00100000; }
            if(0x01000000 & a) { base = base | 0x00080000; }
            if(0x00800000 & a) { base = base | 0x00040000; }
            if(0x00400000 & a) { base = base | 0x00020000; }
            if(0x00200000 & a) { base = base | 0x00010000; }
            if(0x00100000 & a) { base = base | 0x00008000; }
            if(0x00080000 & a) { base = base | 0x00004000; }
            if(0x00040000 & a) { base = base | 0x00002000; }
            if(0x00020000 & a) { base = base | 0x00001000; }
            if(0x00010000 & a) { base = base | 0x00000800; }
            if(0x00008000 & a) { base = base | 0x00000400; }
            if(0x00004000 & a) { base = base | 0x00000200; }
            if(0x00002000 & a) { base = base | 0x00000100; }
            if(0x00001000 & a) { base = base | 0x00000080; }
            if(0x00000800 & a) { base = base | 0x00000040; }
            if(0x00000400 & a) { base = base | 0x00000020; }
            if(0x00000200 & a) { base = base | 0x00000010; }
            if(0x00000100 & a) { base = base | 0x00000008; }
            if(0x00000080 & a) { base = base | 0x00000004; }
            if(0x00000040 & a) { base = base | 0x00000002; }
            if(0x00000020 & a) { base = base | 0x00000001; }

            break;
        case 6:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; 
                base = base | 0x02000000; }
            if(0x40000000 & a) { base = base | 0x01000000; }
            if(0x20000000 & a) { base = base | 0x00800000; }
            if(0x10000000 & a) { base = base | 0x00400000; }
            if(0x08000000 & a) { base = base | 0x00200000; }
            if(0x04000000 & a) { base = base | 0x00100000; }
            if(0x02000000 & a) { base = base | 0x00080000; }
            if(0x01000000 & a) { base = base | 0x00040000; }
            if(0x00800000 & a) { base = base | 0x00020000; }
            if(0x00400000 & a) { base = base | 0x00010000; }
            if(0x00200000 & a) { base = base | 0x00008000; }
            if(0x00100000 & a) { base = base | 0x00004000; }
            if(0x00080000 & a) { base = base | 0x00002000; }
            if(0x00040000 & a) { base = base | 0x00001000; }
            if(0x00020000 & a) { base = base | 0x00000800; }
            if(0x00010000 & a) { base = base | 0x00000400; }
            if(0x00008000 & a) { base = base | 0x00000200; }
            if(0x00004000 & a) { base = base | 0x00000100; }
            if(0x00002000 & a) { base = base | 0x00000080; }
            if(0x00001000 & a) { base = base | 0x00000040; }
            if(0x00000800 & a) { base = base | 0x00000020; }
            if(0x00000400 & a) { base = base | 0x00000010; }
            if(0x00000200 & a) { base = base | 0x00000008; }
            if(0x00000100 & a) { base = base | 0x00000004; }
            if(0x00000080 & a) { base = base | 0x00000002; }
            if(0x00000040 & a) { base = base | 0x00000001; }
            break;
        case 7:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; 
                base = base | 0x02000000; 
                base = base | 0x01000000; }
            if(0x40000000 & a) { base = base | 0x00800000; }
            if(0x20000000 & a) { base = base | 0x00400000; }
            if(0x10000000 & a) { base = base | 0x00200000; }
            if(0x08000000 & a) { base = base | 0x00100000; }
            if(0x04000000 & a) { base = base | 0x00080000; }
            if(0x02000000 & a) { base = base | 0x00040000; }
            if(0x01000000 & a) { base = base | 0x00020000; }
            if(0x00800000 & a) { base = base | 0x00010000; }
            if(0x00400000 & a) { base = base | 0x00008000; }
            if(0x00200000 & a) { base = base | 0x00004000; }
            if(0x00100000 & a) { base = base | 0x00002000; }
            if(0x00080000 & a) { base = base | 0x00001000; }
            if(0x00040000 & a) { base = base | 0x00000800; }
            if(0x00020000 & a) { base = base | 0x00000400; }
            if(0x00010000 & a) { base = base | 0x00000200; }
            if(0x00008000 & a) { base = base | 0x00000100; }
            if(0x00004000 & a) { base = base | 0x00000080; }
            if(0x00002000 & a) { base = base | 0x00000040; }
            if(0x00001000 & a) { base = base | 0x00000020; }
            if(0x00000800 & a) { base = base | 0x00000010; }
            if(0x00000400 & a) { base = base | 0x00000008; }
            if(0x00000200 & a) { base = base | 0x00000004; }
            if(0x00000100 & a) { base = base | 0x00000002; }
            if(0x00000080 & a) { base = base | 0x00000001; }

            break;
        case 8:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; 
                base = base | 0x02000000; 
                base = base | 0x01000000; 
                base = base | 0x00800000; }
            if(0x40000000 & a) { base = base | 0x00400000; }
            if(0x20000000 & a) { base = base | 0x00200000; }
            if(0x10000000 & a) { base = base | 0x00100000; }
            if(0x08000000 & a) { base = base | 0x00080000; }
            if(0x04000000 & a) { base = base | 0x00040000; }
            if(0x02000000 & a) { base = base | 0x00020000; }
            if(0x01000000 & a) { base = base | 0x00010000; }
            if(0x00800000 & a) { base = base | 0x00008000; }
            if(0x00400000 & a) { base = base | 0x00004000; }
            if(0x00200000 & a) { base = base | 0x00002000; }
            if(0x00100000 & a) { base = base | 0x00001000; }
            if(0x00080000 & a) { base = base | 0x00000800; }
            if(0x00040000 & a) { base = base | 0x00000400; }
            if(0x00020000 & a) { base = base | 0x00000200; }
            if(0x00010000 & a) { base = base | 0x00000100; }
            if(0x00008000 & a) { base = base | 0x00000080; }
            if(0x00004000 & a) { base = base | 0x00000040; }
            if(0x00002000 & a) { base = base | 0x00000020; }
            if(0x00001000 & a) { base = base | 0x00000010; }
            if(0x00000800 & a) { base = base | 0x00000008; }
            if(0x00000400 & a) { base = base | 0x00000004; }
            if(0x00000200 & a) { base = base | 0x00000002; }
            if(0x00000100 & a) { base = base | 0x00000001; }

            break;
        case 9:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; 
                base = base | 0x02000000; 
                base = base | 0x01000000; 
                base = base | 0x00800000; 
                base = base | 0x00400000; }
            if(0x40000000 & a) { base = base | 0x00200000; }
            if(0x20000000 & a) { base = base | 0x00100000; }
            if(0x10000000 & a) { base = base | 0x00080000; }
            if(0x08000000 & a) { base = base | 0x00040000; }
            if(0x04000000 & a) { base = base | 0x00020000; }
            if(0x02000000 & a) { base = base | 0x00010000; }
            if(0x01000000 & a) { base = base | 0x00008000; }
            if(0x00800000 & a) { base = base | 0x00004000; }
            if(0x00400000 & a) { base = base | 0x00002000; }
            if(0x00200000 & a) { base = base | 0x00001000; }
            if(0x00100000 & a) { base = base | 0x00000800; }
            if(0x00080000 & a) { base = base | 0x00000400; }
            if(0x00040000 & a) { base = base | 0x00000200; }
            if(0x00020000 & a) { base = base | 0x00000100; }
            if(0x00010000 & a) { base = base | 0x00000080; }
            if(0x00008000 & a) { base = base | 0x00000040; }
            if(0x00004000 & a) { base = base | 0x00000020; }
            if(0x00002000 & a) { base = base | 0x00000010; }
            if(0x00001000 & a) { base = base | 0x00000008; }
            if(0x00000800 & a) { base = base | 0x00000004; }
            if(0x00000400 & a) { base = base | 0x00000002; }
            if(0x00000200 & a) { base = base | 0x00000001; }

            break;
        case 10:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; 
                base = base | 0x02000000; 
                base = base | 0x01000000; 
                base = base | 0x00800000; 
                base = base | 0x00400000; 
                base = base | 0x00200000; }
            if(0x40000000 & a) { base = base | 0x00100000; }
            if(0x20000000 & a) { base = base | 0x00080000; }
            if(0x10000000 & a) { base = base | 0x00040000; }
            if(0x08000000 & a) { base = base | 0x00020000; }
            if(0x04000000 & a) { base = base | 0x00010000; }
            if(0x02000000 & a) { base = base | 0x00008000; }
            if(0x01000000 & a) { base = base | 0x00004000; }
            if(0x00800000 & a) { base = base | 0x00002000; }
            if(0x00400000 & a) { base = base | 0x00001000; }
            if(0x00200000 & a) { base = base | 0x00000800; }
            if(0x00100000 & a) { base = base | 0x00000400; }
            if(0x00080000 & a) { base = base | 0x00000200; }
            if(0x00040000 & a) { base = base | 0x00000100; }
            if(0x00020000 & a) { base = base | 0x00000080; }
            if(0x00010000 & a) { base = base | 0x00000040; }
            if(0x00008000 & a) { base = base | 0x00000020; }
            if(0x00004000 & a) { base = base | 0x00000010; }
            if(0x00002000 & a) { base = base | 0x00000008; }
            if(0x00001000 & a) { base = base | 0x00000004; }
            if(0x00000800 & a) { base = base | 0x00000002; }
            if(0x00000400 & a) { base = base | 0x00000001; }

            break;
        case 11:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; 
                base = base | 0x02000000; 
                base = base | 0x01000000; 
                base = base | 0x00800000; 
                base = base | 0x00400000; 
                base = base | 0x00200000; 
                base = base | 0x00100000; }
            if(0x40000000 & a) { base = base | 0x00080000; }
            if(0x20000000 & a) { base = base | 0x00040000; }
            if(0x10000000 & a) { base = base | 0x00020000; }
            if(0x08000000 & a) { base = base | 0x00010000; }
            if(0x04000000 & a) { base = base | 0x00008000; }
            if(0x02000000 & a) { base = base | 0x00004000; }
            if(0x01000000 & a) { base = base | 0x00002000; }
            if(0x00800000 & a) { base = base | 0x00001000; }
            if(0x00400000 & a) { base = base | 0x00000800; }
            if(0x00200000 & a) { base = base | 0x00000400; }
            if(0x00100000 & a) { base = base | 0x00000200; }
            if(0x00080000 & a) { base = base | 0x00000100; }
            if(0x00040000 & a) { base = base | 0x00000080; }
            if(0x00020000 & a) { base = base | 0x00000040; }
            if(0x00010000 & a) { base = base | 0x00000020; }
            if(0x00008000 & a) { base = base | 0x00000010; }
            if(0x00004000 & a) { base = base | 0x00000008; }
            if(0x00002000 & a) { base = base | 0x00000004; }
            if(0x00001000 & a) { base = base | 0x00000002; }
            if(0x00000800 & a) { base = base | 0x00000001; }

            break;
        case 12:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; 
                base = base | 0x02000000; 
                base = base | 0x01000000; 
                base = base | 0x00800000; 
                base = base | 0x00400000; 
                base = base | 0x00200000; 
                base = base | 0x00100000; 
                base = base | 0x00080000; }
            if(0x40000000 & a) { base = base | 0x00040000; }
            if(0x20000000 & a) { base = base | 0x00020000; }
            if(0x10000000 & a) { base = base | 0x00010000; }
            if(0x08000000 & a) { base = base | 0x00008000; }
            if(0x04000000 & a) { base = base | 0x00004000; }
            if(0x02000000 & a) { base = base | 0x00002000; }
            if(0x01000000 & a) { base = base | 0x00001000; }
            if(0x00800000 & a) { base = base | 0x00000800; }
            if(0x00400000 & a) { base = base | 0x00000400; }
            if(0x00200000 & a) { base = base | 0x00000200; }
            if(0x00100000 & a) { base = base | 0x00000100; }
            if(0x00080000 & a) { base = base | 0x00000080; }
            if(0x00040000 & a) { base = base | 0x00000040; }
            if(0x00020000 & a) { base = base | 0x00000020; }
            if(0x00010000 & a) { base = base | 0x00000010; }
            if(0x00008000 & a) { base = base | 0x00000008; }
            if(0x00004000 & a) { base = base | 0x00000004; }
            if(0x00002000 & a) { base = base | 0x00000002; }
            if(0x00001000 & a) { base = base | 0x00000001; }

            break;
        case 13:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; 
                base = base | 0x02000000; 
                base = base | 0x01000000; 
                base = base | 0x00800000; 
                base = base | 0x00400000; 
                base = base | 0x00200000; 
                base = base | 0x00100000; 
                base = base | 0x00080000; 
                base = base | 0x00040000; }
            if(0x40000000 & a) { base = base | 0x00020000; }
            if(0x20000000 & a) { base = base | 0x00010000; }
            if(0x10000000 & a) { base = base | 0x00008000; }
            if(0x08000000 & a) { base = base | 0x00004000; }
            if(0x04000000 & a) { base = base | 0x00002000; }
            if(0x02000000 & a) { base = base | 0x00001000; }
            if(0x01000000 & a) { base = base | 0x00000800; }
            if(0x00800000 & a) { base = base | 0x00000400; }
            if(0x00400000 & a) { base = base | 0x00000200; }
            if(0x00200000 & a) { base = base | 0x00000100; }
            if(0x00100000 & a) { base = base | 0x00000080; }
            if(0x00080000 & a) { base = base | 0x00000040; }
            if(0x00040000 & a) { base = base | 0x00000020; }
            if(0x00020000 & a) { base = base | 0x00000010; }
            if(0x00010000 & a) { base = base | 0x00000008; }
            if(0x00008000 & a) { base = base | 0x00000004; }
            if(0x00004000 & a) { base = base | 0x00000002; }
            if(0x00002000 & a) { base = base | 0x00000001; }

            break;
        case 14:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; 
                base = base | 0x02000000; 
                base = base | 0x01000000; 
                base = base | 0x00800000; 
                base = base | 0x00400000; 
                base = base | 0x00200000; 
                base = base | 0x00100000; 
                base = base | 0x00080000; 
                base = base | 0x00040000; 
                base = base | 0x00020000; }
            if(0x40000000 & a) { base = base | 0x00010000; }
            if(0x20000000 & a) { base = base | 0x00008000; }
            if(0x10000000 & a) { base = base | 0x00004000; }
            if(0x08000000 & a) { base = base | 0x00002000; }
            if(0x04000000 & a) { base = base | 0x00001000; }
            if(0x02000000 & a) { base = base | 0x00000800; }
            if(0x01000000 & a) { base = base | 0x00000400; }
            if(0x00800000 & a) { base = base | 0x00000200; }
            if(0x00400000 & a) { base = base | 0x00000100; }
            if(0x00200000 & a) { base = base | 0x00000080; }
            if(0x00100000 & a) { base = base | 0x00000040; }
            if(0x00080000 & a) { base = base | 0x00000020; }
            if(0x00040000 & a) { base = base | 0x00000010; }
            if(0x00020000 & a) { base = base | 0x00000008; }
            if(0x00010000 & a) { base = base | 0x00000004; }
            if(0x00008000 & a) { base = base | 0x00000002; }
            if(0x00004000 & a) { base = base | 0x00000001; }

            break;
        case 15:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; 
                base = base | 0x02000000; 
                base = base | 0x01000000; 
                base = base | 0x00800000; 
                base = base | 0x00400000; 
                base = base | 0x00200000; 
                base = base | 0x00100000; 
                base = base | 0x00080000; 
                base = base | 0x00040000; 
                base = base | 0x00020000; 
                base = base | 0x00010000; }
            if(0x40000000 & a) { base = base | 0x00008000; }
            if(0x20000000 & a) { base = base | 0x00004000; }
            if(0x10000000 & a) { base = base | 0x00002000; }
            if(0x08000000 & a) { base = base | 0x00001000; }
            if(0x04000000 & a) { base = base | 0x00000800; }
            if(0x02000000 & a) { base = base | 0x00000400; }
            if(0x01000000 & a) { base = base | 0x00000200; }
            if(0x00800000 & a) { base = base | 0x00000100; }
            if(0x00400000 & a) { base = base | 0x00000080; }
            if(0x00200000 & a) { base = base | 0x00000040; }
            if(0x00100000 & a) { base = base | 0x00000020; }
            if(0x00080000 & a) { base = base | 0x00000010; }
            if(0x00040000 & a) { base = base | 0x00000008; }
            if(0x00020000 & a) { base = base | 0x00000004; }
            if(0x00010000 & a) { base = base | 0x00000002; }
            if(0x00008000 & a) { base = base | 0x00000001; }

            break;
        case 16:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; 
                base = base | 0x02000000; 
                base = base | 0x01000000; 
                base = base | 0x00800000; 
                base = base | 0x00400000; 
                base = base | 0x00200000; 
                base = base | 0x00100000; 
                base = base | 0x00080000; 
                base = base | 0x00040000; 
                base = base | 0x00020000; 
                base = base | 0x00010000; 
                base = base | 0x00008000; }
            if(0x40000000 & a) { base = base | 0x00004000; }
            if(0x20000000 & a) { base = base | 0x00002000; }
            if(0x10000000 & a) { base = base | 0x00001000; }
            if(0x08000000 & a) { base = base | 0x00000800; }
            if(0x04000000 & a) { base = base | 0x00000400; }
            if(0x02000000 & a) { base = base | 0x00000200; }
            if(0x01000000 & a) { base = base | 0x00000100; }
            if(0x00800000 & a) { base = base | 0x00000080; }
            if(0x00400000 & a) { base = base | 0x00000040; }
            if(0x00200000 & a) { base = base | 0x00000020; }
            if(0x00100000 & a) { base = base | 0x00000010; }
            if(0x00080000 & a) { base = base | 0x00000008; }
            if(0x00040000 & a) { base = base | 0x00000004; }
            if(0x00020000 & a) { base = base | 0x00000002; }
            if(0x00010000 & a) { base = base | 0x00000001; }

            break;
        case 17:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; 
                base = base | 0x02000000; 
                base = base | 0x01000000; 
                base = base | 0x00800000; 
                base = base | 0x00400000; 
                base = base | 0x00200000; 
                base = base | 0x00100000; 
                base = base | 0x00080000; 
                base = base | 0x00040000; 
                base = base | 0x00020000; 
                base = base | 0x00010000; 
                base = base | 0x00008000; 
                base = base | 0x00004000; }
            if(0x40000000 & a) { base = base | 0x00002000; }
            if(0x20000000 & a) { base = base | 0x00001000; }
            if(0x10000000 & a) { base = base | 0x00000800; }
            if(0x08000000 & a) { base = base | 0x00000400; }
            if(0x04000000 & a) { base = base | 0x00000200; }
            if(0x02000000 & a) { base = base | 0x00000100; }
            if(0x01000000 & a) { base = base | 0x00000080; }
            if(0x00800000 & a) { base = base | 0x00000040; }
            if(0x00400000 & a) { base = base | 0x00000020; }
            if(0x00200000 & a) { base = base | 0x00000010; }
            if(0x00100000 & a) { base = base | 0x00000008; }
            if(0x00080000 & a) { base = base | 0x00000004; }
            if(0x00040000 & a) { base = base | 0x00000002; }
            if(0x00020000 & a) { base = base | 0x00000001; }

            break;
        case 18:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; 
                base = base | 0x02000000; 
                base = base | 0x01000000; 
                base = base | 0x00800000; 
                base = base | 0x00400000; 
                base = base | 0x00200000; 
                base = base | 0x00100000; 
                base = base | 0x00080000; 
                base = base | 0x00040000; 
                base = base | 0x00020000; 
                base = base | 0x00010000; 
                base = base | 0x00008000; 
                base = base | 0x00004000; 
                base = base | 0x00002000; }
            if(0x40000000 & a) { base = base | 0x00001000; }
            if(0x20000000 & a) { base = base | 0x00000800; }
            if(0x10000000 & a) { base = base | 0x00000400; }
            if(0x08000000 & a) { base = base | 0x00000200; }
            if(0x04000000 & a) { base = base | 0x00000100; }
            if(0x02000000 & a) { base = base | 0x00000080; }
            if(0x01000000 & a) { base = base | 0x00000040; }
            if(0x00800000 & a) { base = base | 0x00000020; }
            if(0x00400000 & a) { base = base | 0x00000010; }
            if(0x00200000 & a) { base = base | 0x00000008; }
            if(0x00100000 & a) { base = base | 0x00000004; }
            if(0x00080000 & a) { base = base | 0x00000002; }
            if(0x00040000 & a) { base = base | 0x00000001; }

            break;
        case 19:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; 
                base = base | 0x02000000; 
                base = base | 0x01000000; 
                base = base | 0x00800000; 
                base = base | 0x00400000; 
                base = base | 0x00200000; 
                base = base | 0x00100000; 
                base = base | 0x00080000; 
                base = base | 0x00040000; 
                base = base | 0x00020000; 
                base = base | 0x00010000; 
                base = base | 0x00008000; 
                base = base | 0x00004000; 
                base = base | 0x00002000; 
                base = base | 0x00001000; }
            if(0x40000000 & a) { base = base | 0x00000800; }
            if(0x20000000 & a) { base = base | 0x00000400; }
            if(0x10000000 & a) { base = base | 0x00000200; }
            if(0x08000000 & a) { base = base | 0x00000100; }
            if(0x04000000 & a) { base = base | 0x00000080; }
            if(0x02000000 & a) { base = base | 0x00000040; }
            if(0x01000000 & a) { base = base | 0x00000020; }
            if(0x00800000 & a) { base = base | 0x00000010; }
            if(0x00400000 & a) { base = base | 0x00000008; }
            if(0x00200000 & a) { base = base | 0x00000004; }
            if(0x00100000 & a) { base = base | 0x00000002; }
            if(0x00080000 & a) { base = base | 0x00000001; }

            break;
        case 20:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; 
                base = base | 0x02000000; 
                base = base | 0x01000000; 
                base = base | 0x00800000; 
                base = base | 0x00400000; 
                base = base | 0x00200000; 
                base = base | 0x00100000; 
                base = base | 0x00080000; 
                base = base | 0x00040000; 
                base = base | 0x00020000; 
                base = base | 0x00010000; 
                base = base | 0x00008000; 
                base = base | 0x00004000; 
                base = base | 0x00002000; 
                base = base | 0x00001000; 
                base = base | 0x00000800; }
            if(0x40000000 & a) { base = base | 0x00000400; }
            if(0x20000000 & a) { base = base | 0x00000200; }
            if(0x10000000 & a) { base = base | 0x00000100; }
            if(0x08000000 & a) { base = base | 0x00000080; }
            if(0x04000000 & a) { base = base | 0x00000040; }
            if(0x02000000 & a) { base = base | 0x00000020; }
            if(0x01000000 & a) { base = base | 0x00000010; }
            if(0x00800000 & a) { base = base | 0x00000008; }
            if(0x00400000 & a) { base = base | 0x00000004; }
            if(0x00200000 & a) { base = base | 0x00000002; }
            if(0x00100000 & a) { base = base | 0x00000001; }

            break;
        case 21:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; 
                base = base | 0x02000000; 
                base = base | 0x01000000; 
                base = base | 0x00800000; 
                base = base | 0x00400000; 
                base = base | 0x00200000; 
                base = base | 0x00100000; 
                base = base | 0x00080000; 
                base = base | 0x00040000; 
                base = base | 0x00020000; 
                base = base | 0x00010000; 
                base = base | 0x00008000; 
                base = base | 0x00004000; 
                base = base | 0x00002000; 
                base = base | 0x00001000; 
                base = base | 0x00000800; 
                base = base | 0x00000400; }
            if(0x40000000 & a) { base = base | 0x00000200; }
            if(0x20000000 & a) { base = base | 0x00000100; }
            if(0x10000000 & a) { base = base | 0x00000080; }
            if(0x08000000 & a) { base = base | 0x00000040; }
            if(0x04000000 & a) { base = base | 0x00000020; }
            if(0x02000000 & a) { base = base | 0x00000010; }
            if(0x01000000 & a) { base = base | 0x00000008; }
            if(0x00800000 & a) { base = base | 0x00000004; }
            if(0x00400000 & a) { base = base | 0x00000002; }
            if(0x00200000 & a) { base = base | 0x00000001; }

            break;
        case 22:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; 
                base = base | 0x02000000; 
                base = base | 0x01000000; 
                base = base | 0x00800000; 
                base = base | 0x00400000; 
                base = base | 0x00200000; 
                base = base | 0x00100000; 
                base = base | 0x00080000; 
                base = base | 0x00040000; 
                base = base | 0x00020000; 
                base = base | 0x00010000; 
                base = base | 0x00008000; 
                base = base | 0x00004000; 
                base = base | 0x00002000; 
                base = base | 0x00001000; 
                base = base | 0x00000800; 
                base = base | 0x00000400; 
                base = base | 0x00000200; }
            if(0x40000000 & a) { base = base | 0x00000100; }
            if(0x20000000 & a) { base = base | 0x00000080; }
            if(0x10000000 & a) { base = base | 0x00000040; }
            if(0x08000000 & a) { base = base | 0x00000020; }
            if(0x04000000 & a) { base = base | 0x00000010; }
            if(0x02000000 & a) { base = base | 0x00000008; }
            if(0x01000000 & a) { base = base | 0x00000004; }
            if(0x00800000 & a) { base = base | 0x00000002; }
            if(0x00400000 & a) { base = base | 0x00000001; }

            break;
        case 23:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; 
                base = base | 0x02000000; 
                base = base | 0x01000000; 
                base = base | 0x00800000; 
                base = base | 0x00400000; 
                base = base | 0x00200000; 
                base = base | 0x00100000; 
                base = base | 0x00080000; 
                base = base | 0x00040000; 
                base = base | 0x00020000; 
                base = base | 0x00010000; 
                base = base | 0x00008000; 
                base = base | 0x00004000; 
                base = base | 0x00002000; 
                base = base | 0x00001000; 
                base = base | 0x00000800; 
                base = base | 0x00000400; 
                base = base | 0x00000200; 
                base = base | 0x00000100; }
            if(0x40000000 & a) { base = base | 0x00000080; }
            if(0x20000000 & a) { base = base | 0x00000040; }
            if(0x10000000 & a) { base = base | 0x00000020; }
            if(0x08000000 & a) { base = base | 0x00000010; }
            if(0x04000000 & a) { base = base | 0x00000008; }
            if(0x02000000 & a) { base = base | 0x00000004; }
            if(0x01000000 & a) { base = base | 0x00000002; }
            if(0x00800000 & a) { base = base | 0x00000001; }

            break;
        case 24:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; 
                base = base | 0x02000000; 
                base = base | 0x01000000; 
                base = base | 0x00800000; 
                base = base | 0x00400000; 
                base = base | 0x00200000; 
                base = base | 0x00100000; 
                base = base | 0x00080000; 
                base = base | 0x00040000; 
                base = base | 0x00020000; 
                base = base | 0x00010000; 
                base = base | 0x00008000; 
                base = base | 0x00004000; 
                base = base | 0x00002000; 
                base = base | 0x00001000; 
                base = base | 0x00000800; 
                base = base | 0x00000400; 
                base = base | 0x00000200; 
                base = base | 0x00000100; 
                base = base | 0x00000080; }
            if(0x40000000 & a) { base = base | 0x00000040; }
            if(0x20000000 & a) { base = base | 0x00000020; }
            if(0x10000000 & a) { base = base | 0x00000010; }
            if(0x08000000 & a) { base = base | 0x00000008; }
            if(0x04000000 & a) { base = base | 0x00000004; }
            if(0x02000000 & a) { base = base | 0x00000002; }
            if(0x01000000 & a) { base = base | 0x00000001; }

            break;
        case 25:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; 
                base = base | 0x02000000; 
                base = base | 0x01000000; 
                base = base | 0x00800000; 
                base = base | 0x00400000; 
                base = base | 0x00200000; 
                base = base | 0x00100000; 
                base = base | 0x00080000; 
                base = base | 0x00040000; 
                base = base | 0x00020000; 
                base = base | 0x00010000; 
                base = base | 0x00008000; 
                base = base | 0x00004000; 
                base = base | 0x00002000; 
                base = base | 0x00001000; 
                base = base | 0x00000800; 
                base = base | 0x00000400; 
                base = base | 0x00000200; 
                base = base | 0x00000100; 
                base = base | 0x00000080; 
                base = base | 0x00000040; }
            if(0x40000000 & a) { base = base | 0x00000020; }
            if(0x20000000 & a) { base = base | 0x00000010; }
            if(0x10000000 & a) { base = base | 0x00000008; }
            if(0x08000000 & a) { base = base | 0x00000004; }
            if(0x04000000 & a) { base = base | 0x00000002; }
            if(0x02000000 & a) { base = base | 0x00000001; }

            break;
        case 26:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; 
                base = base | 0x02000000; 
                base = base | 0x01000000; 
                base = base | 0x00800000; 
                base = base | 0x00400000; 
                base = base | 0x00200000; 
                base = base | 0x00100000; 
                base = base | 0x00080000; 
                base = base | 0x00040000; 
                base = base | 0x00020000; 
                base = base | 0x00010000; 
                base = base | 0x00008000; 
                base = base | 0x00004000; 
                base = base | 0x00002000; 
                base = base | 0x00001000; 
                base = base | 0x00000800; 
                base = base | 0x00000400; 
                base = base | 0x00000200; 
                base = base | 0x00000100; 
                base = base | 0x00000080; 
                base = base | 0x00000040; 
                base = base | 0x00000020; }
            if(0x40000000 & a) { base = base | 0x00000010; }
            if(0x20000000 & a) { base = base | 0x00000008; }
            if(0x10000000 & a) { base = base | 0x00000004; }
            if(0x08000000 & a) { base = base | 0x00000002; }
            if(0x04000000 & a) { base = base | 0x00000001; }

            break;
        case 27:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; 
                base = base | 0x02000000; 
                base = base | 0x01000000; 
                base = base | 0x00800000; 
                base = base | 0x00400000; 
                base = base | 0x00200000; 
                base = base | 0x00100000; 
                base = base | 0x00080000; 
                base = base | 0x00040000; 
                base = base | 0x00020000; 
                base = base | 0x00010000; 
                base = base | 0x00008000; 
                base = base | 0x00004000; 
                base = base | 0x00002000; 
                base = base | 0x00001000; 
                base = base | 0x00000800; 
                base = base | 0x00000400; 
                base = base | 0x00000200; 
                base = base | 0x00000100; 
                base = base | 0x00000080; 
                base = base | 0x00000040; 
                base = base | 0x00000020; 
                base = base | 0x00000010; }
            if(0x40000000 & a) { base = base | 0x00000008; }
            if(0x20000000 & a) { base = base | 0x00000004; }
            if(0x10000000 & a) { base = base | 0x00000002; }
            if(0x08000000 & a) { base = base | 0x00000001; }

            break;
        case 28:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; 
                base = base | 0x02000000; 
                base = base | 0x01000000; 
                base = base | 0x00800000; 
                base = base | 0x00400000; 
                base = base | 0x00200000; 
                base = base | 0x00100000; 
                base = base | 0x00080000; 
                base = base | 0x00040000; 
                base = base | 0x00020000; 
                base = base | 0x00010000; 
                base = base | 0x00008000; 
                base = base | 0x00004000; 
                base = base | 0x00002000; 
                base = base | 0x00001000; 
                base = base | 0x00000800; 
                base = base | 0x00000400; 
                base = base | 0x00000200; 
                base = base | 0x00000100; 
                base = base | 0x00000080; 
                base = base | 0x00000040; 
                base = base | 0x00000020; 
                base = base | 0x00000010; 
                base = base | 0x00000008; }
            if(0x40000000 & a) { base = base | 0x00000004; }
            if(0x20000000 & a) { base = base | 0x00000002; }
            if(0x10000000 & a) { base = base | 0x00000001; }

            break;
        case 29:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; 
                base = base | 0x02000000; 
                base = base | 0x01000000; 
                base = base | 0x00800000; 
                base = base | 0x00400000; 
                base = base | 0x00200000; 
                base = base | 0x00100000; 
                base = base | 0x00080000; 
                base = base | 0x00040000; 
                base = base | 0x00020000; 
                base = base | 0x00010000; 
                base = base | 0x00008000; 
                base = base | 0x00004000; 
                base = base | 0x00002000; 
                base = base | 0x00001000; 
                base = base | 0x00000800; 
                base = base | 0x00000400; 
                base = base | 0x00000200; 
                base = base | 0x00000100; 
                base = base | 0x00000080; 
                base = base | 0x00000040; 
                base = base | 0x00000020; 
                base = base | 0x00000010; 
                base = base | 0x00000008; 
                base = base | 0x00000004; }
            if(0x40000000 & a) { base = base | 0x00000002; }
            if(0x20000000 & a) { base = base | 0x00000001; }

            break;
        case 30:
            if(0x80000000 & a) { base = base | 0x80000000; 
                base = base | 0x40000000; 
                base = base | 0x20000000; 
                base = base | 0x10000000; 
                base = base | 0x08000000; 
                base = base | 0x04000000; 
                base = base | 0x02000000; 
                base = base | 0x01000000; 
                base = base | 0x00800000; 
                base = base | 0x00400000; 
                base = base | 0x00200000; 
                base = base | 0x00100000; 
                base = base | 0x00080000; 
                base = base | 0x00040000; 
                base = base | 0x00020000; 
                base = base | 0x00010000; 
                base = base | 0x00008000; 
                base = base | 0x00004000; 
                base = base | 0x00002000; 
                base = base | 0x00001000; 
                base = base | 0x00000800; 
                base = base | 0x00000400; 
                base = base | 0x00000200; 
                base = base | 0x00000100; 
                base = base | 0x00000080; 
                base = base | 0x00000040; 
                base = base | 0x00000020; 
                base = base | 0x00000010; 
                base = base | 0x00000008; 
                base = base | 0x00000004; 
                base = base | 0x00000002; }
            if(0x40000000 & a) { base = base | 0x00000001; }

            break;
        case 31:
            if(0x80000000 & a) { base = 0xFFFFFFFF; }

            break;

    }

    if (cantidad > 31 && 0x80000000 & a) { 
        base = 0xFFFFFFFF; 
    }    

    return base;
}

int32_t desplazadorIzquierda(int32_t a, int cantidad){
    int32_t base = 0;

    switch (cantidad) {
        case 0:
            base = a;
            break;
        case 1:
            if( a & 0x00000001) { base =  base | 0x00000002; }
            if( a & 0x00000002) { base =  base | 0x00000004; }
            if( a & 0x00000004) { base =  base | 0x00000008; }
            if( a & 0x00000008) { base =  base | 0x00000010; }
            if( a & 0x00000010) { base =  base | 0x00000020; }
            if( a & 0x00000020) { base =  base | 0x00000040; }
            if( a & 0x00000040) { base =  base | 0x00000080; }
            if( a & 0x00000080) { base =  base | 0x00000100; }
            if( a & 0x00000100) { base =  base | 0x00000200; }
            if( a & 0x00000200) { base =  base | 0x00000400; }
            if( a & 0x00000400) { base =  base | 0x00000800; }
            if( a & 0x00000800) { base =  base | 0x00001000; }
            if( a & 0x00001000) { base =  base | 0x00002000; }
            if( a & 0x00002000) { base =  base | 0x00004000; }
            if( a & 0x00004000) { base =  base | 0x00008000; }
            if( a & 0x00008000) { base =  base | 0x00010000; }
            if( a & 0x00010000) { base =  base | 0x00020000; }
            if( a & 0x00020000) { base =  base | 0x00040000; }
            if( a & 0x00040000) { base =  base | 0x00080000; }
            if( a & 0x00080000) { base =  base | 0x00100000; }
            if( a & 0x00100000) { base =  base | 0x00200000; }
            if( a & 0x00200000) { base =  base | 0x00400000; }
            if( a & 0x00400000) { base =  base | 0x00800000; }
            if( a & 0x00800000) { base =  base | 0x01000000; }
            if( a & 0x01000000) { base =  base | 0x02000000; }
            if( a & 0x02000000) { base =  base | 0x04000000; }
            if( a & 0x04000000) { base =  base | 0x08000000; }
            if( a & 0x08000000) { base =  base | 0x10000000; }
            if( a & 0x10000000) { base =  base | 0x20000000; }
            if( a & 0x20000000) { base =  base | 0x40000000; }
            if( a & 0x40000000) { base =  base | 0x80000000; }

            break;
        case 2:
            if( a & 0x00000001) { base =  base | 0x00000004; }
            if( a & 0x00000002) { base =  base | 0x00000008; }
            if( a & 0x00000004) { base =  base | 0x00000010; }
            if( a & 0x00000008) { base =  base | 0x00000020; }
            if( a & 0x00000010) { base =  base | 0x00000040; }
            if( a & 0x00000020) { base =  base | 0x00000080; }
            if( a & 0x00000040) { base =  base | 0x00000100; }
            if( a & 0x00000080) { base =  base | 0x00000200; }
            if( a & 0x00000100) { base =  base | 0x00000400; }
            if( a & 0x00000200) { base =  base | 0x00000800; }
            if( a & 0x00000400) { base =  base | 0x00001000; }
            if( a & 0x00000800) { base =  base | 0x00002000; }
            if( a & 0x00001000) { base =  base | 0x00004000; }
            if( a & 0x00002000) { base =  base | 0x00008000; }
            if( a & 0x00004000) { base =  base | 0x00010000; }
            if( a & 0x00008000) { base =  base | 0x00020000; }
            if( a & 0x00010000) { base =  base | 0x00040000; }
            if( a & 0x00020000) { base =  base | 0x00080000; }
            if( a & 0x00040000) { base =  base | 0x00100000; }
            if( a & 0x00080000) { base =  base | 0x00200000; }
            if( a & 0x00100000) { base =  base | 0x00400000; }
            if( a & 0x00200000) { base =  base | 0x00800000; }
            if( a & 0x00400000) { base =  base | 0x01000000; }
            if( a & 0x00800000) { base =  base | 0x02000000; }
            if( a & 0x01000000) { base =  base | 0x04000000; }
            if( a & 0x02000000) { base =  base | 0x08000000; }
            if( a & 0x04000000) { base =  base | 0x10000000; }
            if( a & 0x08000000) { base =  base | 0x20000000; }
            if( a & 0x10000000) { base =  base | 0x40000000; }
            if( a & 0x20000000) { base =  base | 0x80000000; }

            break;
        case 3:
            if( a & 0x00000001) { base =  base | 0x00000008; }
            if( a & 0x00000002) { base =  base | 0x00000010; }
            if( a & 0x00000004) { base =  base | 0x00000020; }
            if( a & 0x00000008) { base =  base | 0x00000040; }
            if( a & 0x00000010) { base =  base | 0x00000080; }
            if( a & 0x00000020) { base =  base | 0x00000100; }
            if( a & 0x00000040) { base =  base | 0x00000200; }
            if( a & 0x00000080) { base =  base | 0x00000400; }
            if( a & 0x00000100) { base =  base | 0x00000800; }
            if( a & 0x00000200) { base =  base | 0x00001000; }
            if( a & 0x00000400) { base =  base | 0x00002000; }
            if( a & 0x00000800) { base =  base | 0x00004000; }
            if( a & 0x00001000) { base =  base | 0x00008000; }
            if( a & 0x00002000) { base =  base | 0x00010000; }
            if( a & 0x00004000) { base =  base | 0x00020000; }
            if( a & 0x00008000) { base =  base | 0x00040000; }
            if( a & 0x00010000) { base =  base | 0x00080000; }
            if( a & 0x00020000) { base =  base | 0x00100000; }
            if( a & 0x00040000) { base =  base | 0x00200000; }
            if( a & 0x00080000) { base =  base | 0x00400000; }
            if( a & 0x00100000) { base =  base | 0x00800000; }
            if( a & 0x00200000) { base =  base | 0x01000000; }
            if( a & 0x00400000) { base =  base | 0x02000000; }
            if( a & 0x00800000) { base =  base | 0x04000000; }
            if( a & 0x01000000) { base =  base | 0x08000000; }
            if( a & 0x02000000) { base =  base | 0x10000000; }
            if( a & 0x04000000) { base =  base | 0x20000000; }
            if( a & 0x08000000) { base =  base | 0x40000000; }
            if( a & 0x10000000) { base =  base | 0x80000000; }

            break;
        case 4:
            if( a & 0x00000001) { base =  base | 0x00000010; }
            if( a & 0x00000002) { base =  base | 0x00000020; }
            if( a & 0x00000004) { base =  base | 0x00000040; }
            if( a & 0x00000008) { base =  base | 0x00000080; }
            if( a & 0x00000010) { base =  base | 0x00000100; }
            if( a & 0x00000020) { base =  base | 0x00000200; }
            if( a & 0x00000040) { base =  base | 0x00000400; }
            if( a & 0x00000080) { base =  base | 0x00000800; }
            if( a & 0x00000100) { base =  base | 0x00001000; }
            if( a & 0x00000200) { base =  base | 0x00002000; }
            if( a & 0x00000400) { base =  base | 0x00004000; }
            if( a & 0x00000800) { base =  base | 0x00008000; }
            if( a & 0x00001000) { base =  base | 0x00010000; }
            if( a & 0x00002000) { base =  base | 0x00020000; }
            if( a & 0x00004000) { base =  base | 0x00040000; }
            if( a & 0x00008000) { base =  base | 0x00080000; }
            if( a & 0x00010000) { base =  base | 0x00100000; }
            if( a & 0x00020000) { base =  base | 0x00200000; }
            if( a & 0x00040000) { base =  base | 0x00400000; }
            if( a & 0x00080000) { base =  base | 0x00800000; }
            if( a & 0x00100000) { base =  base | 0x01000000; }
            if( a & 0x00200000) { base =  base | 0x02000000; }
            if( a & 0x00400000) { base =  base | 0x04000000; }
            if( a & 0x00800000) { base =  base | 0x08000000; }
            if( a & 0x01000000) { base =  base | 0x10000000; }
            if( a & 0x02000000) { base =  base | 0x20000000; }
            if( a & 0x04000000) { base =  base | 0x40000000; }
            if( a & 0x08000000) { base =  base | 0x80000000; }

            break;
        case 5:
            if( a & 0x00000001) { base =  base | 0x00000020; }
            if( a & 0x00000002) { base =  base | 0x00000040; }
            if( a & 0x00000004) { base =  base | 0x00000080; }
            if( a & 0x00000008) { base =  base | 0x00000100; }
            if( a & 0x00000010) { base =  base | 0x00000200; }
            if( a & 0x00000020) { base =  base | 0x00000400; }
            if( a & 0x00000040) { base =  base | 0x00000800; }
            if( a & 0x00000080) { base =  base | 0x00001000; }
            if( a & 0x00000100) { base =  base | 0x00002000; }
            if( a & 0x00000200) { base =  base | 0x00004000; }
            if( a & 0x00000400) { base =  base | 0x00008000; }
            if( a & 0x00000800) { base =  base | 0x00010000; }
            if( a & 0x00001000) { base =  base | 0x00020000; }
            if( a & 0x00002000) { base =  base | 0x00040000; }
            if( a & 0x00004000) { base =  base | 0x00080000; }
            if( a & 0x00008000) { base =  base | 0x00100000; }
            if( a & 0x00010000) { base =  base | 0x00200000; }
            if( a & 0x00020000) { base =  base | 0x00400000; }
            if( a & 0x00040000) { base =  base | 0x00800000; }
            if( a & 0x00080000) { base =  base | 0x01000000; }
            if( a & 0x00100000) { base =  base | 0x02000000; }
            if( a & 0x00200000) { base =  base | 0x04000000; }
            if( a & 0x00400000) { base =  base | 0x08000000; }
            if( a & 0x00800000) { base =  base | 0x10000000; }
            if( a & 0x01000000) { base =  base | 0x20000000; }
            if( a & 0x02000000) { base =  base | 0x40000000; }
            if( a & 0x04000000) { base =  base | 0x80000000; }

            break;
        case 6:
            if( a & 0x00000001) { base =  base | 0x00000040; }
            if( a & 0x00000002) { base =  base | 0x00000080; }
            if( a & 0x00000004) { base =  base | 0x00000100; }
            if( a & 0x00000008) { base =  base | 0x00000200; }
            if( a & 0x00000010) { base =  base | 0x00000400; }
            if( a & 0x00000020) { base =  base | 0x00000800; }
            if( a & 0x00000040) { base =  base | 0x00001000; }
            if( a & 0x00000080) { base =  base | 0x00002000; }
            if( a & 0x00000100) { base =  base | 0x00004000; }
            if( a & 0x00000200) { base =  base | 0x00008000; }
            if( a & 0x00000400) { base =  base | 0x00010000; }
            if( a & 0x00000800) { base =  base | 0x00020000; }
            if( a & 0x00001000) { base =  base | 0x00040000; }
            if( a & 0x00002000) { base =  base | 0x00080000; }
            if( a & 0x00004000) { base =  base | 0x00100000; }
            if( a & 0x00008000) { base =  base | 0x00200000; }
            if( a & 0x00010000) { base =  base | 0x00400000; }
            if( a & 0x00020000) { base =  base | 0x00800000; }
            if( a & 0x00040000) { base =  base | 0x01000000; }
            if( a & 0x00080000) { base =  base | 0x02000000; }
            if( a & 0x00100000) { base =  base | 0x04000000; }
            if( a & 0x00200000) { base =  base | 0x08000000; }
            if( a & 0x00400000) { base =  base | 0x10000000; }
            if( a & 0x00800000) { base =  base | 0x20000000; }
            if( a & 0x01000000) { base =  base | 0x40000000; }
            if( a & 0x02000000) { base =  base | 0x80000000; }

            break;
        case 7:
            if( a & 0x00000001) { base =  base | 0x00000080; }
            if( a & 0x00000002) { base =  base | 0x00000100; }
            if( a & 0x00000004) { base =  base | 0x00000200; }
            if( a & 0x00000008) { base =  base | 0x00000400; }
            if( a & 0x00000010) { base =  base | 0x00000800; }
            if( a & 0x00000020) { base =  base | 0x00001000; }
            if( a & 0x00000040) { base =  base | 0x00002000; }
            if( a & 0x00000080) { base =  base | 0x00004000; }
            if( a & 0x00000100) { base =  base | 0x00008000; }
            if( a & 0x00000200) { base =  base | 0x00010000; }
            if( a & 0x00000400) { base =  base | 0x00020000; }
            if( a & 0x00000800) { base =  base | 0x00040000; }
            if( a & 0x00001000) { base =  base | 0x00080000; }
            if( a & 0x00002000) { base =  base | 0x00100000; }
            if( a & 0x00004000) { base =  base | 0x00200000; }
            if( a & 0x00008000) { base =  base | 0x00400000; }
            if( a & 0x00010000) { base =  base | 0x00800000; }
            if( a & 0x00020000) { base =  base | 0x01000000; }
            if( a & 0x00040000) { base =  base | 0x02000000; }
            if( a & 0x00080000) { base =  base | 0x04000000; }
            if( a & 0x00100000) { base =  base | 0x08000000; }
            if( a & 0x00200000) { base =  base | 0x10000000; }
            if( a & 0x00400000) { base =  base | 0x20000000; }
            if( a & 0x00800000) { base =  base | 0x40000000; }
            if( a & 0x01000000) { base =  base | 0x80000000; }

            break;
        case 8:
            if( a & 0x00000001) { base =  base | 0x00000100; }
            if( a & 0x00000002) { base =  base | 0x00000200; }
            if( a & 0x00000004) { base =  base | 0x00000400; }
            if( a & 0x00000008) { base =  base | 0x00000800; }
            if( a & 0x00000010) { base =  base | 0x00001000; }
            if( a & 0x00000020) { base =  base | 0x00002000; }
            if( a & 0x00000040) { base =  base | 0x00004000; }
            if( a & 0x00000080) { base =  base | 0x00008000; }
            if( a & 0x00000100) { base =  base | 0x00010000; }
            if( a & 0x00000200) { base =  base | 0x00020000; }
            if( a & 0x00000400) { base =  base | 0x00040000; }
            if( a & 0x00000800) { base =  base | 0x00080000; }
            if( a & 0x00001000) { base =  base | 0x00100000; }
            if( a & 0x00002000) { base =  base | 0x00200000; }
            if( a & 0x00004000) { base =  base | 0x00400000; }
            if( a & 0x00008000) { base =  base | 0x00800000; }
            if( a & 0x00010000) { base =  base | 0x01000000; }
            if( a & 0x00020000) { base =  base | 0x02000000; }
            if( a & 0x00040000) { base =  base | 0x04000000; }
            if( a & 0x00080000) { base =  base | 0x08000000; }
            if( a & 0x00100000) { base =  base | 0x10000000; }
            if( a & 0x00200000) { base =  base | 0x20000000; }
            if( a & 0x00400000) { base =  base | 0x40000000; }
            if( a & 0x00800000) { base =  base | 0x80000000; }

            break;
        case 9:
            if( a & 0x00000001) { base =  base | 0x00000200; }
            if( a & 0x00000002) { base =  base | 0x00000400; }
            if( a & 0x00000004) { base =  base | 0x00000800; }
            if( a & 0x00000008) { base =  base | 0x00001000; }
            if( a & 0x00000010) { base =  base | 0x00002000; }
            if( a & 0x00000020) { base =  base | 0x00004000; }
            if( a & 0x00000040) { base =  base | 0x00008000; }
            if( a & 0x00000080) { base =  base | 0x00010000; }
            if( a & 0x00000100) { base =  base | 0x00020000; }
            if( a & 0x00000200) { base =  base | 0x00040000; }
            if( a & 0x00000400) { base =  base | 0x00080000; }
            if( a & 0x00000800) { base =  base | 0x00100000; }
            if( a & 0x00001000) { base =  base | 0x00200000; }
            if( a & 0x00002000) { base =  base | 0x00400000; }
            if( a & 0x00004000) { base =  base | 0x00800000; }
            if( a & 0x00008000) { base =  base | 0x01000000; }
            if( a & 0x00010000) { base =  base | 0x02000000; }
            if( a & 0x00020000) { base =  base | 0x04000000; }
            if( a & 0x00040000) { base =  base | 0x08000000; }
            if( a & 0x00080000) { base =  base | 0x10000000; }
            if( a & 0x00100000) { base =  base | 0x20000000; }
            if( a & 0x00200000) { base =  base | 0x40000000; }
            if( a & 0x00400000) { base =  base | 0x80000000; }

            break;
        case 10:

            if( a & 0x00000001) { base =  base | 0x00000400; }
            if( a & 0x00000002) { base =  base | 0x00000800; }
            if( a & 0x00000004) { base =  base | 0x00001000; }
            if( a & 0x00000008) { base =  base | 0x00002000; }
            if( a & 0x00000010) { base =  base | 0x00004000; }
            if( a & 0x00000020) { base =  base | 0x00008000; }
            if( a & 0x00000040) { base =  base | 0x00010000; }
            if( a & 0x00000080) { base =  base | 0x00020000; }
            if( a & 0x00000100) { base =  base | 0x00040000; }
            if( a & 0x00000200) { base =  base | 0x00080000; }
            if( a & 0x00000400) { base =  base | 0x00100000; }
            if( a & 0x00000800) { base =  base | 0x00200000; }
            if( a & 0x00001000) { base =  base | 0x00400000; }
            if( a & 0x00002000) { base =  base | 0x00800000; }
            if( a & 0x00004000) { base =  base | 0x01000000; }
            if( a & 0x00008000) { base =  base | 0x02000000; }
            if( a & 0x00010000) { base =  base | 0x04000000; }
            if( a & 0x00020000) { base =  base | 0x08000000; }
            if( a & 0x00040000) { base =  base | 0x10000000; }
            if( a & 0x00080000) { base =  base | 0x20000000; }
            if( a & 0x00100000) { base =  base | 0x40000000; }
            if( a & 0x00200000) { base =  base | 0x80000000; }
            break;
        case 11:

            if( a & 0x00000001) { base =  base | 0x00000800; }
            if( a & 0x00000002) { base =  base | 0x00001000; }
            if( a & 0x00000004) { base =  base | 0x00002000; }
            if( a & 0x00000008) { base =  base | 0x00004000; }
            if( a & 0x00000010) { base =  base | 0x00008000; }
            if( a & 0x00000020) { base =  base | 0x00010000; }
            if( a & 0x00000040) { base =  base | 0x00020000; }
            if( a & 0x00000080) { base =  base | 0x00040000; }
            if( a & 0x00000100) { base =  base | 0x00080000; }
            if( a & 0x00000200) { base =  base | 0x00100000; }
            if( a & 0x00000400) { base =  base | 0x00200000; }
            if( a & 0x00000800) { base =  base | 0x00400000; }
            if( a & 0x00001000) { base =  base | 0x00800000; }
            if( a & 0x00002000) { base =  base | 0x01000000; }
            if( a & 0x00004000) { base =  base | 0x02000000; }
            if( a & 0x00008000) { base =  base | 0x04000000; }
            if( a & 0x00010000) { base =  base | 0x08000000; }
            if( a & 0x00020000) { base =  base | 0x10000000; }
            if( a & 0x00040000) { base =  base | 0x20000000; }
            if( a & 0x00080000) { base =  base | 0x40000000; }
            if( a & 0x00100000) { base =  base | 0x80000000; }
            break;
        case 12:
            if( a & 0x00000001) { base =  base | 0x00001000; }
            if( a & 0x00000002) { base =  base | 0x00002000; }
            if( a & 0x00000004) { base =  base | 0x00004000; }
            if( a & 0x00000008) { base =  base | 0x00008000; }
            if( a & 0x00000010) { base =  base | 0x00010000; }
            if( a & 0x00000020) { base =  base | 0x00020000; }
            if( a & 0x00000040) { base =  base | 0x00040000; }
            if( a & 0x00000080) { base =  base | 0x00080000; }
            if( a & 0x00000100) { base =  base | 0x00100000; }
            if( a & 0x00000200) { base =  base | 0x00200000; }
            if( a & 0x00000400) { base =  base | 0x00400000; }
            if( a & 0x00000800) { base =  base | 0x00800000; }
            if( a & 0x00001000) { base =  base | 0x01000000; }
            if( a & 0x00002000) { base =  base | 0x02000000; }
            if( a & 0x00004000) { base =  base | 0x04000000; }
            if( a & 0x00008000) { base =  base | 0x08000000; }
            if( a & 0x00010000) { base =  base | 0x10000000; }
            if( a & 0x00020000) { base =  base | 0x20000000; }
            if( a & 0x00040000) { base =  base | 0x40000000; }
            if( a & 0x00080000) { base =  base | 0x80000000; }

            break;
        case 13:
            if( a & 0x00000001) { base =  base | 0x00002000; }
            if( a & 0x00000002) { base =  base | 0x00004000; }
            if( a & 0x00000004) { base =  base | 0x00008000; }
            if( a & 0x00000008) { base =  base | 0x00010000; }
            if( a & 0x00000010) { base =  base | 0x00020000; }
            if( a & 0x00000020) { base =  base | 0x00040000; }
            if( a & 0x00000040) { base =  base | 0x00080000; }
            if( a & 0x00000080) { base =  base | 0x00100000; }
            if( a & 0x00000100) { base =  base | 0x00200000; }
            if( a & 0x00000200) { base =  base | 0x00400000; }
            if( a & 0x00000400) { base =  base | 0x00800000; }
            if( a & 0x00000800) { base =  base | 0x01000000; }
            if( a & 0x00001000) { base =  base | 0x02000000; }
            if( a & 0x00002000) { base =  base | 0x04000000; }
            if( a & 0x00004000) { base =  base | 0x08000000; }
            if( a & 0x00008000) { base =  base | 0x10000000; }
            if( a & 0x00010000) { base =  base | 0x20000000; }
            if( a & 0x00020000) { base =  base | 0x40000000; }
            if( a & 0x00040000) { base =  base | 0x80000000; }

            break;
        case 14:

            if( a & 0x00000001) { base =  base | 0x00004000; }
            if( a & 0x00000002) { base =  base | 0x00008000; }
            if( a & 0x00000004) { base =  base | 0x00010000; }
            if( a & 0x00000008) { base =  base | 0x00020000; }
            if( a & 0x00000010) { base =  base | 0x00040000; }
            if( a & 0x00000020) { base =  base | 0x00080000; }
            if( a & 0x00000040) { base =  base | 0x00100000; }
            if( a & 0x00000080) { base =  base | 0x00200000; }
            if( a & 0x00000100) { base =  base | 0x00400000; }
            if( a & 0x00000200) { base =  base | 0x00800000; }
            if( a & 0x00000400) { base =  base | 0x01000000; }
            if( a & 0x00000800) { base =  base | 0x02000000; }
            if( a & 0x00001000) { base =  base | 0x04000000; }
            if( a & 0x00002000) { base =  base | 0x08000000; }
            if( a & 0x00004000) { base =  base | 0x10000000; }
            if( a & 0x00008000) { base =  base | 0x20000000; }
            if( a & 0x00010000) { base =  base | 0x40000000; }
            if( a & 0x00020000) { base =  base | 0x80000000; }
            break;
        case 15:
            if( a & 0x00000001) { base =  base | 0x00008000; }
            if( a & 0x00000002) { base =  base | 0x00010000; }
            if( a & 0x00000004) { base =  base | 0x00020000; }
            if( a & 0x00000008) { base =  base | 0x00040000; }
            if( a & 0x00000010) { base =  base | 0x00080000; }
            if( a & 0x00000020) { base =  base | 0x00100000; }
            if( a & 0x00000040) { base =  base | 0x00200000; }
            if( a & 0x00000080) { base =  base | 0x00400000; }
            if( a & 0x00000100) { base =  base | 0x00800000; }
            if( a & 0x00000200) { base =  base | 0x01000000; }
            if( a & 0x00000400) { base =  base | 0x02000000; }
            if( a & 0x00000800) { base =  base | 0x04000000; }
            if( a & 0x00001000) { base =  base | 0x08000000; }
            if( a & 0x00002000) { base =  base | 0x10000000; }
            if( a & 0x00004000) { base =  base | 0x20000000; }
            if( a & 0x00008000) { base =  base | 0x40000000; }
            if( a & 0x00010000) { base =  base | 0x80000000; }

            break;
        case 16:
            if( a & 0x00000001) { base =  base | 0x00010000; }
            if( a & 0x00000002) { base =  base | 0x00020000; }
            if( a & 0x00000004) { base =  base | 0x00040000; }
            if( a & 0x00000008) { base =  base | 0x00080000; }
            if( a & 0x00000010) { base =  base | 0x00100000; }
            if( a & 0x00000020) { base =  base | 0x00200000; }
            if( a & 0x00000040) { base =  base | 0x00400000; }
            if( a & 0x00000080) { base =  base | 0x00800000; }
            if( a & 0x00000100) { base =  base | 0x01000000; }
            if( a & 0x00000200) { base =  base | 0x02000000; }
            if( a & 0x00000400) { base =  base | 0x04000000; }
            if( a & 0x00000800) { base =  base | 0x08000000; }
            if( a & 0x00001000) { base =  base | 0x10000000; }
            if( a & 0x00002000) { base =  base | 0x20000000; }
            if( a & 0x00004000) { base =  base | 0x40000000; }
            if( a & 0x00008000) { base =  base | 0x80000000; }

            break;
        case 17:
            if( a & 0x00000001) { base =  base | 0x00020000; }
            if( a & 0x00000002) { base =  base | 0x00040000; }
            if( a & 0x00000004) { base =  base | 0x00080000; }
            if( a & 0x00000008) { base =  base | 0x00100000; }
            if( a & 0x00000010) { base =  base | 0x00200000; }
            if( a & 0x00000020) { base =  base | 0x00400000; }
            if( a & 0x00000040) { base =  base | 0x00800000; }
            if( a & 0x00000080) { base =  base | 0x01000000; }
            if( a & 0x00000100) { base =  base | 0x02000000; }
            if( a & 0x00000200) { base =  base | 0x04000000; }
            if( a & 0x00000400) { base =  base | 0x08000000; }
            if( a & 0x00000800) { base =  base | 0x10000000; }
            if( a & 0x00001000) { base =  base | 0x20000000; }
            if( a & 0x00002000) { base =  base | 0x40000000; }
            if( a & 0x00004000) { base =  base | 0x80000000; }

            break;
        case 18:
            if( a & 0x00000001) { base =  base | 0x00040000; }
            if( a & 0x00000002) { base =  base | 0x00080000; }
            if( a & 0x00000004) { base =  base | 0x00100000; }
            if( a & 0x00000008) { base =  base | 0x00200000; }
            if( a & 0x00000010) { base =  base | 0x00400000; }
            if( a & 0x00000020) { base =  base | 0x00800000; }
            if( a & 0x00000040) { base =  base | 0x01000000; }
            if( a & 0x00000080) { base =  base | 0x02000000; }
            if( a & 0x00000100) { base =  base | 0x04000000; }
            if( a & 0x00000200) { base =  base | 0x08000000; }
            if( a & 0x00000400) { base =  base | 0x10000000; }
            if( a & 0x00000800) { base =  base | 0x20000000; }
            if( a & 0x00001000) { base =  base | 0x40000000; }
            if( a & 0x00002000) { base =  base | 0x80000000; }

            break;
        case 19:
            if( a & 0x00000001) { base =  base | 0x00080000; }
            if( a & 0x00000002) { base =  base | 0x00100000; }
            if( a & 0x00000004) { base =  base | 0x00200000; }
            if( a & 0x00000008) { base =  base | 0x00400000; }
            if( a & 0x00000010) { base =  base | 0x00800000; }
            if( a & 0x00000020) { base =  base | 0x01000000; }
            if( a & 0x00000040) { base =  base | 0x02000000; }
            if( a & 0x00000080) { base =  base | 0x04000000; }
            if( a & 0x00000100) { base =  base | 0x08000000; }
            if( a & 0x00000200) { base =  base | 0x10000000; }
            if( a & 0x00000400) { base =  base | 0x20000000; }
            if( a & 0x00000800) { base =  base | 0x40000000; }
            if( a & 0x00001000) { base =  base | 0x80000000; }

            break;
        case 20:
            if( a & 0x00000001) { base =  base | 0x00100000; }
            if( a & 0x00000002) { base =  base | 0x00200000; }
            if( a & 0x00000004) { base =  base | 0x00400000; }
            if( a & 0x00000008) { base =  base | 0x00800000; }
            if( a & 0x00000010) { base =  base | 0x01000000; }
            if( a & 0x00000020) { base =  base | 0x02000000; }
            if( a & 0x00000040) { base =  base | 0x04000000; }
            if( a & 0x00000080) { base =  base | 0x08000000; }
            if( a & 0x00000100) { base =  base | 0x10000000; }
            if( a & 0x00000200) { base =  base | 0x20000000; }
            if( a & 0x00000400) { base =  base | 0x40000000; }
            if( a & 0x00000800) { base =  base | 0x80000000; }

            break;
        case 21:
            if( a & 0x00000001) { base =  base | 0x00200000; }
            if( a & 0x00000002) { base =  base | 0x00400000; }
            if( a & 0x00000004) { base =  base | 0x00800000; }
            if( a & 0x00000008) { base =  base | 0x01000000; }
            if( a & 0x00000010) { base =  base | 0x02000000; }
            if( a & 0x00000020) { base =  base | 0x04000000; }
            if( a & 0x00000040) { base =  base | 0x08000000; }
            if( a & 0x00000080) { base =  base | 0x10000000; }
            if( a & 0x00000100) { base =  base | 0x20000000; }
            if( a & 0x00000200) { base =  base | 0x40000000; }
            if( a & 0x00000400) { base =  base | 0x80000000; }

            break;
        case 22:
            if( a & 0x00000001) { base =  base | 0x00400000; }
            if( a & 0x00000002) { base =  base | 0x00800000; }
            if( a & 0x00000004) { base =  base | 0x01000000; }
            if( a & 0x00000008) { base =  base | 0x02000000; }
            if( a & 0x00000010) { base =  base | 0x04000000; }
            if( a & 0x00000020) { base =  base | 0x08000000; }
            if( a & 0x00000040) { base =  base | 0x10000000; }
            if( a & 0x00000080) { base =  base | 0x20000000; }
            if( a & 0x00000100) { base =  base | 0x40000000; }
            if( a & 0x00000200) { base =  base | 0x80000000; }

            break;
        case 23:
            if( a & 0x00000001) { base =  base | 0x00800000; }
            if( a & 0x00000002) { base =  base | 0x01000000; }
            if( a & 0x00000004) { base =  base | 0x02000000; }
            if( a & 0x00000008) { base =  base | 0x04000000; }
            if( a & 0x00000010) { base =  base | 0x08000000; }
            if( a & 0x00000020) { base =  base | 0x10000000; }
            if( a & 0x00000040) { base =  base | 0x20000000; }
            if( a & 0x00000080) { base =  base | 0x40000000; }
            if( a & 0x00000100) { base =  base | 0x80000000; }

            break;
        case 24:
            if( a & 0x00000001) { base =  base | 0x01000000; }
            if( a & 0x00000002) { base =  base | 0x02000000; }
            if( a & 0x00000004) { base =  base | 0x04000000; }
            if( a & 0x00000008) { base =  base | 0x08000000; }
            if( a & 0x00000010) { base =  base | 0x10000000; }
            if( a & 0x00000020) { base =  base | 0x20000000; }
            if( a & 0x00000040) { base =  base | 0x40000000; }
            if( a & 0x00000080) { base =  base | 0x80000000; }

            break;
        case 25:
            if( a & 0x00000001) { base =  base | 0x02000000; }
            if( a & 0x00000002) { base =  base | 0x04000000; }
            if( a & 0x00000004) { base =  base | 0x08000000; }
            if( a & 0x00000008) { base =  base | 0x10000000; }
            if( a & 0x00000010) { base =  base | 0x20000000; }
            if( a & 0x00000020) { base =  base | 0x40000000; }
            if( a & 0x00000040) { base =  base | 0x80000000; }

            break;
        case 26:
            if( a & 0x00000001) { base =  base | 0x04000000; }
            if( a & 0x00000002) { base =  base | 0x08000000; }
            if( a & 0x00000004) { base =  base | 0x10000000; }
            if( a & 0x00000008) { base =  base | 0x20000000; }
            if( a & 0x00000010) { base =  base | 0x40000000; }
            if( a & 0x00000020) { base =  base | 0x80000000; }

            break;
        case 27:
            if( a & 0x00000001) { base =  base | 0x08000000; }
            if( a & 0x00000002) { base =  base | 0x10000000; }
            if( a & 0x00000004) { base =  base | 0x20000000; }
            if( a & 0x00000008) { base =  base | 0x40000000; }
            if( a & 0x00000010) { base =  base | 0x80000000; }

            break;
        case 28:
            if( a & 0x00000001) { base =  base | 0x10000000; }
            if( a & 0x00000002) { base =  base | 0x20000000; }
            if( a & 0x00000004) { base =  base | 0x40000000; }
            if( a & 0x00000008) { base =  base | 0x80000000; }

            break;
        case 29:
            if( a & 0x00000001) { base =  base | 0x20000000; }
            if( a & 0x00000002) { base =  base | 0x40000000; }
            if( a & 0x00000004) { base =  base | 0x80000000; }

            break;
        case 30:
            if( a & 0x00000001) { base =  base | 0x40000000; }
            if( a & 0x00000002) { base =  base | 0x80000000; }

            break;
        case 31:
            if( a & 0x00000001) { base =  base | 0x80000000; }
            break;

    }
    return base;
}


