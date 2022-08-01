#include<stdio.h>
void main()
{
    int x,sum=0,r;
    printf("enter the number:");
    scanf("%d",&x);
    while (x>0)
    {
        r=x%10;
        x=x/10;
        sum+=r;

    }
    printf("sum of digit is=%d",sum);
        getch();
    return 0;
}


