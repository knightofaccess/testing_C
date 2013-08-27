#include<stdio.h>
int main()
{
    int month;
    
    printf("enter month travelling=");
    scanf("%d",&month);
    switch(month)
    {
    case 1:case 2:case 3:
         printf("");
         break;
    case 4:case 7:case 9:
         printf("fuk you");
         break;
    case 6:case 8:case 5:
    printf("shihan is");
         break;
    default:
         printf("u dont know ur months..Just like me :)");
}
getch();
}
