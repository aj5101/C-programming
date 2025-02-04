#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(int i=1;i<=12;i++)
    {
        printf("%d*%d=%d",num,i,num*i);
        printf("\n");
    }
}