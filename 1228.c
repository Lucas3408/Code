/*编写一个程序打印如下对称图形（行数由键盘输入1-9范围的值）。
例如下面是输入数字4时的情形：
4444444   2*4-1
 33333    2*3-1
  222     2*2-1
   1      2*1-1
  222
 33333
4444444*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = n; i >= 1; i--){
        int a = 2 * i - 1;
        for(int j = 1; j <= a; j++){
            printf("%d", i);
            if(j == a){
                printf("\n");
            }
        }
    }


    for(int i = 2; i <= n; i++){
            int a = 2 * i - 1;
            for(int j = 1; j <= a; j++){
                printf("%d", i);
                if(j == a){
                    printf("\n");
                }
            }

        
        }

    



    system("pause");
    return 0;
}