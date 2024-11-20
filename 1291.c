/*今天是星期一，小明下定决心，
从今天开始周一到周五每天至少编1个程序，周六日每天至少编2个程序，请问n天后小明至少编了多少个程序？
输入经过的天数n，输入格式为"%d"
输出n天后小明至少编出的程序数，输出格式为"%d\n"*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    int w = 9;
    scanf("%d",&n);
    int sum = 0;
    int week = n / 7;
    int day = n % 7;
    sum = week * w;
    if(day == 0){
        printf("%d\n",sum);
    }else if( day <= 5){
        sum += day;
        printf("%d\n",sum);
    }else if ( day == 6 ){
        sum += 7;
        printf("%d\n",sum);
    }



    system("pause");
    return 0;
}