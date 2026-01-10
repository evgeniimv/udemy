//
// Created by emukh on 12/9/2025.
//

#include <cstdint>
#include <cstdio>
#include <vector>


void printMultiArray(std::vector<std::vector<uint32_t> > matrix) {
    printf("%d\n", matrix[0][0]);
    std::vector<uint32_t> p;
    p = matrix.at(0);
}


int main(int argc, char *argv[]) {
    // this is basically a continuous block of memory with 2 one dimensional arrays
    // going one after another
    // B[0] is a pointer to fisrt one dimensional array
    // B[1] is a pointer to second one dimensional array
    // When we do pointer arithmetic on B, we actually move to the next one dimensional array
    // so B + 1 will point to second one dimensional array
    // when we
    // B[i][j] = *(B[i] + j) = *(*(B + i) + j)
    //
    int B[2][3] = {
        {1, 2, 3}, // 0
        {4, 5, 6} // 1
    };
    int (*p)[3] = B; //pointer to a beginning of first one dimensional array
    int *d0 = B[0];
    int *d1 = B[1];
    int *dd0 = *(B + 0); // *B
    int *dd1 = *(B + 1);

    printf("%d\n", B[0]); // 2
    printf("%d\n", *d0); // 2
    printf("%d\n", *(d0 + 1));
    printf("%d\n", *(d1 + 2));

    printf("%d\n", *(dd0 + 1));
    printf("%d\n", *(dd1 + 2));

    std::vector matrix(2, std::vector<uint32_t>(3));
    printMultiArray(matrix);

    // if we have 2 blocks of memory for each array like
    // 400, 404, 408  and 412, 416, 420
    // then when we try to access B like
    // print B we get 400 but type of B is 'int (*)[3]' - so basically it is pointer to array
    // if we try to print *B we still get 400 but type of pointer this time is int, because
    // we dereferenced pointer to array basically getting first element of it.
    // and same for B[0] which is equal to *(B + 0) = *B

    int* fun(int, int);

    int (*fun2)(int, int);

    return 0;
}

int (*Fun)(int a, int b);

