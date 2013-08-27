#include<stdio.h>
#define LIMIT 130

int main()
{
float marks[LIMIT],average;
float sum=0.0;
int i=0;
do
{
printf("enter the mark of the student or -1 to quit");
scanf("%f",&marks[i]);
if (marks[i]>=0)
sum = sum + marks[i];
}
while(marks[i++]>=0);
average = sum/(i-1);
printf("\nthe average is %f",average);
getch();
}
