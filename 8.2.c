#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char *s[3], st[3][10], **p, *t;
    int i, j;
    for (i=0, printf("Please enter 3 strings: "); i<3; s[i]=st[i], scanf("%s", s[i++]));
    for (i=0; i<3; i++)
    for (j=i+1; j<3; strcmp(s[i], s[j])>0 ? t=s[i], s[i]=s[j], s[j]=t, j++ : j++);
    for (p=s; p<s+3; printf("%s ", *p++));
    printf("\n");
	return 0;
}
