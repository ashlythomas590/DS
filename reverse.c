#include<stdio.h>
int main()
{
int num,reversed=0;
printf("Enter the number:");
scanf("%d",&num);
while(num!=0)
{
reversed=reversed*10+num%10;
num/10;
}
printf("Reversed Number=%d\n",reversed);
return 0;
}
