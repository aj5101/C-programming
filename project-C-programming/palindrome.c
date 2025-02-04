#include<stdio.h>
int main()
{
    int num,n,r,s=0;
    printf("Enter the number\n ");
    scanf("%d",&num);
    n=num;
    while(n>0)
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    if(num==s)
    printf("THe number is palindrome");
    else
    printf("THe number is not palindrome");
}