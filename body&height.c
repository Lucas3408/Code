#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    printf("please input height(ft in):");
    
    double foot;
    double inch;

    scanf("%lf %lf", &foot, &inch);

    printf("your height is %f(metre)\n", ((foot+inch/12.0) * 0.3048));

    system("pause");
    return 0;

}