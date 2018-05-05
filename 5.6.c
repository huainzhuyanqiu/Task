#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	double term;
	double sum;
	
	term=1;
	sum=0;
	
	for(i=1;i<=20;i++)
	{
		term=term*i;
		sum=sum+term;
	}
	
	printf("1!+2!+3!+......+20!=%f",sum);
	 
	return 0;
}
