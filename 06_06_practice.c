// #include<stdio.h>
// int sum (int *a, int *b);
// float avg (int *a, int *b);
// int main(){
//     int a, b;
//     printf("Enter first number:\n");
//     scanf("%d",&a);
//     printf("Enter second number:\n");
//     scanf("%d",&b);
//     printf("The sum of two numbers is %d\n",sum(&a,&b));
//     printf("The average of two numbers is %.3f\n",avg(&a,&b));
//     return 0;
// }
// int sum (int *a, int *b)
// {
//     int c= *a+*b;
//     return c;
// }
// float avg (int *a, int *b)
// {
//     float c = (*a +*b)/2.0;
//     return c;
// }


























#include<stdio.h>
void sumAndavg (int a, int b,int *sum ,float *avg){
*sum=a+b;
*avg=(float) *sum /2;
}
int main(){
    int a,b,sum;
    float avg;
    printf("Enter the value of first number:\n");
    scanf("%d",&a);
    printf("Enter the value of second number:\n");
    scanf("%d",&b);
    sumAndavg(a,b,&sum,&avg);
    printf("The sum of these two numbers is %d\n",sum);
    printf("The avg of these two numbers is %.2f\n",avg);
    return 0;
}