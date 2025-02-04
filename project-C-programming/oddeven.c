#include<stdio.h>
int main()
{
    int num;
    int even[10];
    int odd[10];
    int p=0,q=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(i%2==0)
        {
        even[p]=i;
        p++;
        }
        else
        {
        odd[q]=i;
        q++;
        }
    }
    printf("THe even numbers are ");
    for(int j=0;j<p;j++)
    printf("%d ",even[j]);
    printf("\n");
    printf("the odd numbers are ");
    for(int k=0;k<q;k++)
    printf("%d ",odd[k]);
}