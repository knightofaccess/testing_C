#include<stdio.h>
int fact(int y);
int main()
{
    int i;
    int l;
    
    printf("the number=");
    scanf("%d",&i);
    l = fact(i);
    printf("%d! is = %d",i,l);
    getch();
}

int fact(int y)
{
 int z;


 if(y<1) 
 z=1;
 else
 z=y*fact(y-1);

 return z;
}
    
    
