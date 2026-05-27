#include<stdio.h>

int main() {
    int i, p , a;
    printf("Enter a number to check whether it is prime or not:\n");
    scanf("%d", &a);
    for (i = 2; i < a;i++) {
        if (a % i == 0)
            p = 0;
    }
    if (p == 0)
        printf("%d is not a prime number.\n", a);
    else
        printf("%d is a prime number.\n", a);

    return 0;
}
