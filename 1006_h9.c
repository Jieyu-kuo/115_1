#include <stdio.h>
int main ()
{
  int grade;
  int rate;
  printf("請輸入成績:");
  scanf("%d",&grade);
  if (grade>=60)
  {
    printf("請輸入出席率");
    scanf("%d",&rate);
    if (rate>=80)
    {
        printf("通過");
    }
    else
    {
        printf("不通過");
    } 
} 
else
  {
    printf("成績不及格");
  }
  return 0;
}