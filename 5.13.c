#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float a;     
    float x0, x1;
    
    printf("������һ����:");
    scanf("%f", &a);
    
    x0 = a / 2;  
    x1 = (x0 + a / x0) / 2;
    
    while (fabs(x1 - x0) >= 1e-5)
    {
        x0 = x1;
        x1 = (x0 + a / x0) / 2;
    }
    
    printf("ƽ�����ǣ�%8.5f\n",x1);
    
	return 0;
}
