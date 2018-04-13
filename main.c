#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{	int a,b,c,d;
	int max;
	
	printf("请输入四个整数：");
	scanf("%d,%d,%d,%d",&a,&d,&c,&d);
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
	
	printf("排序结果如下:\n");
	printf("%d,%d,%d,%d\n",a,b,c,d);
	
  return 0;
}
