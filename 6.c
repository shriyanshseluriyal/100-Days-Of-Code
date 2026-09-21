#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers \n");
    scanf("%d %d",&a,&b);
    int c=a;
    a=b;
    b=c;
    printf("The numbers after swapp are : %d %d",a,b);
}