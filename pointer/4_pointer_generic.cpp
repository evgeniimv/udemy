//
// Created by mdgon on 11/23/2025.
//

#include <cstdio>

int main(int argc, char *argv[]) {
 // generic pointer = void pointer
 // void pointer may have any type, because basically type is undefined
 // but because of this, such pointer also cannot be dereferenced.
 // so, smth like this may happen
 int a = 10;
 int *p = &a; // pointer p has type 'int' and has address of variable 'a'
 void *v = p; // here we cast pointer 'p' of type 'int' to pointer 'v'. Since 'v' has generic type,
 // explicit casting like '(void*) p' is not needed.
 // but this also means
 // int b = *v;
 // will cause a compilation error because 'v' has a void type and no dereferencing is possible.
 printf("%d\n", v); // so we can only do read-address operations with generic pointers
 // arithmetic operations are also not allowed since we dont know the byte-unit size we have to shift
}
