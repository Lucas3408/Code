#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    int hour1, minute1;
    int hour2, minute2;
    printf("please input the time(hr&min): \n");

    scanf("%d %d", &hour1, &minute1);
    scanf("%d %d", &hour2, &minute2);

    int t1 = hour1*60 + minute1;
    int t2 = hour2*60 + minute2;

    int t = t2-t1;
    printf("the gap is %d hr %d min.\n", t/60, t%60);

    system("pause");  
    return 0;
}