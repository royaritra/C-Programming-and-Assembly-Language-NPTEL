#include<stdio.h>
int*fn(int *y)
{
    int x=27;
    *y=x*4;
    return &x;
}
void main()
{
    int *pA;
    int x,z,y=25;
    z=y;
    pA=fn(&y);
    printf("X=%d,Y=%d,Z=%d",*pA,y,z);
}