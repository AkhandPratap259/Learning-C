#include<stdio.h>
int sum(int a);
int main() {
    int a;
    printf("Enter the value of n so that to know the sum of first n natural numbers:\n");
    scanf("%d", &a);
    sum(a);
printf("%d",sum(a));
    return 0;
}
int sum(int a) {
    if (a == 2) {
        return 3;

    }
    else {
        return a + sum(a - 1);
    }

}