#include<stdio.h>
#define maxsize 10

int main()
{
int vector[maxsize];
int j=0;
int maxi,num,size=0;
printf("enter an integer of -1 to exit");
scanf("%d",&num);
while(num!= -1)
{
vector[j] = num;
j++;
size++;
printf("enter an integer of -1 to exit");
scanf("%d",&num);
}
printf("the size of the vector is %d\n",size);
for(j=0;j<size;j++)
{
if(vector[j]>maxi)
maxi = vector[j];
}
printf("the max eliment is %d\n",maxi);
getch();
}

