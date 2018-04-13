#include <stdio.h>
#include <stdlib.h>
#define pi 3.1415926
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int r;
	float area;
	scanf("%d",&r);
	area=pi*r*r;
	printf("pi=%f r=%d\n",pi,r);
	printf("area=%f\n",area);
	return 0;
}
