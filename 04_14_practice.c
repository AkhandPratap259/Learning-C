#include<stdio.h>

int main() {







    // int i, a, p;
    // printf("Enter a number to check whether it is prime or not:\n");
    // scanf("%d", &a);
    // i=2;
    // while (i < a) {
    //     if (a % i == 0)
    //         p = 0;
    //     i++;
    // }
    // if (p != 0)
    // {
    //     printf("%d is a prime number.\n",a);
    // }
    // else
    // {
    //     printf("%d is not a prime number.\n",a);
    // }





    int i, a, p;
    printf("Enter a number to check whether it is prime or not:\n");
    scanf("%d", &a);
    i = 2;
    do {
        if (a % i == 0)             //only possible when number is not prime
        {
            p = 0;
        }
        i++;
    } while (i < a);

    if (p == 0) {
        printf("%d is not a prime number.\n", a);
    }
    else {
        printf("%d is a prime number.\n", a);
    }








    return 0;
}