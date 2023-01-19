#include<stdio.h>
int main(){

    
    int y = 89;
    int *x;
    x = &y;

    printf("The value of y is %d\n", y);
    printf("The address of y is %d\n", &x);
    printf("The value of y is %d\n", *x);
    printf("The address of y is %d\n", &y);
    printf("The value of y is %d\n", y);
    printf("The address of y is %d\n", &x);
    return 0;
}
