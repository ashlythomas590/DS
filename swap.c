#include<stdio.h>
void main()
{
int a,b,temp;
printf("Enter the number:\n");
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("After swapping, the values are:\n");
printf("a=%d\n",a);
printf("b=%d\n",b);
}

