//数列求和（调和级数）

#include <stdio.h>
int main()
{
	int i;
	int n;
	double sum=0;
	
	
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum =sum+ 1.0/i;
	}printf("前%d项求和为%f",n,sum);
	return 0;
}
