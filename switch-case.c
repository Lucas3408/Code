#include <stdio.h>
#include <stdlib.h>
int main()
{
    

    int type;

    scanf("%d", &type);

    switch (type)
    {
    case 1:
        printf("hello world\n");
        break;
    case 2:
        printf("goodbye world\n");
        break;
    default:
        printf("oh man! what can I say?\n");
        break;
    }

    system("pause");
    return 0;
}