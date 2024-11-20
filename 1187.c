/*用科学计数法依次输出12345.6789、-12.34，域宽为20，小数点后保留2位。

分两行输出，先输出12345.6789在输出-12.34。 */

#include <stdio.h>
#include <stdlib.h>


int main(){


    printf("%20.2e\n", 12345.6789);  //Correct Answer
    printf("%20.2e\n", -12.34);

    printf("%20.2E\n", 12345.6789);  //Wrong Answer
    printf("%20.2E\n", -12.34);

    system("pause");
    return 0;
}