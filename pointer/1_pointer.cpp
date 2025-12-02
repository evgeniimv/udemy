//
// Created by mdgon on 11/19/2025.
//
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int a; // creating int variable (allocating 4 bytes)
    int *p; // creating int type pointer variable (allocating memory)

    a = 5; // writing value 5 into allocated memory
    p = &a; // writing address of variable `a` into pointer allocated memory

    int b = *p; // dereferencing - reading data from targeted by pointer memory

    cout << b << endl;
    cout << a << endl;
    cout << p << endl;
    cout << &a << endl;
    cout << &p << endl;

    *p = 8; // we can also modify value which is targeted by pointer
    cout << b << endl;

  //  If we have pointer 'p' which is not null we can
  // 1. Access value this pointer referencing *p - basically dereferencing
  // 2. Modify value this pointer referencing *p = 8
  // 3. Set a new address to this pointer p = &b
  // Pointer can only take address of the value of same type. Means when pointer is created like 'int *p;' this
  // manifests that any address set to pointer 'p' has to be of type int.
  // The main reason is because of dereferencing. Data in bytes are written differently for int, float, char and other
  // types of data. For dereferencing we need to know in which way this data is represented, by specifying type we can
  // say so.
  // Pointer can be declared w/o initialisation, but cannot be accessed w/o it.
  // so if I have
    int *p_null;
  // and try to access it with
  printf("%d\n", p_null); //should fail because p is not initialised

  // Pointer stores address of only one byte of memory. Lets say it stores address of int, means we have
  // int *p = &a; then p actually references to first byte of a. Lets say a = 1025, means it is represented as
  // 00000000 000000000 00000100 00000001
  // and each byte has its own address like 203, 202, 201, 200
  // first left 0 from the byte 203 represents information if number is negative or positive. Rest contains
  // information about number.
  // when we get address p, it basically returns 200.
  // when we get value if p, or *p, it looks at all 4 bytes and returns decimal value.

  // POINTER SIZE DEPENDS ONLY OF MACHINE ARCHITECTURE
  // 4 bytes in 32bit architecture
  // 8 bytes in 64bit
}
