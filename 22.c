//数列求和（调和级数）

#include <stdio.h>
int main()
{
	int i;
	int n;
	double sum=0;
	double sign=1.0;
	
	
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum += sign*1.0/i;
		sign=-sign;
	}
	printf("%f",sum);
	return 0;
}
