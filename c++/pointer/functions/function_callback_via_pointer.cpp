//
// Created by emukh on 1/2/2026.
//

#include <cstdio>

void A() {
    printf("A function called\n");
}

void B(void (*func)()) {
    func();
}

int asc(int a, int b) {
    return a - b;
}

int desc(int a, int b) {
    return b - a;
}

void BubbleSort(int *A, int n, int (*compare)(int, int)) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1; j++) {
            if (compare(A[j], A[j + 1]) > 0) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main(int argc, char *argv[]) {
    /**
     * In C++ we can have functions which takes function pointers as arguments.
     * This way we can pass different functions to a function and have different behavior
     * or basically achieve abstract behavior. This also reduces duplication since in multiple cases
     * we may need only part of the logic to be different while rest of the logic is same. This `different part`
     * can be passed as a function pointer to a function which implements common logic.
     * Passed function will be called by using pointer to it which also called callback.
     */
    void (*fPointer)(); // declaring function pointer
    fPointer = A; // assigning address of function A to function pointer
    B(fPointer);
    B(A); // same since A is decayed to pointer automatically


    //example with sorting
    int A[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(A) / sizeof(A[0]);
    BubbleSort(A, n, asc); // sorting in ascending order
    printf("Sorted array in ascending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    BubbleSort(A, n, desc); // sorting in descending order
    printf("Sorted array in descending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    /**
     * So basically we can pass different comparison functions to the sorting function
     * to achieve different sorting behavior. We reduce duplication by having common sorting logic
     * and passing only comparison logic as a function pointer.
     */
}
