#include<stdio.h>
int main(){
    FILE *ptr;
    int a,b,c;
    ptr=fopen("Frst.txt","r");
    if(ptr==NULL){
        printf("THIS FILE DOES NOT EXIST");
    }
    else{

    
    fscanf(ptr,"%d",&a);
    fscanf(ptr,"%d",&b);
    fscanf(ptr,"%d",&c);
    fclose(ptr);
    printf("The value of a is:%d\n",a);
    printf("The value of b is:%d\n",b);
    printf("The value of c is:%d\n",c);
    }
    return 0;
}