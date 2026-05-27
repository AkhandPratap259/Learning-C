#include<stdio.h>
int main(){
    int rating;
    printf("Enter your rating (1-10):\n");
    
    scanf("%d", &rating);
    switch(rating){
        case 1:
    printf("Your rating is 1\n");
    break;
    break;
     case 2:
    printf("Your rating is 2\n ");
    break;
    case 3 :
    printf("Your rating is 3\n");
    break;
    case 4 :
    printf("Your rating is 4\n ");
    break;
    case 5 :
    printf("Your rating is 5\n");
    break;
    case 6:
    printf("Your rating is 6\n ");
    break;
    case 7:
    printf("Your rating is 7\n ");
    break;
    case 8 :
    printf("Your rating is 8\n ");
    break;
    case 9:
    printf("Your rating is 9\n ");
    break;
    case 10 :
    printf("Your rating is 10\n");
    break;
    default:
    printf(" Your rating is Invalid\n");
    break;




    }
    return 0;
}
