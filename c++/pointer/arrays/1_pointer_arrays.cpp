//
// Created by mdgon on 11/26/2025.
//

/**
 * when it comes to arrays, normally arrays are represented as continuous blocks of memory, means if we
 * create int array of 5 elements like int a[5]; we allocate solid block of memory of 20 bytes (5*4);
 * This also means that every next address in this block can be evaluated by taking address of first element
 * and incrementing this address by 4, because each array element allocates 4 bytes of memory.
 * Since in C++ we have a pointers and we can do pointer arithmetics it is pretty straightforward to get
 * next element in an array by just manipulating pointer of the first element.
 * Operations like p+1, p-1, will basically increment/decrement address by value defined by pointer type
 * (4 bytes for int and float, 1 byte for char etc.)
 *
 * Interesting fact that by default when array variable is accessed address of the first element is returned.
 * so, it behaves as a pointer. This also called base address.
 */

#include <cstdio>
#include <iostream>

void size_of(int A[]) {
    printf("%d\n", A);
}

int main(int argc, char *argv[]) {
    int A[] = {1, 2, 3, 4, 5};
    printf("%d\n", A); // returns address of a 1st element in an array
    printf("%d\n", *A); // return value of a 1st element in an array
    // Since A behaves as a pointer it can also use pointer arithmetics. In this case we can get address of
    // any element in an array, or value
    printf("%d\n", A + 1);
    printf("%d\n", *(A + 1));
    // this technique is useful when we want to iterate through arrays.
    // Like well known loops
    for (int i = 0; i < 5; i++) {
        // to get value we can use
        printf("%d\n", A[i]);
        //or
        printf("%d\n", *(A + i));
        // and to get address we can use
        printf("%d\n", &A[i]);
        // or
        printf("%d\n", A + i);
    }
    std::cout << A + 1 << std::endl;


    // When we use sizeof on an array:
    printf("%d\n", sizeof(A)); // 20 (5*4)
    // Arrays do not decay to pointers when used with sizeof.
    // So sizeof(arr) = size of entire array in bytes.

    // When we use sizeof on an array as a function argument
    size_of(A); // 8
    // declared array argument becomes a pointer and sizeof returns size of a pointer

    // the reason behind it is that when we write a function with arguments like
    /**
     * int some_function(int A[]){...} compiler automatically rewrites it to
     * int some_function(int* A){...} so argument becomes a pointer
     */
    // arrays as a function arguments cannot be treated as a real arrays, and they are always pointers.

    // but for real arrays this is different, for real arrays they can behave as pointers when its needed,
    // its called 'array-to-pointer decay' when arrays automatically converted to pointers, and it can be done
    // in most expressions

    int *pA;
    pA = A; // 'array-to-pointer decay' where A is automatically converted to pointer to first element of array A
    // this is also called base address
    printf("%d\n", pA); // prints address of first element in array A
    printf("%d\n", A);

    // by using base address we can easily modify and access any value in an array
    // (assuming we know size of it)
    // we cannot modify base address, meaning smth like A = pA or A = A + 1 wouldnt work

    return 0;
}
