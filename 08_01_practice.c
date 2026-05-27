#include<stdio.h>
int main() {
    // char str[] = "Akhand";
    char str[]={'A','k','h','a','n','d','\0'};
            char *ptr = str;
    while (*ptr != '\0')
        {
        printf("%c", *ptr);
        ptr++;


        }
    return 0;
    }