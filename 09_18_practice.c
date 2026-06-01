#include<stdio.h>
 typedef struct times{
    int day;
    int month;
    int year;
    int hours;
    int minutes;
    int seconds;
}tm;
int compare(tm d1,tm d2){
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
    if(d1.hours>d2.hours){
        return 1;
    }

    if(d1.hours<d2.hours){
        return -1;
    }
    if(d1.minutes>d2.minutes){
        return 1;
    }

    if(d1.minutes<d2.minutes){
        return -1;
    }
    if(d1.seconds>d2.seconds){
        return 1;
    }

    if(d1.seconds<d2.seconds){
        return -1;
    }
    else{
        return 0;
    }
        }

int main(){
    tm d1,d2;
    printf("You have to enter the time in the dd/mm/yyyy-HH:MM:SS format.Follow the instructions.\nEnter the day(dd) of time 1:\n");
    scanf("%d",&d1.day);
    printf("Enter the month(mm) of time 1:\n");
    scanf("%d",&d1.month);
    printf("Enter the year(yyyy) of time 1:\n");
    scanf("%d",&d1.year);
    printf("Enter the hours(HH) of time 1:\n");
    scanf("%d",&d1.hours);
    printf("Enter the minutes(MM) of time 1:\n");
    scanf("%d",&d1.minutes);
    printf("Enter the seconds(SS) of time 1:\n");
    scanf("%d",&d1.seconds);


    printf("Enter the day(dd) of time 2:\n");
    scanf("%d",&d2.day);
    printf("Enter the month(mm) of time 2:\n");
    scanf("%d",&d2.month);
    printf("Enter the year(yyyy) of time 2:\n");
    scanf("%d",&d2.year);
    printf("Enter the hours(HH) of time 2:\n");
    scanf("%d",&d2.hours);
    printf("Enter the minutes(MM) of time 2:\n");
    scanf("%d",&d2.minutes);
    printf("Enter the seconds(SS) of time 2:\n");
    scanf("%d",&d2.seconds);

    if(d1.day>31||d1.month>12||d1.hours>23||d1.minutes>59||d1.seconds>59||d2.day>31||d2.month>12||d2.hours>23||d2.minutes>59||d2.seconds>59){
      printf("Please Enter the valid  details.\n");
      printf("The value of day cannot exceed 31.\n");
      printf("The value of month cannot exceed 12.\n");
      printf("The value of hours cannot exceed 23.\n");
      printf("The value of minutes cannot exceed 59.\n");
      printf("The value of seconds cannot exceed 59.\n");
       return 1;
    }
int a=compare(d1,d2);
if(a==0){
    printf("The time 1 and time 2 entered are equal.\n");
}
else if(a!=0){
    printf("The time 1 and time 2 entered are not equal.\n");
}
printf("The time 1 is : %d/%d/%d-%d:%d:%d\n",d1.day,d1.month,d1.year,d1.hours,d1.minutes,d1.seconds);
printf("The time 2 is : %d/%d/%d-%d:%d:%d\n",d2.day,d2.month,d2.year,d2.hours,d2.minutes,d2.seconds);
    return 0;
}    