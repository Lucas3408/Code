/*1498 小明养成了定闹钟的习惯，定闹钟时，设定好闹钟后，会显示闹钟时间距离现在还有多长时间。
若闹钟时间小于当前时间，则指的是第2天的这个时间。你的任务是编写程序，计算闹钟时间距离现在还有多长时间。

第1行输入当前时间，第2行输入闹钟时间，时间为几点几分，输入格式为"%2d:%2d"
输出闹钟时间距离现在还有多长时间，输出格式为"%2d:%2d\n"*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int hour1, minute1, hour2, minute2 = 0;
    int a, b = 0;
    int d_hour, d_minute = 0;
    scanf("%2d:%2d", &hour1, &minute1);  //current
    scanf("%2d:%2d", &hour2, &minute2);    //alarm
    a = hour1 * 60 + minute1;
    b = hour2 * 60 + minute2;

    if(a > b){       //for next day
        d_hour = ( 24 * 60 - a + b ) / 60;
        d_minute = ( 24 * 60 - a + b ) % 60;

    }else{
        d_hour = ( b - a ) / 60;
        d_minute = ( b - a ) % 60;

    }

    printf("%02d:%02d\n", d_hour, d_minute);

    system("pause");
    return 0;
}