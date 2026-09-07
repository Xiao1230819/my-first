#include <stdio.h>
int main()
{ float price1=0;
  float price2=0;
  
  
  printf("请输入商品价格");
  scanf("%f",&price1);
  printf("请输入你支付多少元");
  scanf("%f",&price2);
  
  
  float num=price2-price1;
  
  
  printf("%f",num);
  
  
  return 0;
}
