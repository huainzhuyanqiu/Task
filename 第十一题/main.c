#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d;
	int max;
	
	printf("请输入四个整数：");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	printf("a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);
	
	if(a>b)
	{
	 max=a;
	 a=b;
	 b=max;
	}
	if(a>c)
	{
	 max=a;
	 a=c;
	 c=max;
	}
	if(a>d)
	{
	 max=a;
	 a=d;
	 d=max;
	}
	if(b>c)
	{
	 max=b;
	 b=c;
	 c=max;
	}
	if(b>d)
	{
	 max=b;
	 b=d;
	 d=max;
	}
	if(c>d)
	{
	 max=c;
	 c=d;
	 d=max;
	}

	printf("排序结果如下:\n");
	printf("%d,%d,%d,%d\n",a,b,c,d);
	
	return 0;
}
