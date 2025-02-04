#include<stdio.h>
int main()
{
    int a,b,area,perimeter;
    printf("Enter the length and breadth\n");
    scanf("%d %d",&a,&b);
    area=a*b;
    perimeter=2*(a+b);
    printf("The area is %d \n peimeter is %d",area,perimeter);
}