#include <stdio.h>
#include <stdlib.h>
//#include <bits/stdc++.h>  //万能头
int main()
{
    int x;
    int digit;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &x);

    while( x>0 ){
        digit = x % 10;
        result = result * 10 + digit;
        x = x / 10;
    }
    printf("The reverse of the number is: %d\n", result);

    system("pause");
    return 0;

}
