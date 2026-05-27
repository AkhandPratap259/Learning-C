#include<stdio.h>
float average(int a, int b, int c);
int main() {
    int a, b, c;
    printf("Enter the value of first number:\n");
    scanf("%d", &a);
    printf("Enter the value of second number:\n");
    scanf("%d", &b);
    printf("Enter the value of third number:\n");
    scanf("%d", &c);
    printf("The average of all three numbers is %f\n", average(a, b, c));

    return 0;
}
float average(int a, int b, int c) {
    float s;
    s = (a + b + c) / 3.0;
    return s;
}