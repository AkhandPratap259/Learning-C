#include<stdio.h>
#include<string.h>
int main(){
    int  i=0;
    char c;
    char s1[50];
    char s2[50];

    printf("Enter your first string:\n");
    gets(s1);
    printf("Enter your second string character by character by character:\n");
    while(c!= '\n'){
        fflush(stdin);
        scanf("%c",&c);
        s2[i]=c;
        i++;
    }
    s2[i-1]='\0';
printf(" The value of first string is %s\n",s1);
printf(" The value of second string is %s\n",s2);
printf("The comparison value of string 1 and string 2 is %d",strcmp(s1,s2));

    return 0;
}