#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void stob(char s[]);
int main(int argc, char *argv[]) {

    char str[10];
    gets(str);                           
    stob(str);                          
    puts(str);                           
    return 0;
}

void stob(char s[])
{
    int i, j;
    char temp;
    for (i=0; i<10; i++)
        for (j=i+1; j<10; j++)
            if (s[i]>s[j]){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
}

