#include <stdio.h>
#include <stdlib.h>
int main()
{
   
    int hour1, minute1;
    int hour2, minute2;

    printf("please input the time(hr&min): \n");
    scanf("%d %d", &hour1, &minute1);
    scanf("%d %d", &hour2, &minute2);

    int ih = hour2 -hour1;
    int im = minute2 - minute1;

    if ( im <0 ){
        im = 60 + im;
        ih --;
    }
    printf("the gap is %d hr %d min.\n", ih, im);

    system("pause");    // 防止运行后自动退出，需头文件stdlib.h
    return 0;
}