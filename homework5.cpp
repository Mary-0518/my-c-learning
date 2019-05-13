#include <stdio.h>
int main(){
	int a,b,c;
	printf("请输入三个整数：");
	
	scanf("%d%d%d",&a,&b,&c);
	
	if(a<=b&&a<=c)
	
	printf("最小的数是：%d",a);
	
	else if(b<=a&&b<=c)
	
	printf("最小的数是：%d",b);
	
	else
	
	printf("最小的数是：%d",c);
	
	return 0;	
}
