#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float i=1;  
    float j=2;
	float x;  
    float sum=0;  
    int k;
	
    for(k=1;k<=20;k++)
	{
		sum=sum+j/i;  
        x=i;  
        i=j;  
        j=x+j;
	  }  
   
    printf("前二十项和为%f\n",sum);  

	return 0;
}
