#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int x,y;
	int m,n;
	int temp;
	
	printf("����������������:");
	scanf("%d,%d",&m,&n);
	
    x=m;
    y=n;
    
    while(n!=0)
    {
    	temp=m%n;
    	m=n;
    	n=temp;
	}
	
	printf("���Լ����:%d\n",m);
	printf("��С��������:%d\n",x*y/m);
	 
	return 0;
}
