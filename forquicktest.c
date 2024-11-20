#include <stdio.h>
#include <stdlib.h>
int main()
{
    //int sum = 0;
    for ( int i=0; i<10; i++ ) {
        /*if ( i%2 ) break;
        sum += i; */
        printf("*");
    }
    //printf("%d\n", sum);

    system("pause");    // 防止运行后自动退出，需头文件stdlib.h
    return 0;
}