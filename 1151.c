#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int days[] = {31,30,31,30,31,31,30,31,30,31};
    int i = 0;
    scanf("%d",&i);
    if(i == 2){
        printf("28/29days\n");
    }else if( i == 1 ){
        printf("31days\n");
    }else{
        printf("%ddays\n",days[i - 3]);
    }




    system("pause");
    return 0;
}