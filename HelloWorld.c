#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.1415926

int main(){
  int a,b,c;
  int i = 1;
  int j = 1;
  double d;

  /* while(1){

  }
  printf("The area of the circle is %lf\n", r*r*PI);
  printf("Hello World\n");  */

  /*
  while( i<=10 ){
    printf("*");
    i++;
  }

  printf("\n");*/



  /*for( i=1; i<=100; i++ ){
    if( i%5 == 3 ){
      printf("%d\n", i);
    }
  }


printf("\n");*/

  /*
  for ( i=0; i<=360; i++){
    d = sin(i*PI/180);
    int e = i*PI/180;
    printf("%d %f\n", i, d);
  }
  */

  /*do{
    printf("*");
    i++;
  }while(i<=10);
*/

  /*do{
    if (j%5 == 3){
      printf("%d\n", j);
    }
    j++;
  }while(j<=100);

  printf("\n\n");

  do{
    d = sin(i*PI/180);
    printf("%d    %f\n", i, d);
    i++;
  }while(i<=360);*/

  /*for ( i = 1; i <= 9; i++ ){
    for ( j = 1; j <= i; j++){
      printf("%d * %d = %d\t", j, i, i*j);  
    }
    
      printf("\n");
    
  }*/

 


  system("pause");
  return 0;
}