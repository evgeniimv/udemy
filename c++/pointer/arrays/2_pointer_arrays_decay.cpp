//
// Created by emukh on 12/9/2025.
//

#include <cstdio>

void iterate(char C[]) {
    while (*C != '\0') {
        printf("%c\n", *C);
        C++;
    }
}

int main(int argc, char *argv[]) {
    char C[] = {'1', '2', '3', '4', '5', '\0'};

    iterate(C);
}

