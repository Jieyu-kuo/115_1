#include <stdio.h>
int main()
{
    int i,num;

    for (i=1;i<=5;i++)
    {
       printf("請輸入整數");
       scanf("%d",&num);
       if(num==0)
       {
         printf("結束");
         break;
       }
       if(num<0)
       {
        printf("富庶不處理");
        continue;
       }
        printf("%d\n",num);
    }
    return 0
}    