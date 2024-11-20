#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    int b;
    int c;
    printf("input two numbers:\n");
    scanf("%d %d", &a, &b);
    printf("%d += (%d+100)/2\n --> %d",a, b, a += (b+100)/2);



    system("pause");
    return 0;
}