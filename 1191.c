/*输入两个正整数，输出它们有几个对应位不同
输入两个正整数（注意个位要对齐）
输出它们有几个对应位不同，输出格式为"%d\n"。*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int min(int a, int b){
    if (a < b) return a;
    else return b;
}

/*
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int i,j;
    int count = 0;
    int e = floor(log10(a));
    int f = floor(log10(b));

    i = pow(10, e);
    j = pow(10, f);


    int x[e];
    int y[f];

    for (int m = 0; m < e; m++){
        x[m] = a % 10;
        a /= 10;
        printf("%d\n", x[m]);
    }
    for (int n = 0; n < f; n++){
        y[n] = b % 10;
        b /= 10;
        printf("%d\n", y[n]);
    }

    if (e > f || e < f){
        count = count + abs(e - f);
        int p = min(e, f);
        for (int k = 0; k < p; k++){
            if (x[k] != y[k]) count++;
        }
    }else{
        for (int k = 0; k < i; k++){
            if (x[k] != y[k]) count++;
        }

    }

    printf("\n\n%d\n", count);
    
    system("pause");
    return 0;
}*/

/*int main(){
    char a[1000], b[1000];
    int count = 0;
    scanf("%s%s", a, b);
    if(strlen(a) != strlen(b)){
        count = count + abs(strlen(a) - strlen(b));
        int p = min(strlen(a), strlen(b));
        for(int i = strlen(a); i >= 0; i--){
            if(a[i] != b[i]) count++;
        }
    }else{
        for(int i = strlen(a); i >= 0; i--){
            if(a[i] != b[i]) count++;
        }
    }
    printf("%d\n", count);

    system("pause");
}*/


int main(){
  int a,b,c,d,e=0;
  scanf("%d\n%d", &a,&d);
  while(a>0||d>0){
    b=a%10;
    a=a/10;
    c=d%10;
    d=d/10;
    if (c!=b) {
      e+=1;
    }
  }
  printf("%d\n", e);
  system("pause");
  return 0;
}



/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char a[100],b[100];
    scanf("%s%s",a,b);
    int a1=strlen(a),b1=strlen(b);
    int i = a1 < b1 ? a1 : b1,k=0,res=0;  //min
    while(k<i){
        k++;
        if(a[a1-k]==b[b1-k]){
            res++;
        }
    }
    int j=a1<b1?b1:a1;  // max
    printf("%d",j-res);
    return 0;
}*/
