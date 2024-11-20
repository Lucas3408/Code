/*A和B参加一次锦标赛赛事。参数队伍共有N支。
队伍的编号从1开始，一直到N。
锦标赛的过程如下：
第一轮：
若N为偶数，则队伍1和队伍2比赛，获胜者晋级下一轮；队伍3和队伍4比赛，获胜者晋级下一轮；依次类推；
队伍N-1和队伍N比赛，获胜者晋级下一轮；
若N为奇数，则上述需修改为队伍N-2和队伍N-1比赛，获胜者晋级下一轮；而队伍N则直接晋级下一轮。
下一轮的比赛规则和上一轮类似。一直这样进行下去，直到最终只剩下一支队伍，其为获胜者。
队伍A、B都非常强大，一路均无战败，直到他们相遇。
试问：给定A和B的队伍编号，他们会在哪一轮相遇？注意队伍编号从1开始。
注：
1. N will be between 2 and 100000, inclusive.
2. A和B的值满足1<= A, B <= N；
3. A和B的值不同。
例如：
N=16, A=1, B=2时，返回1.
解释：A和B在第1轮相遇；锦标赛共进行了4轮。
又例如：
A=16, A=8, B=9时，返回4.
解释：虽然A和B相邻，但他们只会在决赛相遇，即第4轮。
又例如：
N=65536, A=1000, B=35000时，返回16.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int tool(int amount, int a, int b, int sum){  //amount left on; a ; b ; sum rounds
    if( a + 1 == b && b % 2==0){
        printf("%d", sum);
        return 0;
    }
    a = (a+1)/2;
    b = (b+1)/2;
    tool((amount+1)/2, a, b, sum+1);

}

int main(){
    int a, b, n = 0;

    
    

    scanf("%d%d%d", &n, &a, &b);
    if(a>b){
        tool(n, b, a, 1);
    }else{
        tool(n, a, b, 1);
    }
    

    system("pause");
    return 0;
}