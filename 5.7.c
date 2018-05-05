#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double i,j,k;
	double s1,s2,s3;
	double sum;
	
	s1=0;
	s2=0;
	s3=0;
	
	for(i=1;i<=100;i++) s1=s1+i;

	for(j=1;j<=50;j++) s2=s2+j*j;
	
    for(k=1;k<=10;k++) s3=s3+1/k;
	
	sum=s1+s2+s3;
	printf("sum=%f\n",sum);
	
	return 0;
}
