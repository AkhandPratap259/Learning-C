#include<stdio.h>
 typedef struct dates{
    int day;
    int month;
    int year;
}dt;
int compare(dt d1,dt d2){
    if(d1.year>d2.year){
        return 1;
    }

    if(d1.year<d2.year){
        return -1;
    }

    if(d1.month>d2.month){
        return 1;
    }

    if(d1.month<d2.month){
        return -1;
    }

    if(d1.day>d2.day){
        return 1;
    }

    if(d1.day<d2.day){
        return -1;
    }
    else{
        return 0;
    }
        }

int main(){
    dt d1,d2;
    printf("You have to enter the date in the dd/mm/yyyy format.Follow the instructions.\nEnter the day(dd) of date 1:\n");
    scanf("%d",&d1.day);
    printf("Enter the month(mm) of date 1:\n");
    scanf("%d",&d1.month);
    printf("Enter the year(yyyy) of date 1:\n");
    scanf("%d",&d1.year);


    printf("Enter the day(dd) of date 2:\n");
    scanf("%d",&d2.day);
    printf("Enter the month(mm) of date 2:\n");
    scanf("%d",&d2.month);
    printf("Enter the year(yyyy) of date 2:\n");
    scanf("%d",&d2.year);
int a=compare(d1,d2);
if(a==0){
    printf("The date 1 and date 2 entered are equal.\n");
}
else if(a!=0){
    printf("The date 1 and date 2 entered are not equal.\n");
}
printf("The date 1 is %d/%d/%d\n",d1.day,d1.month,d1.year);
printf("The date 2 is %d/%d/%d\n",d2.day,d2.month,d2.year);
    return 0;
}    