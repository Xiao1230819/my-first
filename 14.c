#include <stdio.h>
int main ()
{
	long long number;
    int n = 0;      
	printf("请输入数字:\n");
	scanf("%lld",&number);
	
	
	n++;
	number/=10;
	
	
	while(number>1)
{
	number/=10;
	n++;
}
	printf("%d\n",n);
	return 0;
}
