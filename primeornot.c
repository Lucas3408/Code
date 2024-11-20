#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;  //要判断的数
    int i;  //循环变量
    int var = 1;  //条件
    printf("Is the number prime?\n");
    scanf("%d", &x);  //输入要判断的数

    if (x == 1){   //判断是否为1
        printf("error!\n");
    }else
    {

    for (i = 2; i*i < x; i++){   //循环判断 var用作判断结果呈现 （1为true 0为false） i为循环变量 x为要判断的数 
        if (x % i == 0){
            var = 0;
            break;
        }
    
    }

    if (var == 1){    //给出结果
        printf("true!\n");
    }else{
        printf("false!\n");
    }
    }

    

    system("pause");
    return 0;
}