/*输入一个由小写字母构成的单词，输出最后一个字母.
输入格式为"%s"
输出最后一个字母，输出格式为"%c\n"*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    char a[100];
    scanf("%s",a);
    printf("%c\n", a[strlen(a)-1]);



    system("pause");
    return 0;
}
