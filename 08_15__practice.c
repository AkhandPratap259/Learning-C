#include<stdio.h>
void decrypt(char* st) {
    char* ptr = st;
    while (*ptr != '\0') {
        *ptr = *ptr - 1;
        ptr++;
        }
    }
int main() {
    char st[100];
    printf("Enter your encrypted message:\n");
    gets(st);
    decrypt(st);
    printf("The decrypted message informs you that:\n%s", st);
    return 0;
    }

