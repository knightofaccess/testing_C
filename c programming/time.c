#include<stdio.h>
int time(int a,int b,int c);
int main()
{ 
    int t,p,q,r;
  
    printf("enter the time in(hrs\min\sec)=");
    scanf("%d%d%d",&p,&q,&r);
    t =time(p,q,r);
    printf("the time in secs since 12 struck=%d",t);
    getch();

}

int time(a,b,c)
{
int m,n,sum;

m = a*3600;
n = b *60;
sum = m+n+c;
return sum;
}
