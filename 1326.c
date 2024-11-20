/*输入10个数，每个数为0或1，输出0所占的百分比。
每个数的输入格式为"%d"
输出格式为"%.2f\n"*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int zero = 0;
    int a[10];
    double proportion;
    for(int i = 0; i < 10; i++){
        
        scanf("%d", &a[i]);
        if( a[i] == 0 ){
            zero++;
        }
    }

    proportion = 1.00 * zero / 10.00;
    printf("%.2f\n", proportion);





    system("pause");
    return 0;
}