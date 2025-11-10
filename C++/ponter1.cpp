#include <stdio.h>
int main() {
    int num = 20;   // actual variable declaration
    int *address;        // pointer variable

    address = &num;     // store address of var in pointer variable

    printf("Value of var variable: %d\n", num);
    printf("Address of var variable: %p\n", (void*)&num);
    printf("Address stored in address variable: %p\n", (void*)address);
    printf("Value pointed to by address variable: %d\n", *address);

    return 0;
}