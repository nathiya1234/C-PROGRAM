#include<stdio.h>
void swap(int *,int *);
void swapv(int,int);
int main()
{
int x,y,b,a;
printf("enter the value of x and y");
scanf("%d%d",&x,&y);
printf("Before swapping \n x = %d \n y = %d \n",x,y);
swap(&x,&y);
printf("After swapping \n x = %d \n y = %d \n",x,y);
printf("Before swapping \n x = %d \n y = %d \n",x,y);
swapv(x,y);
printf("After swapping \n x = %d \n y = %d \n",x,y);

return 0;
}
void swap(int *a,int *b)
{
int temp;
temp=*b;
*b=*a;
*a=temp;
printf("call by ref value of a and b in the function %d \n %d",*a,*b);
}
void swapv(int a,int b)
{
int temp;
temp=b;
b=a;
a=temp;
printf("call by value of a and b in the function %d \n %d",a,b);
}

