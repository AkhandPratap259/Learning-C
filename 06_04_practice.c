#include<stdio.h>
void dekho (int a);
int main(){
    int i=66;
    printf("The address of the i variable is %d.\n",&i);     
     dekho(i);     
    return 0;
}
void dekho (int a){
   
    printf("The address of the i variable is %u.\n",&a);     
}