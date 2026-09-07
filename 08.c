#include <stdio.h>
int main ()
{int hour1,minute1;
int hour2,minute2;
int im,ih;


scanf("%d %d",&hour1,&minute1);
scanf("%d %d",&hour2,&minute2);


int t=(hour2*60+minute2)-(hour1*60+minute1);


if (t < 0) {
        t = -t;  // 取绝对值，只算差多少，不考虑先后
    }

    ih = t / 60;
    im = t % 60;
printf("两个时间的时间差为%d小时%d分钟",ih,im);

return 0;
}
