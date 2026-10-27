#include <stdio.h>
int add(int a,int b)
{
    return a*b;
}
int main()
{
    int money,amount,total;
    printf("請輸入購買數量:");
    scanf("%d",&money);
    printf("請輸入購買金額:");
    scanf("%d",&amount);
    total=add(money,amount);
    printf("總金額:%d",total);
    return 0;

}