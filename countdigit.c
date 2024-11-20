#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("This is for test. ^_^\n");

    int x;
    int n=0;
    printf("Enter a number: ");

    scanf("%d", &x);

    if (x<0)
    {
        /* code */
        x=-x;
    }else{
        x=x;
    }
    

    n++;
    x/=10;
    
    
    while(x>0){
        n++;
        x/=10;
    }
    printf("%d\n", n);

    system("pause");
    return 0;
}