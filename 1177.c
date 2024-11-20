#include <stdio.h>
#include <stdlib.h>

int main()
{
//key 1
    printf("*****\n");
    printf("*   *\n");
    printf("*   *\n");
    printf("*   *\n");
    printf("*****\n");

// key 2
    int i,j;

    for (i = 0; i < 5; i++) {
        printf("*" );
    }
    printf("\n" );
    for (i = 0; i < 3; i++) {
        printf("*" );
            for (j = 0; j < 3; j++) {
                printf(" " );
                /* code */
            }
        printf("*\n" );
        /* code */
    }
    for (i = 0; i < 5; i++) {
        printf("*" );
    }
    printf("\n" );



    system("pause");
    return 0;
}