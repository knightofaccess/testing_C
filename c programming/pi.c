#include<stdio.h>
int main()
{
    float s,p=0,k=1;
    float n=1;
    
    printf("enter the number of terms=");
    scanf("%d",&s);
    
    while(s>0)
    {
    p = p+(k*(4/n));
    k=(k*-1);
    n=n+2;
    s=s-1;
}
printf("the value of pi is=%f",p);
getch();
}
    
