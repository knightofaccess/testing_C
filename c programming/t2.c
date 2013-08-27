#include<stdio.h>
int main()
{
  float l; /*liters used*/
  float k; /*kilometers driven*/
  float i; /*litres per 100 kilometers*/
  float count = 0;
  float count2 =0;
  float ave;
  printf("enter the number of litres used=");
  scanf("%f",&l);
  printf("enter the kilometers driven=");
  scanf("%f",&k);
  
  
  while(l!=-1)
  {
  i = (l/k)* 100;
  count2 =count2 + i;
  printf("The litres/100km for this tank was %f\n",i);
  count = count + 1;
  printf("enter the number of litres used=");
  scanf("%f",&l);
  printf("enter the kilometers driven=");
  scanf("%f",&k);
  }
ave = count2/count;
printf("the average consumption is %f\n",ave);
getch();
}
  
  
  
  
