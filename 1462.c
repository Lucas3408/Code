/*根据三角形三边的边长计算三角形的面积。
输入三角形三边的边长，输入格式"%f%f%f"
输出三角形的面积，输出格式"%.2f\n"，若三角形不存在，输出"TRIANGLE NOT EXIST!\n"*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  float a,b,c = 1.0;
  
  
  scanf("%f%f%f", &a,&b,&c);
  if (a+b>c&&a+c>b&&b+c>a) {

    float p = (a+b+c)/2.0;
    float area = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.2f\n", area);
    
  }
  else{
    printf("TRIANGLE NOT EXIST!\n");
  }
  
  system("pause");
  return 0;
}