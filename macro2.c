#include <stdio.h>

#define ENGLISH 0
#define FRENCH 0
#define SPANISH 1

#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)

int main(void) {
#if ENGLISH
    printf("Insert Disk 1\n");
#endif 
#if FRENCH
    printf("Inserez le disque 1\n");
#endif
#if SPANISH
    printf("Inserte el disco 1\n");
    IDENT(foo);
#endif
}