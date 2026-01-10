//
// Created by mdgon on 11/23/2025.
//

#include <cstdio>

int main(int argc, char *argv[]) {
    int x = 5;
    int *p = &x;
    *p  = 6;
    // in typical architecture pointer is stored in memory also as a 4 bytes unit.
    // in C++ it is possible to have address of the pointer stored in another pointer
    // for this we have to use a specific syntax
    int **q = &p;
    // the funny part is that we can extend relation from pointer to pointer as many times as we want
    // like pointer -> pointer -> pointer -> variable will be
    int ***r = &q;
    //where r -> q -> p -> x
    // One thing to consider is also that pointer type can be explained as
    // int*** -> int** -> int* -> int
    //every additional * basically means additional pointer referenced to original pointer

    // before printing lets keep in mind
    // int*** r --> int** q --> int* p --> int x
    printf("%d\n", *p); // basically dereferencing with returns value of x or 6
    printf("%d\n", *q); // dereferencing of 'q',  has to include address of 'p'
    printf("%d\n", p); // address of 'p' just to confirm it equals to *q
    printf("%d\n", **q); // doing dereferencing twice will return variable x or 6
    printf("%d\n", **r); // doing dereferencing 2 times will return pointer p
    printf("%d\n", ***r); // doing dereferencing 3 times will return variable x or 6

    ***r= 10; // changing variable 'a' since dereferencing 3 times will return value of 'a'
    **q = *p + 2; // this basically same as x = x + 2

}