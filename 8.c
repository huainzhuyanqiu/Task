#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	int c;
	
	printf("������ɼ�x:");
	scanf("%d",&x);
	c=x/10;
	
	switch(c) 
	{
		case 9:printf("�ɼ��ȼ���A\n");break;
		case 8:printf("�ɼ��ȼ���B\n");break;
		case 7:printf("�ɼ��ȼ���C\n");break;
		case 6:printf("�ɼ��ȼ���D\n");break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:printf("�ɼ��ȼ���E\n");break;	
	}
	
	return 0;
}
