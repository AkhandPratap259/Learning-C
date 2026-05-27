#include<stdio.h>
void GM();
void GN();
void GF();
int main(){
    printf("We are initialising GOOD MORNING , GOOD AFTERNOON and GOOD NIGHT function one by one.\n");
    GM();
    GF();
    GN();
    printf("Functions had done all its work\n");
    return 0;
}
void GM(){
    printf("\tGOOD MORINING to all.\n");
}
void GN(){
    printf("\tGOOD NIGHT to all.\n");
}
void GF(){
    printf("\tGOOD AFTERNOON to all.\n");
}  