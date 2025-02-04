#include<stdio.h>
int main()
{
    int num,n,r,s=0,digit=0;
    printf("Enter the number\n ");
    scanf("%d",&num);
    n=num;
    while(n>0)
    {
        r=n%10;
        s=s+r;
        digit++;
        n=n/10;
    }
    printf("THe number of digits is %d\n ",digit);
    printf("The sum of digits is %d\n",s);
}
