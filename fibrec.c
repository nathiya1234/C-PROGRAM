#include<stdio.h>
int fb(int,int);
int t=3,n;
int main()
{
int a=0,b=1,f,c;
printf("enter the limit \n");
scanf("%d",&n);
printf("fibinocci series terms are\n");
printf("%d\n%d\n",a,b);
f=fb(a,b);
}
int fb(int a,int b)
{
int c,f;
if(t<=n)
{
c=a+b;
printf("%d\n",c);
t++;
f=fb(b,c);
return f;
}
}
