#include<stdio.h>
int main()
{
    int n,a,b,temp,even;
    a=0,b=1;
    printf("Printing odd number in fibonacci series\n");
    printf("How many number of times to print,the number should be>100");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        temp=a+b;
        if(temp>=1000)
        {
            printf("It reached to 1000,end the program\n");
            break;
        }
        a=b;
        b=temp;
        if(temp%2==0)
        {
            continue;
        }
        printf("%d",temp);
    }
    return 0;
}