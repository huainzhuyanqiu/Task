#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[5]={8,6,5,4,1},i,n=5,temp;

    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;          
    }                 

   for(i=0;i<n;i++)
   {
      printf("%5d",a[i]);        

   }               
	return 0;
}
