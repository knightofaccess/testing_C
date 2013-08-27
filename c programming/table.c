#include<stdio.h>
int main()
{
    double price[3][3]={{4.50,8.95,3.00},{3.80,9.50,2.50},{4.20,10.30,3.25}};
    int i,j,k=1;
    double x=0;
    double subt[3];
    for(i=0;i<3;i++)
    {

    
    
    for(j=0;j<3;j++)
    {
    subt[i] = price[i][j];
    x=x+subt[i];
    
    
}
printf("the sub total of person%d=%lf\n",k,x);
k++;
}
getch();
}
    
    
    
