#include<stdio.h>
int main(){
    FILE *ptr,*ptr2;
    int a,b,c;
    ptr=fopen("First.txt","r");
    fscanf(ptr,"%d",&a);
    fscanf(ptr,"%d",&b);
    fscanf(ptr,"%d",&c);
    fclose(ptr);
    ptr2=fopen("First.txt","w");
    fprintf(ptr2,"%d\n",a*2);
    fprintf(ptr2,"%d\n",b*2);
    fprintf(ptr2,"%d\n",c*2);
    fclose(ptr2);
    printf("All the integers a b and c are doubled");
    return 0;
}