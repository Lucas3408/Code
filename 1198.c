#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define pi 3.14159265
int main(){
  double x,y,c,d,f;
  scanf("%lf%lf", &x,&y);
  c=x/180;
  c=sin(c*pi);
  d=y/180;
  d=cos(d*pi);
  f=c+d;
  printf("%f\n", f);

  system("pause");
  return 0;
}