
#include<stdio.h>
void main()
{
    int x=1,y=2;
    printf("before swaping value of x=%d and y=%d",x,y);

    x=x+y;
    y=x-y;
    x=x-y;
    printf("\nafter swaping value of x=%d and y=%d",x,y);
        getch();
    return 0;
}

