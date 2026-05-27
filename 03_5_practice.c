#include<stdio.h>

int main(){
    float i, t;
    printf("Enter your income in Rupees:\n");
    scanf("%f",&i);
    if (i > 250000 && i < 500000){
    t = i + 0.05 * i;
    printf("The amount of tax to be paid by you is %f\n",t - i);
    }
    if (i >= 500000 && i < 1000000)
    {
        t = i + 0.2 * i;
        printf("The amount of tax to be paid by you is %f Rs.\n",t - i);
    }
    if (i >= 1000000)
    {
        t = i + 0.3 * i;
        printf("The amount of tax to be paid by you is %f\n",t - i);
    }
     if (i <= 250000)
    {
        printf("Your income is tax free.\n");
    
    }
    
    
    
    return 0;
}
    