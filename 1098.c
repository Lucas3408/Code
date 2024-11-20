/*平面上有两个矩形，它们的边平行于直角坐标系的X轴或Y轴。
对于每个矩形，我们给出它的一对相对顶点的坐标，请你编程算出两个矩形的交的面积。
输入仅包含两行，每行描述一个矩形。
在每行中，给出矩形的一对相对顶点的坐标，每个点的坐标都用两个绝对值不超过10^7的实数表示。
输出仅包含一个实数，为交的面积，保留到小数后两位。*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float x1,y1,x2,y2;
    float x3,y3,x4,y4;
    float area;
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    scanf("%f%f%f%f",&x3,&y3,&x4,&y4);

    area = abs((x1-x3)*(y2-y4));
    printf("%.2f",area);



    system("pause");
    return 0;
}