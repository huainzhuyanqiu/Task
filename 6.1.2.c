#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int i,j;
int num=0;
int a[101];
for(i=1;i<=100;++i)
{
a[i]=i;
}
for(i=2;i<=10;++i)
{
for(j=i+1;j<=100;++j)
{
if(a[j]%i==0)
a[j]=0;
}
}
printf("100以内素数有：");
for(i=2;i<=100;++i)
{
if(a[i]!=0)
{
printf("%5d",a[i]);

}
}
printf("\n");

	return 0;
}
