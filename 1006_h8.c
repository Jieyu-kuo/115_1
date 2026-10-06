#include <stdio.h>
int main ()
{
    int tall;
    printf("請輸入身高");
    scanf("%d",&tall);
    if (tall>=120)
    {
        printf("可搭乘");
    }
    else
    {
        printf("不可搭乘");
    }
    return 0;
}