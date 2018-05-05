#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
    int j,k,sum = 0;
    
    for(k=2;k<=1000;k++)
    {
        sum=0;
        
        for(j=1;j<k;j++)
           if(k%j==0)
              sum=sum+j;
           if(sum==k)
              printf("%d\n",k);
    }

	return 0;
}
