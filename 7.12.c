#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double solut(double a,double b,double c,double d)
    {
        double x1=1,x,f,f1;
        
        //迭代
        do
        {   x=x1;
            f=((a*x+b)*x+c)*x+d;//原函数
            f1=(3*a*x+2*b)*x+c;//求导之后的函数
               x1=x-f/f1;        
        } while(fabs(x1-x)>=0.00000001);
        return x1;
    }

    int main()
    {
        double solut(double ,double ,double ,double );
        double a,b,c,d;
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        printf("%.2f\n",solut(a,b,c,d));	
	return 0;
}
