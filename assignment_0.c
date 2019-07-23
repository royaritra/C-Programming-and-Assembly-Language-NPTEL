#include <stdio.h>

#define ADD_FN(a,b) a+b

int fn_A(int x, int y) 
{
	return (x+y); 
}

int fn_B(int x, int y)
{
	return (x-y);
}

int fn(int x, int y) 
{
	return (x/y); 
}

void main()
{
	int x, y, w, z;
	x=20;
	y=30;
	z = fn(x,y);
    printf("%d\n",ADD_FN(x,y));
    printf("%d\n",ADD_FN(z,x));
    int t=ADD_FN(2,3)*ADD_FN(7, 2);
	w =ADD_FN(x,y)*ADD_FN(z, x); 
    printf("x=%d, y=%d, t=%d w=%d, z=%d\n", x, y, t, w, z);
}