#include <stdio.h>
int main ()
{
	long long number;
    int n = 0;      
	printf("ÇëÊäÈëÊı×Ö:\n");
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
