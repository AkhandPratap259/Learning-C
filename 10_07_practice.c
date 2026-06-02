#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("file.txt","r");
    // char c=fgetc(ptr);
    printf("%c\n",fgetc(ptr));
    printf("%c\n",fgetc(ptr));
    printf("%c\n",fgetc(ptr));
    printf("%c\n",fgetc(ptr));
    printf("%c\n",fgetc(ptr));
    fclose(ptr);
    return 0;
}