#include <stdio.h>
#include <stdlib.h>
int main(){
  double a;
  double b;
  double sum = 0;
  while(1){
    scanf("%lf", &a);
    if ( a == 0 ) {
      break;
    }
    
    b = 1/a;
    sum = sum + b;
  }

  printf("%.2lf\n", sum);
  system("pause");
  return 0;
}
