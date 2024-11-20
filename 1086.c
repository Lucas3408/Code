/*PER有一次在走廊上看到一串很长的密码，PER很调皮，他故意将一个字母改成了他名字中的一个，他突发奇想，想要把所有的字母变成他的名字的序列，为了不让发现他每天都会将密码中的一个字母改成他名字中的一个字母，
PER想要知道多少天以后密码会全部变成他的名字的“PERPERPERPERPER…”的排列。
一串密码，都是大写字母，字母的的长度L是3的倍数,且L不超过300。
输出PER把密码变成他的名字序列的总共天数。*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    char code[400];
    char name[] = "PER";
    scanf("%s", &code);
    
    int l = strlen(code);
    //printf("%d", l);
    int count = 0;
    for(int i = 0; i < l; i++){
        if(code[i] != name[i%3]){
            count++;
        }
    }
    printf("%d", count);

    system("pause");
    return 0;
}