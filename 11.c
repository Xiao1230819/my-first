#include <stdio.h>
int main()
{    int a,b,c;
     int max=0;
     printf("请输入三个数字进行比较");
     scanf("%d %d %d",&a,&b,&c);
	 
	 
	 if(a>b){
	 if(a>c)
	 printf("最大的数是%d",a);
	 else
	 printf("最大的数是%d",c);	
	 }  
	 else{
	 	if(b>c)
	 	printf("最大的数是%d",b);
	 	else
	 	printf("最大的数是%d",c);
}
	    return 0;
}
