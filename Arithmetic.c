#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter a number1:");
scanf("%d",&a);
printf("\nEnter a number2:");
scanf("%d",&b);
c=a+b;
printf("\na+b is:%d",c);
c=a-b;
printf("\na-b is:%d",c);
c=a*b;
printf("\na*b is:%d",c);
c=a/b;
printf("\na/b is:%d",c);
c=a%b;
printf("\na%%b is:%d",c);
return 0;
}
