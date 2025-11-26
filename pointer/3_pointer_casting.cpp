#include <cstdio>
//
// Created by mdgon on 11/23/2025.
//
int main(int argc, char *argv[]) {
    int a = 1025;
    // 00000000 000000000 00000100 00000001
    int *p = &a;
    printf("address of a = %d\n", p);
    printf("value of a = %d\n", *p);
    char *c = reinterpret_cast<char *>(p); // or '(char*) p' in C lang way
    // so we know that char has only 1 byte of memory. When we do casting int to char we basically copy only
    // 1st byte of int address p. This means that c will point to first byte of a.
    // this also means that by taking value of c we take a decimal value of 00000001, or 1
    printf("address of c = %d\n", c);
    printf("value of c = %d\n", *c);
}
