#include<stdio.h>
int main()
{
float num1,num2;
char op;
  
while(1)
{

printf("enter num1,operator,num2 =");
scanf("%f,%c,%f",&num1,&op,&num2);

if(op=='+')
printf("=%f\n",num1+num2);
else
if(op=='-')
printf("=%f\n",num1-num2);
else
if(op=='*')
printf("=%f\n",num1*num2);
else
if(op=='/')
printf("=%f\n",num1/num2);
else
printf("fuck you\n");
}
getch();
}
