#include<stdio.h>
double factorial(int y);
int main()
{
    int i;
    double fact;
    for(i=1;i<=10;i++)
    {
    fact = factorial(i);
    printf("%d! = %lf\n",i,fact);
}
getch();
}

double factorial(int y)
{
       double z;
if(y<=1)
       z=1.0;
else
  z = y*factorial(y-1);
 return z;
}
EX08148   
