#include <stdio.h>
int main()
{
	int type;
	printf("请输入一个数字\n");
	scanf("%d",&type);
	switch(type){
		case 1:
		printf("你好\n");
		break;
		case 2:
		printf("早上好\n");
		break;
		case 3:
		printf("中午好\n");
		break;
		case 4:
		printf("晚上好\n");
		break;
		default:
			printf("请输入1-4间的任意数字");
			break;
}
	return 0;
}
