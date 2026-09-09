#include <stdio.h>
int main()
{    int PASS=60;
    int num=0;
    printf("请输入你的成绩"); 
    scanf("%d",&num);
    
    
    printf("你输入的成绩是%d\n",num);
    if(num>=PASS){
    	printf("恭喜你，成功及格\n");
	}
	else{
		printf("很可惜，这次你没有及格\n");
	}
    printf("再见\n");
    return 0;}
