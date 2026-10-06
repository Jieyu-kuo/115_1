#include <stdio.h>
int main ()
{
    int score;
    printf("請輸入成績:");
    scanf("%d,&score");
    if (score>=60)
    {
        printf("及格");
    }
    else
    {
        printf("不及格");                                                                 
    }
    return 0;
}