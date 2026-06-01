//  conclusion ------->>>>> the gets function does not work even after a single scanf is used so use it before 
//  you use scanf either you will see the inappropriate behaviour of the program without any known error.................




#include<stdio.h>
#include<string.h>
typedef struct Bank_information{
    char account_number[30];
    int year_of_the_opening;
    char name_of_the_bank[50];
}sbi;
int main(){
    sbi c;

   

    printf("Enter the  name_of_the_bank of customer:\n");
     gets(c.name_of_the_bank);


 printf("Enter the account number of customer:\n");
    // scanf("%s",&c.account_number);
 gets(c.account_number);

    printf("Enter the year_of_the_opening account of customer:\n");
   scanf("%d",&c.year_of_the_opening );
    

    printf("The  name_of_the_bank of customer is: %s\n" ,c.name_of_the_bank);
    printf("The year_of_the_opening account of customer is: %d\n",c.year_of_the_opening);
    printf("The account number of customer is: %s\n",c.account_number);
    
    return 0;
}