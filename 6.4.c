#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int a[11]={10,20,30,40,50,60,70,80,90,100};
int temp1,temp2,number,end,i,j;
  printf("已排好序的数组:\n");
  for (i=0;i<10;i++)
  printf("%5d",a[i]);
  printf("\n");
  printf("请输入插入的数字:");
  scanf("%d",&number);
  end=a[9];
  if (number>end)
    a[10]=number;
  else
   {for (i=0;i<10;i++)
    {if (a[i]>number)
       {temp1=a[i];
 a[i]=number;
 for (j=i+1;j<11;j++)
   {temp2=a[j];
    a[j]=temp1;
    temp1=temp2;
   }
   break;
       }
    }
  }
  printf("新排好序的数组:\n");
  for (i=0;i<11;i++)
    printf("%5d",a[i]);
  printf("\n");
	return 0;
}
