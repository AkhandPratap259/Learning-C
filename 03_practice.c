#include<stdio.h>

int main(){
    int c;
    printf("Enter the value of temperaure your area in celcius:\n");
    scanf("%d",&c);
    float far=(c*9/5)+32;
    printf("The temperature of your area in Farenheit is %f\n",far);
    return 0;
}