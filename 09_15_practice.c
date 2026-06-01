// wasted //
// wasted //
// wasted //
// wasted //
// wasted //
// wasted //
// wasted //
// wasted //
// wasted //
// wasted //
// wasted //









#include<stdio.h>

#include<string.h>
struct bank_account_information {
    char account_number[30];
    int year_of_opening_account;
    char bank[50];

    };
int main() {
    char name[50];
    char *ptr;
    ptr=name;
    struct bank_account_information customer_1;

    printf("Enter the account number:\n");
    scanf("%s", &customer_1.account_number);


    printf("Enter the  year_of_opening_account:\n");
    scanf("%d", &customer_1.year_of_opening_account);


    printf("Enter the name_of_the_bank:\n");
    gets(ptr);
    strcpy(customer_1.bank,*ptr);

    printf("\n\n\n\nThe account number is %s:\n", customer_1.account_number);
    printf("The  year_of_opening_account is %d:\n", customer_1.year_of_opening_account);
    printf("%s",customer_1.bank);
    return 0;
    }