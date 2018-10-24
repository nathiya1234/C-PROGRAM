#include<stdio.h>
int main()
{
int x,n;
printf("enter the number");
scanf("%d",&n);
x=fact(n);
printf("factorial=%d",x);
}
int fact(int n)
{
int factorial;
if(n==1)
{
return 1;
}
else
{
factorial=(n*fact(n-1));
return (factorial);
}
}
