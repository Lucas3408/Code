#include <stdio.h>
#include <stdlib.h>



int main(){
  int n, m;
  int l;
  scanf("%d%d", &n, &m);
  l = n - (n/m)*m;
  printf("%d\n", l);
  system("pause");
  return 0;

}