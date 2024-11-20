/*输出100以内的质数，每行5个。*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isprime(int n){
    if(n <= 1) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if( n % i == 0 ){
            return 0;
        }

    }
    return 1;
}

int main(){

    int prime[120];
    int i = 0; 
    int j = 0;
    for( j = 2; j <= 100; j++){
        if( isprime(j) == 1 ){
            //printf("%d\n", j);
            prime[i] = j;
            i++;
        }
    }

    int p = 0;
    for(p; p < i; p++){
        if( p % 5 == 0 && p != 0){
            printf("\n");
        }
        printf("%3d", prime[p]);
    }
    
    system("pause");
    return 0;
}

/*#include<stdio.h>
#include<math.h>
int f(int n)     //判断素数  超强写法
{
    int i;
    for(i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return f(n+1);
        }
    }
    return n;
}
int main()
{
    int i,j,m=2;
    while(m < 98)
    {
        for(j=0;j<5 && m<100;j++)
        {
            printf("%3d",f(m));
           m=f(m)+1;
        }
        printf("\n");
    }

    system("pause");
    return 0;
}*/