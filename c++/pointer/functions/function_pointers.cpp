//
// Created by emukh on 1/2/2026.
//

#include <cstdio>

int Add(int a, int b) {
    return a + b;
}

int main(int argc, char *argv[]) {
    /**
     * pointers can point to data and also to functions
     * program code is stored in memory as well, so each function has its own address in memory
     * by creating function pointer we can point to function address in memory
     * In this case pointer points to a first instruction of function code in memory
     * which may include number of instructions.
     *
     *
     */

    int (*p)(int, int); // declaring function pointer. Declaration has to be same as function signature
    // return type of the function pointer has to be same as return type of function and vice versa
    p = &Add; // assigning address of function Add to function pointer p
    // we can also write p = Add; because compiler automatically takes address of function
    int result = p(2, 3); // calling function via function pointer
    int result2 = (*p)(2, 3); // dereferencing function pointer and calling function
    // so basically both p(2, 3) and (*p)(2, 3) does the same thing because for p(2, 3) dereferencing
    // is done automatically by compiler
    printf("Result = %d\n", result);
    printf("Result = %d\n", result2);
}
