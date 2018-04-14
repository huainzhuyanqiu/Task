#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	int ge,shi,bai,qian,wan,weishu;  
	
    printf("请输入一个整数x(0-99999):");
    scanf("%d",&x);
    
    if (x>9999)
        weishu=5;
    else if (x>999)
             weishu=4;
    else if (x>99)
             weishu=3;
    else if (x>9)
             weishu=2;
    else weishu=1;
    
    printf("%d位数\n",weishu);
    printf("每位数字为:");
    
    wan=x/10000;
    qian=(int)(x-wan*10000)/1000;
    bai=(int)(x-wan*10000-qian*1000)/100;
    shi=(int)(x-wan*10000-qian*1000-bai*100)/10;
    ge=(int)(x-wan*10000-qian*1000-bai*100-shi*10);
    
    switch(weishu){
	   case 5:printf("%d,%d,%d,%d,%d",wan,qian,bai,shi,ge);
       printf("\n反序数字为:");
       printf("%d%d%d%d%d\n",ge,shi,bai,qian,wan);
       break;
       case 4:printf("%d,%d,%d,%d",qian,bai,shi,ge);
       printf("\n反序数字为:");
       printf("%d%d%d%d\n",ge,shi,bai,qian);
       break;
       case 3:printf("%d,%d,%d",bai,shi,ge);
       printf("\n反序数字为:");
       printf("%d%d%d\n",ge,shi,bai);
       break;
       case 2:printf("%d,%d",shi,ge);
       printf("\n反序数字为:");
       printf("%d%d\n",ge,shi);
       break;
       case 1:printf("%d",ge);
       printf("\n反序数字为:");
       printf("%d\n",ge);
       break;
    } 
	return 0;
}
