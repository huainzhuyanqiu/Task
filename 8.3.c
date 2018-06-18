#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void input(int *s, int n);   
void sort(int *s, int n);    
void print(int *s, int n);   
int main()
{
    int n[10], *p=n;
    input(p, 10);            
    sort(p, 10);             
    print(p, 10);            
    return 0;
}

void input(int *s, int n)
{
    int *m;
    for (m=s, printf("Please enter 10 numbers: "); m<s+n; scanf("%d", m++));
}

void sort(int *s, int n)
{
    int *i, *j, *min, *max, t;
    for (i=s, min=i; i<s+n; i++)
        for (j=i+1; j<s+n; *min>*j ? min=j++ : j++);
    t=*min, *min=*s, *s=t;
    for (i=s+1, max=i; i<s+n; i++)
        for (j=i+1; j<s+n; *max<*j ? max=j++ : j++);
    t=*max, *max=*(s+n-1), *(s+n-1)=t;
}

void print(int *s, int n)
{
    int *i;
    for (i=s, printf("Sort by: "); i<s+n; printf("%d ", *i++));
    printf("\n");
}
