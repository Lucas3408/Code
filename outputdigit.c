#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x;
    int t;
    scanf("%d", &x);
    t = x;
    


    int count=0;
    while(x>0){
        x/=10;
        count++;
    }
    printf("count = %d\n\n", count);
    int mask = pow(10, count-1);
    printf("mask = %d\n\n", mask);
    x = t;

    do
    {
        int d = x/mask;

        printf("%d", d);
        if ( mask > 9 ){
            printf(" ");
        }

        x %= mask;
        mask /= 10;

    }while(mask>0);

    printf("\n\n");
    

    system("pause");
    return 0;
}