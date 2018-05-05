#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float a;     
    float x0, x1;
    
    printf("请输入一个数:");
    scanf("%f", &a);
    
    x0 = a / 2;  
    x1 = (x0 + a / x0) / 2;
    
    while (fabs(x1 - x0) >= 1e-5)
    {
        x0 = x1;
        x1 = (x0 + a / x0) / 2;
    }
    
    printf("平方根是：%8.5f\n",x1);
    
	return 0;
}
