#include <stdio.h>
int main()
{
	int number;
	int n;
	printf("请输入数字:\n");
	scanf("%lld",&number);
	
	
	do {
		number/=10;
		n++;
	}
	while(number>0);
	printf("这是一个%lld位数",n);
	
	
	return 0;
}
