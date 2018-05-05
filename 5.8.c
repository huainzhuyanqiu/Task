#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b,c,s;

    for(a=1;a<10;a++)

    {

        for(b=0;b<10;b++)

        {

            for(c=0;c<10;c++)

            {

                s=100*a+10*b+c;

                if(s==(a*a*a+b*b*b+c*c*c))

                printf("%d\n",s);

            }

        }

    }

   
	return 0;
}
