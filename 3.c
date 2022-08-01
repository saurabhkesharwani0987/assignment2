#include<stdio.h>
void main()
{
    int x=1,y=2,z;
    printf("before swaping value of x=%d and y=%d",x,y);

    z=x;
    x=y;
    y=z;
    printf("\nafter swaping value of x=%d and y=%d",x,y);
        getch();
    return 0;
}

