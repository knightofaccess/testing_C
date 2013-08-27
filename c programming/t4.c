#include<stdio.h>
int main()
{
int x1,x2;
int sum,product,diff;
float quotient,mod;
printf("enter a number =");
scanf("%d",&x1);
printf("enter another number =");
scanf("%d",&x2);

sum = x1+x2;
product = x1*x2;
diff=x1-x2;
quotient = x1/x2;
mod=x1%x2;
printf("the sum is =%d\n",sum);
printf("the product is =%d\n",product);
printf("the difference is =%d\n",diff);
printf("the quotient is =%f",quotient);
printf("the modulus is =%f",mod);
getch();
}
