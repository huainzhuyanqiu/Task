#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int a;
	int n;
	int i;
	int j;
    int sum;
	int term;
	 
    sum=0;
	term=0;
	
    printf("请输入数字a:");
    scanf("%d",&a);

    printf("请输入位数n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        term=term*10+a;
        sum=sum+term;
    }

    printf("sum=%d",sum);
    
	return 0;
}
