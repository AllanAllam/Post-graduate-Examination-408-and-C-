#include <iostream>
#include "func.h"
#include "sqlist.h"

int main() {
    std::cout << "Hello, World!\n" << std::endl;

    int x1=1, x2=2;
    swap(x1, x2);
    printf("%d, %d\n", x1, x2);

    test_sqlist();

    return 0;
}
