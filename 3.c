#include<stdio.h>
int main()
{
    int l,b;
    printf("Enter two length and breadth \n");
    scanf("%d %d",&l,&b);
    printf("The Area is : %d",l*b);
    printf("\nThe Perimeter is : %d",2*(l+b));
}