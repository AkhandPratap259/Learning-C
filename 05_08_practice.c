#include<stdio.h>
float force(float a);
int main(){
    float a;
    printf("Enter the mass of the object in KG:\n");
    scanf("%f",&a);
    printf("The amount of force of attraction on the object is %.3f N \n",force(a));
    return 0;
}
 float force(float a){
    float f;
    printf("Getting the value of gravity\n And now\n");
    f= (9.8* a);
    return f;
}