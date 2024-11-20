#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;  
    int count =0;

    for (x=2; count<10000; x++){

        int i;  
        int var = 1;
        
        for ( i = 2; i < x; i++ ){   
            if ( x % i == 0 ){
            var = 0;
            break;
            }
    
        }

        if ( var == 1 ){
            count++;
            printf("%d\t" , x);
            if( count%10 == 0 ){
                printf("\n");
            }
        }

    }
    
    system("pause");
    return 0;
}