#include<stdio.h>
float conversion(int a);
int main() {
    int a;
    printf("Enter the value of temperature in degree celcius to convert in into fahrenheit:\n");
    scanf("%d", &a);
    printf("The %d degree celcius temperature in fahrenheit is %f:\n", a, conversion(a));
    return 0;
}
float conversion(int a) {
    float f;
    f = (  a  *  9  /  5 ) + 32.0;
    // f = (9/5 * a ) + 32.0;
    return f;
}