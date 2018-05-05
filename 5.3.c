#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int x,y;
	int m,n;
	int temp;
	
	printf("请输入两个正整数:");
	scanf("%d,%d",&m,&n);
	
    x=m;
    y=n;
    
    while(n!=0)
    {
    	temp=m%n;
    	m=n;
    	n=temp;
	}
	
	printf("最大公约数是:%d\n",m);
	printf("最小公倍数是:%d\n",x*y/m);
	 
	return 0;
}
