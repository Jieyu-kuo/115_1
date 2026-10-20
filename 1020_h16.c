#include <stdio.h>
int main()
{
    int box;
    for(box=1;box<=10;box++)
    {
        if(box==4)
        {
            printf("寶箱%d是空的，跳過\n",box);
            continue;
        }
        if(box==8)
        {
            printf("找到神秘寶藏！位於寶箱%d\n",box);
            break;
        }
        printf("開啟寶箱%d\n",box);
    }
    printf("尋寶結束!");
    return 0;
}