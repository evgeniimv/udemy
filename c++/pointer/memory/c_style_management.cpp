//
// Created by emukh on 12/15/2025.
//


#include <cstdio>
#include <cstdlib>

int main(int argc, char *argv[]) {
    /**
     * In C style memory management is done via functions like malloc, calloc, realloc and free.
     * This functions comes from C standard library and are available in C++ as well.
     * They work with void pointers, so any pointer type can be used with them.
     *
     * malloc - allocates a block of memory of specified size in bytes. It does not initialize memory.
     * it returns a void pointer to the beginning of allocated memory block.
     * if allocation fails it returns NULL pointer.
     * it also means that we need to typecast returned void pointer to the desired pointer type.
     * allocated memory is not typesafe, so we need to be careful when specifying size of memory
     * to allocate only needed amount of memory.
     *
     * calloc - allocates a block of memory for an array of elements of specified size. It initializes all bytes to zero.
     * it takes two arguments - number of elements and size of each element in bytes.
     */

    int n = 5;
    int *A = (int *) calloc(n, sizeof(int)); // 214
    int *B = (int *) realloc(A, 2 * n * sizeof(int)); // 214
    printf("Previous pointer = %d, New pointer = %d\n", A, B);

    // for (int i = 0; i < n; i++) {
    //     A[i] = i + 1;
    // }
    for (int i = 0; i < n; i++) {
        printf("%d = %d ", i, A[i]);
    }
    return 0;
}
