#include<stdio.h>

int main(){
    int marks [5];
for (int i=0;i<5;i++){
    printf("Enter the marks of student %d\n",i+1 );
    scanf("%d",&marks[i]);
}
for (int a=0; a<5;a++)
{
    printf("The marks of student %d is %d\n",a+1,marks[a]);
}

    return 0;
}