#include<stdio.h>

int main() {
    int i;
    for (i = 1;i <= 1000;i++) {
        printf("%d\n", i);
        if (i == 599) {
            break;

        }
    }
    return 0;
}