#include <stdio.h>
int main()
{
	int x;
	int i;
	printf("请输入一个数字，我将判断是否为素数：\n");
	scanf("%d",&x);
		int isPrime = 1;
	for(i=2;i<x;i++){
		if (x%i==0){
			isPrime = 0;
			break;
		}
	
	}
	if (isPrime==1){
		printf("%d 是素数\n",x);
	}else{
		printf("%d 不是素数\n",x);
	}
	printf("\n");
	return 0;
}
