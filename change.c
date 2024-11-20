#include <stdio.h>
#include <stdlib.h>

int main()
{
    int price = 0;
    int bill = 0;

    printf("请输入金额 （元）：");
    scanf("%d", &price);

    printf("请输入票面：");
    scanf("%d", &bill);

    if ( bill >= price) {
        printf("找您：%d 元\n", bill - price);

    }else {
        printf("你个老六！钱不够！\n");
    }
        
    system("pause");

    return 0;
    

}
