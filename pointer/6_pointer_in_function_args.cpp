//
// Created by mdgon on 11/24/2025.
//

// stack includes all information about functions executed and in which order.
// Each unit of stack is basically function call which represents all data related to function call
// like local variables, method arguments, information about function it should return.

// reminder about stack memory
/**
 * on stack we have stack frames. each frame is created on each function call. We may have as many
 * nested function calls as we want and with each nested call we have +1 stack frame in stack
 * After function execution frame is removed from stack together with all local variables.
 * Local variables only visible inside frame and live only as long as frame live.
 * last or lowest stack frame represented by main method. Highest or top stack frame is currently
 * executed function, every stack frame below is paused and awaits top stack frame completion
 */

//call by value VS call by reference
/**
 * Call by value means that passed values to a function are copied to function arguments and is true for
 * primitive types. Whenever we call function fun(a, b, c, ...) where 'a', 'b', 'c'... are primitive
 * values these values are cloned or mapped to corresponding function arguments in specified order. All
 * these copied arguments are visible only inside function and will be erased once function execution is
 * finished. This also means that original values passed in function will not be modified since function
 * operates with cloned values which basically have different addresses in memory and not related to each
 * other.
 */
/**
 * Call by reference means that passed values to a function are passed references, and even tho we still
 * have same idea of clone/map from passed value to function arguments this time function arguments are
 * not primitives and cloned attributes will have same references to objects as originals. This means that
 * any modifications to objects inside function will be reflected outside of function scope. Any function
 * which has reference to this object will have this object updated same moment changes are made.
 */
/**
 * Now tricky part related to C++.
 * Since in C++ we have an option to operate with pointers or addresses we can pass address of primitive
 * value to a function. This way we can implement Call by reference technique for primitive values. This is
 * a main difference with Java. This way we can modify original primitive value passed as an argument to a
 * function because what was copied is not a primitive value itself but an address to this primitive value.
 * And address is same in both caller function and called function.
 */

#include <cstdio>

// call by value
int call_by_value(int x) {
    x = x + 1;
    return 0;
}


int call_by_reference(int *p_x) {
    *p_x = *p_x + 1; // incrementing x by 1
    return 0;
}

int main(int argc, char *argv[]) {
    int a = 10;
    call_by_value(a); // does nothing since value is copied
    printf("%d\n", a);

    call_by_reference(&a); // does incrementation of passed value(actually passed address to variable 'a')
    printf("%d\n", a);

    return 0;
}


