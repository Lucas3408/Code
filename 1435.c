/*妈妈要小明计算一下工资的个人所得税，小明找到了你，你根据以下个人所得税的信息帮小明完成这个任务。
个税起征点确定为每月5000元，全月应纳税所得额=(应发工资-四金)-5000，实发工资=应发工资-四金-缴税。
个税计算方法：
1.应缴纳个人所得税税额=税前工资收入金额-五险一金(个人缴纳部分)-费用减除额
2.应纳税额=应纳所得额×税率-速算扣除数
【例】
张三在2018年10月份税前工资12000元，需要缴纳各项社会保险金1100元，

适用5000元新的费用标准和新的税率表：

全月应纳税所得额                      税率            速算扣除数
不超过 3000 元的                      3%                 0
超过 3000 元至 12000 元的部分         10%                210
超过 12000元至25000元的部分           20%               1410
超过 25000 元至 35000 元的部分        25%               2660
超过 35000 元至 55000 元的部分        30%               4410
超过 55000 元至 80000 元的部分        35%               7160
超过 80000 元的部分                   45%              15160

应纳所得额=税前工资收入金额-五险一金(个人缴纳部分)-起征点(5000元)=12000-1100-5000=5900元。
找税率及速算扣除数：参照下面的工资税率表，超过3000元至12000元的部分，则适用税率10%，速算扣除数为210。
应缴纳个人所得税税额=应纳所得额×税率-速算扣除数=5900×10%-210=380元。

输入税前工资、所缴纳的社会保险金(个人缴纳部分)，输入格式"%f%f"
输出实发工资，输出格式"%.2f\n"

你也可以把应纳所得额5900元不超过3000元的部分按3%计算，
再把超过3000元至12000元的部分按10%计算，这和你用5900元按照10%计算再减去速算扣除数是一致的。
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(){
    float salary, insurance, taxable, real;
    scanf("%f%f", &salary, &insurance);
    taxable = salary - insurance - 5000;
    if(taxable <= 3000){
        real = salary - insurance - taxable * 0.03;
        printf("%.2f", real);
    }else if (taxable > 3000 && taxable <= 12000){
        real = salary - insurance - taxable * 0.1 + 210;
        printf("%.2f\n", real);
    }else if (taxable > 12000 && taxable <= 25000){
        real = salary - insurance - taxable * 0.2 + 1410;
        printf("%.2f\n", real);
    }else if (taxable > 25000 && taxable <= 35000){
        real = salary - insurance - taxable * 0.25 + 2660;
        printf("%.2f\n", real);
    }else if (taxable > 35000 && taxable <= 55000){
        real = salary - insurance - taxable * 0.3 + 4410;
        printf("%.2f\n", real);
    }else if (taxable > 55000 && taxable <= 80000){
        real = salary - insurance - taxable * 0.35 + 7160;
        printf("%.2f\n", real);
    }else{
        real = salary - insurance - taxable * 0.45 + 15160;
        printf("%.2f\n", real);
    }
    
    system("pause");
    return 0;
}