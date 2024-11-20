/*花销管理菜单 
编写一个花销管理菜单程序，菜单中包含至少3个功能选项，最后一个选项为退出。
用户选择一个菜单选项后，执行相应的功能，用户输入任意键后回到菜单。
每次菜单始终显示在屏幕的固定位置。每个菜单选项可以有子菜单*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <Windows.h>

int main(){
    int choice, pay = 0;
    int min = 1e6;
    int max = -1e6;
    int a[7];
    double sum = 0;
    printf("花销管理菜单\n记录花销----输入一周每天的花销：\n");   //考虑到实际需要，优先要求用户输入7个值，计入数组
    for(int i = 0; i < 7; i++){
        printf("第%d天：", i + 1);
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < 7; i++){
                sum = sum + a[i];

                if(a[i] > max){
                    max = a[i];
                }
                if(a[i] < min){
                    min = a[i];
                }  
                
            }

    
    system("cls"); //清屏以显示菜单 
    
    menu:
    printf("请选择一个功能：\n"); //菜单始终显示在屏幕的固定位置
    printf("1. 查看花销情况\n");
    printf("2. 查询花销\n");
    printf("3. 退出\n");
    scanf("%d", &choice);
    system("cls");
    switch(choice){
        case 1:
            printf("查看花销情况\n");
            printf("一周的花销为%.2lf\n", sum);
            printf("平均每天的花销为%.2lf\n", sum / 7);
            printf("一周花销最高的一天为%d\n", max);
            printf("一周花销最低的一天为%d\n", min);
            system("pause");
            system("cls");
            goto menu;
            break;       
        case 2:
            printf("查询花销\n");
            printf("请输入要查询的天数：");
            scanf("%d", &pay);
            printf("第%d天的花销为%d\n", pay, a[pay - 1]);
            system("pause");
            system("cls");
            goto menu;
            break;
        case 3:
            printf("退出ing\n");
            Sleep(1000);
            exit(0);
        default:
            printf("输入错误!请重新输入\n");
            Sleep(1000);
            system("cls");
            goto menu;
            break;
        }
    
    system("pause");
    return 0;
}