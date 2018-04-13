#include <stdio.h>
#include <stdlib.h>
#define A 1000
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	int y;
	
	printf("请输入一个小于%d的整数x:",A);
	scanf("%d",&x);
	
	if(x>A)
	{printf("输入的整数不符合要求，请重新输入一个小于%d的整数x",A);
	scanf("%d",&x); 
	}
	
	y=sqrt(x);
	
	printf("%d的平方根的整数部分是：%d\n",x,y);
	
	return 0;
}
