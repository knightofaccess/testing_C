#include<stdio.h>
int main()
{
int x,min,max;
int n=0;

while (n<5)
{
printf("\nenter number =");
scanf("%d",&x);
n=n+1;  
if(x<=min)
{
min =x;
}
else
{
max = x;
}

}
printf("\nthe max value entered=%d/n",max);
printf("\nthe min value entered=%d",min);
getch();
}
