//
// Created by mdgon on 11/23/2025.
//

#include <cstdio>

int main(int argc, char *argv[]) {
    // we can do arithmetic operations with pointers
    int a = 10;
    int *p = &a;
    printf("%d\n", p); //991950740
    printf("size of int is %d\n", sizeof(int));
    printf("%d\n", p+1); //991950744
    // since pointer type is integer and integer allocates 4 bytes, incrementing pointer by 1 means
    // jumping to the next allocated integer or current address + 4
    // when we change address tto p+1 we basically jump to potentially not allocated address
    // or allocated by some other obbject
}
