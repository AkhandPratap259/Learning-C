#include<stdio.h>
void copy(char* st1, char* st2) {
    int i = 0;
    char* ptr = st2;
    while (*ptr != '\0') {
        st1[i] = st2[i];
        i++;
        ptr++;
        }
    st1[i] = '\0';
    }
int main() {
    char st1[100];
    char st2[100];
    printf("Enter the first statement:\n");
    gets(st1);
    printf("Enter the second statement:\n");
    gets(st2);
    copy(st1, st2);
    printf("\n\n\n\n\t\t\t\t\t\t\t\t%s\n\n\n\n\n\n\n\n\n", st1);


    return 0;
    }