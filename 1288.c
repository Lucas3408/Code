#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
  double p, i = 0;
  int n = 0;
  double sum = 0;
  
  scanf("%lf%lf%d", &p, &i, &n);
  sum = p*pow(1 + i, n);
  printf("%.4lf\n", sum);


  system("pause");
  return 0;
  
}