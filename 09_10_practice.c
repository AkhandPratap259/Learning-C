#include<stdio.h>

struct vector {
    int x;
    int y;
    };
    struct vector sumvector(struct vector v1,struct vector v2){
        struct vector result;
        result.x = v1.x+v2.x;
        result.y = v1.y+v2.y;
        return result;
    }
int main(){
    struct vector v1, v2,sum;
    v1.x = 4;
    v1.y = 8;
    printf("The dimension X of vector V1 is %d.\n The dimension Y of vector V1 is %d.\n\n\n\n\n", v1.x, v1.y);


    v2.x = 3;
    v2.y = 9;
    printf("The dimension X of vector V2 is %d.\n The dimension Y of vector V2 is %d.\n\n\n\n\n", v2.x, v2.y);
    sum=sumvector(v1,v2);
    printf("The dimension X of result is %d.\n The dimension Y of result is %d.\n", sum.x, sum.y);

    return 0;
}