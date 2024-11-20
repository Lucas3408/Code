#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1;
    int count = 0;
    printf("This program sums a series of integers.\n" "Enter integers (0 to terminate):");
    
    while(a != 0){
        scanf("%d",&a);
        count += a;
        
    }
    printf("The sum is %d\n", count);

    system("pause");
    return 0;
}