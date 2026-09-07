#include <stdio.h>
int main()
{printf("这是一个时间差计程序\n");
double hounr1=0;
double hounr2=0;
double hounr3=0;
double hounr4=0;


scanf("%lf,%lf",&hounr1,&hounr2);
scanf("%lf,%lf",&hounr3,&hounr4);


int num=(hounr3*60-hounr1*60)+(hounr4-hounr2);

printf("%d",num);

return 0;

}j
