#include<stdio.h>

int main()
{
    
    int a,n,r,p,s=1,i,j;
    printf("ENter the number\n");
    scanf("%d",&a);
    p=a%100;
    i=p%10;
    j=p/10;
    while(p>0)
    {
        r=p%10;
        s=s*r;
        p=p/10;
    }
    printf("%d * %d = %d",j,i,s);
}
    