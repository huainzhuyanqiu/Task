#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float y=100;
	float sum=100;
	int k;
	
	for(k=1;k<=10;k++)
	{
	    y=y/2;
		sum=sum+2*y;
	}
	
	printf("��ʮ�����ʱ������%f��\n��ʮ�η���%f��",sum,y);
	
	return 0;
}
