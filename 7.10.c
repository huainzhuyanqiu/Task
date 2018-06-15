#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 int alphabetic(char);
 int longest(char []);
 int i;
 char line[100];
 printf("input one line:\n");
 gets(line);
 printf("The longest word is :");
 for (i=longest(line);alphabetic(line[i]);i++)
   printf("%c",line[i]);
 printf("\n");
 return 0;
}
int alphabetic(char c)
{if ((c>='a' && c<='z')||(c>='A'&&c<='z'))
  return(1);
 else
  return(0);
}
int longest(char string[])
{int len=0,i,length=0,flag=1,place=0,point;
 for (i=0;i<=strlen(string);i++)
   if (alphabetic(string[i]))
     if (flag)
      {point=i;
       flag=0;
      }
     else
       len++;
   else
     {flag=1;
      if (len>=length)
 {length=len;
  place=point;
  len=0;
 }
     }
 
	return 0;
}
