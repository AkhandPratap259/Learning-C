#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("Generated.txt","w");
    int a= 43,b=4,c=6;
    fprintf(ptr,"%d",a);
    fprintf(ptr,"%d",b);
    fprintf(ptr,"%d",c);
    fclose(ptr);
    return 0;
}