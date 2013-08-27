#include<stdio.h>
#include<conio.h>
int num1;
void oddevn(void);
void negative(void);

int main()
{
extern num1;
printf("enter a integr number=");
scanf("%d",&num1);
oddevn();
negative();
getch();
}
void oddevn(void)
{
     if(num1%2!=0)
     printf("number is odd");
     else
     printf("number is even");
     
}

void negative(void)
{
  if(num1<0)
  printf("the number is negative");
  else
  printf("the number is positive");
}
