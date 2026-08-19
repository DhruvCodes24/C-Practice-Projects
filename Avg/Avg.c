#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter number a");
    scanf("%d", &a);
    printf("enter number b \n");
    scanf("%d", &b);
    printf("enter number c \n");
    scanf("%d", &c);
    d = a+b+c/3;
    printf("Average is: %d \n", d);
    return 0;
}