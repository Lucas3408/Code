//输入两个正整数n和m，输出n+1和m+1的最大公约数，输出格式为"%d\n"。  3种算法
/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int gcd(int a, int b){
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d\n", gcd(n + 1, m + 1));

    
    

    system("pause");
    return 0;
}*/

/*#include<stdio.h>

int main(){
  int n,m,i,j;
  scanf("%d%d", &n,&m);
  if (n>m) {
    i=m+1;
  }
  else{
    i=n+1;  //i为较小的
  }
  for (j = i; j>=1; j--) {
    if ((n+1)%j==0&&(m+1)%j==0) {   //judge
      printf("%d\n", j);
      break;
    }
  }
  return 0;
}*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd(int a, int b){
    if(a == b) return a;
    else if(a > b){
        return gcd(a - b, b);
    }else{
        return gcd(a, b - a);
    }

}
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d\n", gcd(n, m));
    
    system("pause");
    return 0;
}