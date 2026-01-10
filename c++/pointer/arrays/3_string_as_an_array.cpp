#include <cstdio>
//
// Created by emukh on 12/9/2025.
//

void print(const char *C) {
    // we add const if we want to make pointer read-only
    // this way we can prevent accidental modification of string literal
    // C[0] = 'h';
    printf("%c\n", C[0]);
}

void foo(const int x, const int &x2) {
    printf("%d\n", x);
    printf("%d\n", x2);
}

void foo2(const int &x) {
    // x = 10;
}

void foo3(const int* x) {
    // *x = 10;
}

int main(int argc, char *argv[]) {
    char *C = "Hello World!"; // we create a string literal, which is an array of characters
    // C is a pointer to the first character of the string literal
    // string literals are stored in read-only memory, so we cannot modify them
    // C[0] = 'h'; // this will cause a segmentation fault, because we cannot modify string literals
    // print(C);
    // printf("Hello World!");

    int a = 4;
    foo(a, a);

    int b = 5;
    foo3(&b);
    printf("%d\n", b);
}
