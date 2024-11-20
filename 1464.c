/*1464 有n个考生参加在线考试，每个人从题库随机抽题，题库中有m道题，请问有两个人抽中同一题目的概率有多大？*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double fact(int b);

int main(){
    double m = 0;
    double n = 0;
    scanf("%lf%lf", &m, &n);
    
    
    double p = 1.0;
    double q = fact(n)/2*fact(n-2);   //nC2
    p = q / m;
    printf("%.2lf", p);

    system("pause");
    return 0;
}


double fact(int b){
	int a = 0;
	double fact = 1;
	//分析：以b等于3为例
	//a=1>>fact=1*1>>a=2>>fact=1*2>>a=3>>fact=2*3
	//a=4>3跳出for循环
	for (a = 1; a <= b; a++)
	{
		fact *= a;
	}
	return fact;
}
