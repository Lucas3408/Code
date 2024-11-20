/*输入若干个整数，以-1结束，输出任意两个不同位置数的最小差距和最大差距。*/

/*方法一：暴力法
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a[1000], n = 0, i, j, min_gap = 1e5, max_gap = -1;
    scanf("%d", &a[n]);


    while(a[n]!=-1){
        n++;
        scanf("%d", &a[n]);
    }


    for(i = 0; i < n; i ++){
            for(j = i + 1; j < n; j++){
                if( abs (a[i]-a[j]) < min_gap){
                    min_gap = abs(a[i]-a[j]);
                }
                if( abs (a[i]-a[j]) > max_gap){
                    max_gap = abs(a[i]-a[j]);
                }
            }
        }

    printf("min diff=%d, max diff=%d", min_gap, max_gap);


    system("pause");
    return 0;
    

}*/


/*方法二：排序法*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[51];
    int i, j, c,temp,a,b,count=0;  //intitialize

    for (i = 0; i <= 49; i++)  //input
    {
        scanf("%d", &arr[i]);
        count++;
        if (arr[i] == -1)
        break;
    }

    for (i = 0;i<count-1; i++)
    {
        for (j = i + 1; j<count; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];    //排序
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
       
    }

    for (int k = 0; k < count; k++)
    {
        printf("%d ", arr[k]);
        
    }
    printf("\n%d", count);  

    //count 为数组的数字个数

    int min = arr[count - 1];
    for (i = 1; i<count-1; i++) {
        c = arr[i + 1] - arr[i];
        if (min > c){
            min = c;
        }  //最小差距
    }
   
    b = arr[count-1] - arr[1];  //最大差距
    printf("min diff = %d, max diff = %d", min, b);


    system("pause");
    return 0;
}