#include <stdio.h>
int main(){
	int a;
	printf("请输入一个整数，让我算算他们的绝对值(不许乱输，我会咬你)：");
	scanf("%d",&a);
	if(a>=0)
	printf("他的绝对值是:%d",a);
	else if(a<0)
	printf("他的绝对值是：%d",-a);
	return 0; 
}
