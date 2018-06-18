#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define N 100  
  
int length(char *s)  
{  
    int i=0;  
    while(*s!='\0')  
    {  
        i++;  
        s++;  
    }  
    return i;  
}  
  
int main()  
{  
      
    int len;  
    char s[N];  
    printf("ÇëÊäÈë×Ö·û´®:");  
    scanf("%s",s);  
    len=length(s);  
    printf("×Ö·û´®³¤¶È:%d\n",len);  
    return 0;  
}
