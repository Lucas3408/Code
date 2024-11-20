/*
输入一个小写字母的单词，输出其凯撒密码加密的密文。
凯撒密码是把一个字母加密成字母表中后面的第3个字母，如果超出字母表则折回。
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char word[1000];
    scanf("%s", word);
    for(int i = 0; word[i] != '\0'; i++){
        if(word[i] >= 'a' && word[i] <= 'z'){
            word[i] = (word[i] - 'a' + 3) % 26 + 'a';
        }

    }
    printf("%s\n", word);

    system("pause");

}