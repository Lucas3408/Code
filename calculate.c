#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("This is for test. ^_^\n");
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%f / %f = %f\n", a, b, 1.0*a/1.0*b);


    system("pause");
    return 0;
}