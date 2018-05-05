#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int el;
	int sp;
	int nu;
	int ot;
	
	el=0;
	sp=0;
	nu=0;
	ot=0;
	
	printf("请输入一行字符：");
	
	while((c=getchar())!='\n')
	{
		if(c>='a'&&c<='z'||c>='A'&&c<='Z')
		{
			el++;
		}
		else if(c==' ')
		{
			sp++;
		}
		else if(c>='0'&&c<='9')
		{
			nu++;
		}
		else
		{
			ot++;
		}
	}
	
	printf("英文字母个数:%d\n空格个数:%d\n数字个数:%d\n其他字符个数:%d\n",el,sp,nu,ot);
	 
	return 0;
}
