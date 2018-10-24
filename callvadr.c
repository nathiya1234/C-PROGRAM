#include<stdio.h>
void inc(int);
void incr(int *);
main()
{
int a=10,b=10,p;
printf("call by value\n");
printf("a=%d\n",a);
inc(a);
printf("\nAfter calling inc(a)");
printf("a=%d\n",a);
printf("call by reference\n");
printf("b=%d\n",b);
incr(&b);
printf("\nAfetr calling incr(&b)");
printf("b=%d",b);
return p;
}
void inc(int x)
{
x++;
printf("x=%d",x);
}
void incr(int *p)
{
(*p)++;
}
