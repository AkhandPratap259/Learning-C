#include<stdio.h>
void pattern(int a);
int main() {
    int a;
    printf("Enter the number to obtain the corresponding pattern:\n");
    scanf("%d", &a);
    pattern(a);
    return 0;
}
void pattern (int a){
    if(a==1){
        printf("*\n");
    return;
    }
    pattern(a-1);
    for(int i=0;i<a;i++)
    {
        printf("*");
    }
    printf("\n");
}
