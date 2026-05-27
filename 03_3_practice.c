#include<stdio.h>

int main(){
    int m;
    printf("Enter Your marks (1-100) to know your grades:\n ");
    scanf("%d",&m);
    if (m>=90 && m<=100)
    {
    printf("Your Grade is A\n");
    }
   else if (m>=80 && m<90)
   {
   printf("Your Grade is B\n");
   }
   else if (m>=70 && m<80)
   {
   printf("Your Grade is C\n");
   }
   else if (m>=60 && m<70)
   {
   printf("Your Grade is D\n");
   }
   else if (m>=0 && m<60)
   {
   printf("Your Grade is F\n");
   }
   else 
   { 
   printf("You have entered invalid marks. Please try again. \n");
   }






    
    return 0;
}