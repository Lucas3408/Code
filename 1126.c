#include <stdio.h>
#include <stdlib.h>

int main (){
    int n, m, i;

    scanf("%d", &n);
    for ( m = 1, i =1; i<=n; i++){
        m = m*i;

    }
    printf("%d\n", m);

    system("pause");
    return 0;
}