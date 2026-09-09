#include <stdio.h>
int main ()
{
	int n=0;
	int fact=0;
	int num=1;
	
	
	printf("请输入数字:\n");
	scanf("%d",&fact);
	
	
	for(n=1;n<=fact;n++){
		num *= n;
		
	}
	printf("%d!=%d\n",fact,num);
	return 0;
}
