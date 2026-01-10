//
// Created by emukh on 12/5/2025.
//

#include <cstdio>
#include <cstring>
#include <string>

std::string getString(char *c) {
    // 8 / 1
    int s = sizeof(c) / sizeof(c[0]);
    printf("\nSize of c array: %d\n", s);


    while (*c != '\0') {
    };

    for (int i = 0; i < s; ++i) {
    }

    do {
        printf("%c", *c);
        c++;
    } while (*c != '\0');


    return "JOHN";
}

int main(int argc, char *argv[]) {
    // String 24-32 bytes
    // 'JOHN' = ['J','O','H','N','\0','^%','hdgfg', ''] char = 1 byte, 4 bytes


    char c[5]; // size + 1 for null terminator
    c[0] = 'J'; // 1 byte
    c[1] = 'O';
    c[2] = 'H';
    c[3] = 'N';
    c[4] = '\0';
    int len = strlen(c);
    printf("%s", c);
    // 5 / 1 = 5
    int s = sizeof(c) / sizeof(c[0]);
    printf("\nSize of c array: %d\n", s);

    getString(c);

    char d[] = "JOHN"; // compiler automatically adds null terminator

    return 0;
}
