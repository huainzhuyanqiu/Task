#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double x1,x0,f,f1;
	
    x1=1.5;
    
	do
    {
	x0=x1;
    f=((2*x0-4)*x0+3)*x0-6;
    f1=(6*x0-8)*x0+3;
    x1=x0-f/f1;
    }while(fabs(x1-x0)>=1e-5);
	
    printf("��1.5�����ĸ��ǣ�%f\n",x1);
	
	return 0;
}