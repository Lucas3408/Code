#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//#define PI 3.1415926

int main(){
  int a,b,c;
  while(1){
    printf("写入三个整系数：");
    scanf("%d %d %d", &a, &b, &c);
    int delta = b*b-4*a*c;
    if(delta<0){
      
      printf("无实数解\n");

    }else if(delta==0){

      printf("有一个实数解，为%lf\n", -b/(2.0*a));
    }else if (delta > 0){
      printf("有两个实数解，为%lf和%lf\n", (-b+sqrt(delta))/(2.0*a), (-b-sqrt(delta))/(2.0*a));
    }

  }
  //printf("The area of the circle is %lf\n", r*r*PI);
  
  
  //printf("Hello World\n");

  system("pause");
  return 0;
}