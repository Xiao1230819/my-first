#include <stdio.h>
int main()
{float price1=0;
		float price2=0;
printf("请输入两个数字(如五英尺七英寸:5 7):");
	scanf("%f %f" ,&price1,&price2);
	float num=(price1+price2/12.0)*0.3048;
	printf("%f",num);
	return 0;
	
}
