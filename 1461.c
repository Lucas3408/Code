/*小明买水果，买了8.5斤，店家给他85折，小明回家后忘了水果原来的价格了，你能不能根据花费，计算原来的价格。*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float pay, price, amt = 0;
    float discount = 0.85;
    scanf("%f", &pay);
    
    amt = pay / discount;
    price = amt / 8.5;
    printf("%.1f\n", price); 





    system("pause");
    return 0;
}