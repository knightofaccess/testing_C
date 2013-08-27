#include<stdio.h>
#define limit 13
int main()
{
int i,k=0,n,m,j;
int array[limit];

printf("enter ten numbers");
scanf("%d",&i);
while(k<10)
{
array[j] = i;
j++;
if(i>m)
m=i;
else
if(i<n)
n=i;
printf("enter ten numbers");
scanf("%d",&i);
}
getch();
}

