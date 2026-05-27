#include<stdio.h>
// we have to use ASCII values for this program 
// lowercase 97-122

int main(){
    char a;
    printf("Enter a character:\n");
    scanf("%c",&a);
    if (a>=97 && a<=122)
{
    printf("It is a lowercase.\n");

}
else
{
    printf("It is not a lowercase.\n");
}
        return 0;
}