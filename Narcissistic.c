//水仙花数 拆成n个n次幂
// 3位 4位 5位
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    for ( int n=3; n<5; n++ ){
        int i = 3;
        int a = pow( 10, n );
        while( i < a ){
            int t = i;
            int sum = 0;

            do{
                int d = t % 10;
                sum += pow(d, n);
                t /= 10;

            }while( t > 0 );
            
            if( sum == i ){

                printf("%d\n", i);
            }
            i++;
        }
    
    }

    system("pause");
    return 0;
}



/*方法二
int armstrong(int n){
    int sum = 0;
    int j, k = 0;
    j = n;
    while(j){
        k = j % 10;
        j = j / 10;
        sum = sum + (k*k*k);

    }
    if(sum == n){
        return 1;

    }else{
    return 0;
    }
}

int main(){
    int n;
    for( n = 100; n < 1000; n++){
        if(armstrong(n)){
            printf("%d\n", n);
        }
    }

    system("pause");
    return 0;
}*/