#include<stdio.h>
int main()
{
	int number;
	int count=0;
	int sunmer=0;
	
	
	printf("%d,%d",count,sunmer);
	printf("请输入数字:\n");
	scanf("%d",&number);
	
	
	while(number!=-1){
		count=count+number;
		sunmer++;
		scanf("%d",&number);
	}
	
	printf("平均数为%f",1.0*count/sunmer);
	return 0;
}
