//
// Created by emukh on 12/4/2025.
//
int main(int argc, char *argv[]) {
    int i = 5; // 4 bytes
    // there are several mix types of integer data types in C++
    short int si = 3; // actually the same as just 'short si = 3;'. usually allocates 2 bytes
    long int li = 2; // same as 'long li = 2;'. 8 bytes
    long long int lli = 1; // same as 'long long lli = 1;'. 16 bytes

    short s = 3;
    long l = 2;
    long long ll = 1;

    char c = 1; // 1 byte
    char letter = 'A'; // 1 byte
    bool b = true; // 1 byte

    float f = 3.14; // 4 bytes
    double d = 3.1415926535; // 8 bytes
    long double ld = 3.14159265358979323846; // usually allocates 16 bytes

    int* pointer = &i; // pointer to int, usually 4 or 8 bytes depending on architecture
    // reference to int, not a separate type, just another name for variable i
    // basically variable names like 'i' are also references, difference is only that
    int& ref = i;
}
