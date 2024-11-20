/*小明和小张要决定今天是否去公园，
他们用石头、剪刀、布游戏（5局，谁胜的次数多谁赢，胜的次数一样多算平），
如果小明赢了（平了不行）就去公园。
现在让你根据结果判断，他们能去公园吗？

输入：每局一行，每行两个数，小明先出，小张后出，每个数只能取1、2、3（1代表石头，2代表剪刀，3代表布）。
输出：能去公园输出"GOOD"，不能去输出"NEXT TIME"
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b, win = 0, lose = 0;  //a for ming, b for zhang
    for( int i = 0; i < 5; i++){
        scanf("%d %d", &a, &b);
        if(a == 1 && b == 2 || a == 2 && b == 3 || a == 3 && b == 1){
            win++;
        }
        else if(a == b){
            win = win;
            lose = lose;
        }else{
            lose++;
        }
    }
    if(win > lose){
        printf("GOOD");
    }else{
        printf("NEXT TIME");
    }



    system("pause");
    return 0;
}