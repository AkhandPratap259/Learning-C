#include<stdio.h>
struct vector {
    int x;
    int y;
    };
int main() {
    struct vector v1, v2;
    v1.x = 86;
    v1.y = 98;
    printf("The dimension X of vector V1 is %d.\n The dimension Y of vector V1 is %d.\n\n\n\n\n", v1.x, v1.y);


    v2.x = 869870;
    v2.y = 989870;
    printf("The dimension X of vector V2 is %d.\n The dimension Y of vector V2 is %d.\n", v2.x, v2.y);


    return 0;
    }