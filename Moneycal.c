#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    int one, two, five;
    int exit = 0;
    printf("Enter the amount of money you have: ");
    scanf("%d", &x);
    for ( one =1; one < x; one++ )
    {
        for ( two = 1; two < x/2; two++ )
        {
            for ( five = 1; five < x/5; five++ )
            {
                if (one + two * 2 + five * 5 == x)
                {
                    printf("You change the money you have into: %d*$1 %d*$2 %d*$5\n", one, two, five);
                    exit =1;
                    break;
                }
            
            }
            if (exit == 1){
                break;
            }
        }
        if (exit == 1){
            break;
        }
    }

    system("pause");
    return 0;
}