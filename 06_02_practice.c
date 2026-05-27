#include<stdio.h>
void swap (int *a, int *b);
int main(){
    int a, b;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    swap(&a,&b);
    printf("The value of a is now %d.\n",a);
    printf("The value of b is now %d.\n",b);
    return 0;
}
void swap (int *a, int *b){
    int change;
    change=*a;
    *a=*b;
    *b=change;

}