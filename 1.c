#include <stdio.h>
int main()
{
	int grade;
	printf("请输入成绩\n");
	scanf("%d",&grade);
	printf("你输入的成绩为%d\n",grade);
	grade /=10;
	
	
	switch(grade){
		case 10:
			printf("你的成绩非常棒");
			break;
		case 9:
			printf("你的成绩比较棒");
			break;
		case 8:
			printf("你的成绩优秀");
			break;
		case 7:
			printf("你的成绩及格");
			break;
		case 6:
			printf("你的成绩不合格");
			break;	
		default:
			printf("输入的成绩无效");
            break;
}

return 0;

   }
