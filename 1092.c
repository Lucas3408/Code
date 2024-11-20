/*给定当前的时间，请用英文的读法将它读出来。
时间用时h和分m表示，在英文的读法中，读一个时间的方法是：
如果m为0，则将时读出来，然后加上“o'clock”，如3:00读作“three o'clock”。
如果m不为0，则将时读出来，然后将分读出来，如5:30读作“five thirty”。

时和分的读法使用的是英文数字的读法，其中0~20读作：
0:zero, 1: one, 2:two, 3:three, 4:four, 5:five, 6:six, 7:seven, 8:eight, 9:nine, 10:ten, 
11:eleven, 12:twelve, 13:thirteen, 14:fourteen, 15:fifteen, 
16:sixteen, 17:seventeen, 18:eighteen, 19:nineteen, 20:twenty。
30读作thirty，40读作forty，50读作fifty。

对于大于20小于60的数字，首先读整十的数，然后再加上个位数。如31首先读30再加1的读法，读作“thirty one”。
按上面的规则21:54读作“twenty one fifty four”，9:07读作“nine seven”，0:15读作“zero fifteen”。
输入包含两个非负整数h和m，表示时间的时和分。非零的数字前没有前导0。h小于24，m小于60。
输出时间时刻的英文。
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void read_hour(int h){
    switch(h){

        case 0: printf("zero "); break;
        case 1: printf("one "); break;
        case 2: printf("two "); break;
        case 3: printf("three "); break;
        case 4: printf("four "); break;
        case 5: printf("five "); break;
        case 6: printf("six "); break;
        case 7: printf("seven "); break;
        case 8: printf("eight "); break;
        case 9: printf("nine "); break;
        case 10: printf("ten "); break;
        case 11: printf("eleven "); break;
        case 12: printf("twelve "); break;
        case 13: printf("thirteen "); break;
        case 14: printf("fourteen "); break;
        case 15: printf("fifteen "); break;
        case 16: printf("sixteen "); break;
        case 17: printf("seventeen "); break;
        case 18: printf("eighteen "); break;
        case 19: printf("nineteen "); break;
        case 20: printf("twenty "); break;
        case 21: printf("twenty one "); break;
        case 22: printf("twenty two "); break;
        case 23: printf("twenty three "); break;
    }

}

void read_minute(int m){
    if( m == 0 ){
        printf("o'clock");
    }else if(m < 20){
        switch(m){

            case 1: printf("one"); break;
            case 2: printf("two"); break;
            case 3: printf("three"); break;
            case 4: printf("four"); break;
            case 5: printf("five"); break;
            case 6: printf("six"); break;
            case 7: printf("seven"); break;
            case 8: printf("eight"); break;
            case 9: printf("nine"); break;
            case 10: printf("ten"); break;
            case 11: printf("eleven"); break;
            case 12: printf("twelve"); break;
            case 13: printf("thirteen"); break;
            case 14: printf("fourteen"); break;
            case 15: printf("fifteen"); break;
            case 16: printf("sixteen"); break;
            case 17: printf("seventeen"); break;
            case 18: printf("eighteen"); break;
            case 19: printf("nineteen"); break;
        }
    }else{
        switch(m/10){
            case 2: printf("twenty"); break;
            case 3: printf("thirty"); break;
            case 4: printf("forty"); break;
            case 5: printf("fifty"); break;
        }
        printf(" ");
        read_minute(m % 10);
    }
    
}


int main(){
    int h, m;
    scanf("%d %d", &h, &m);
    read_hour(h);
    read_minute(m);

    system("pause");
    return 0;
}