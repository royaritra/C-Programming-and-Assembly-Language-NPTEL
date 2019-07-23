#include<stdio.h>
int fn(int *x,int n)
{
    *x=n;
    return (n+100);
}
void main()
{
    int x,y;
    y=fn(&x,250);
    printf("OUTPUT:X=%d, Y=%d"+3,x,y);
}