#include <stdio.h>
int main() {
    int num = 20;   // actual variable declaration
    int *ip;        // pointer variable

    ip = &num;     // store address of var in pointer variable

    printf("Value of var variable: %d\n", num);
    printf("Address of var variable: %p\n", (void*)&num);
    printf("Address stored in ip variable: %p\n", (void*)ip);
    printf("Value pointed to by ip variable: %d\n", *ip);

    return 0;
}