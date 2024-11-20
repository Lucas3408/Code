#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int max(int a,int b){
	return a>b?a:b;
}

int min(int a,int b){
	return a<b?a:b;
}

int main(){
	int a,b,z;
	scanf("%d %d",&a,&b);
    a = max(a, b);
    b = min(a, b);
	z = (a+1)%(b+1);


    if(a == b){
		printf("%d\n",a);
    }
    
    else if(z == 0){
	    printf("%d\n",b+1); 
    }
    
    else{
		while(1){
			z = (a+1)%(b+1);   //大的数是a,小的数是b
			a = b+1;   
			b = z;
			z = a % b;

			if(z==0)
			{
                printf("%d\n",b);
				break;
                
                
			}
            //break;
		}
	}



	system("pause");
	return 0;
}


