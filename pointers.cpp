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
  // manifests that any address set to pointer 'p' has to be of type int. Same true for dereferencing.
}
