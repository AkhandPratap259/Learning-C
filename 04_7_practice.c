#include<stdio.h>

int main() {
    int i, n = 10;
    printf("The multiplication table of 10 in reversed order is as follows:\n");
    for (i = 10; i >= 1; i--) {
        printf("%dx%d=%d\n", n, i, n * i);
    }
    return 0;
}