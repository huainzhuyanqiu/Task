#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, c, *i, *j, *k;
	
    i=&a, j=&b, k=&c;
    printf("Please enter a, b, c: ");
    scanf("%d %d %d", i, j, k);
    
    if (*i<*j)
	{
        if (*j<*k)
		 printf("%d %d %d\n", *i, *j, *k);
        else{
            if (*i<*k) 
			printf("%d %d %d\n", *i, *k, *j);
            else
			 printf("%d %d %d\n", *k, *i, *j);
            }
    }
    else{
        if (*j>*k)
		 printf("%d %d %d\n", *k, *j, *i);
        else{
            if (*i<*k) 
			printf("%d %d %d\n", *j, *i, *k);
            else 
			printf("%d %d %d\n", *j, *k, *i);
            }
        }
	return 0;
}
