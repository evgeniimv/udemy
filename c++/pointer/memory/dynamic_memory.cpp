//
// Created by emukh on 12/10/2025.
//

// Stack = the amount of memory allocated per frame is calculated at compile time(how its calculated?)
// what is the cost of allocating/creating new stack frame? Basically size of the frame should be enough
// to have all local variables stored for 'the biggest' method implemented.
// Heap = memory allocated at runtime
// Stack memory is automatically managed, heap memory must be manually managed

/**
 * To allocate dynamic memory in C++, we use operators new and delete.
 * To allocate dynamic memory in C, we use functions like malloc, calloc, realloc and free.
 *
 */

#include <cstdio>
#include <cstdlib>

int main(int argc, char *argv[]) {
    int a = 10;
    int *p;
    // C style
    p = static_cast<int *>(malloc(sizeof(a)));
    *p = a;
    printf("%d\n", *p);
    free(p);
    // C++ style
    p = new int; // allocate memory
    *p = a;
    printf("%d\n", *p);
    delete p; // free memory

    p = new int[10]; // 4*10 = 40 bytes allocated
    // do some interation with an array
    delete[] p; //
}
