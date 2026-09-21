#include<stdio.h>
int main()
{
    int c;
    printf("Enter the temperature in celsius \n");
    scanf("%d",&c);
    double f=c*9/5+32;
    printf("The temperature in fahrenheit is : %.1lf",f);
}