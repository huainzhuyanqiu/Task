#include <stdio.h>
#include <stdlib.h>
#define A 1000
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	int y;
	
	printf("������һ��С��%d������x:",A);
	scanf("%d",&x);
	
	if(x>A)
	{printf("���������������Ҫ������������һ��С��%d������x",A);
	scanf("%d",&x); 
	}
	
	y=sqrt(x);
	
	printf("%d��ƽ���������������ǣ�%d\n",x,y);
	
	return 0;
}
