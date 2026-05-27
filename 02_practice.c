#include<stdio.h>

int main(){
    int radius;
    float pi=3.14;
    printf("Enter the value of radius:\n");
    scanf("%d",&radius);
    printf("The area of the circle is %f\n",pi*radius*radius);
    int height;
    printf("Enter the value of height of the cylinder:\n");
    scanf("%d",&height);
    printf("The volume of the cylinder with height and radius as provided by you is %f\n",pi*radius*radius*height);
    return 0;
}

