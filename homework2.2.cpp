#include <stdio.h>
int main(){
	int a,b,c;
	
	printf("请输入三个整数：");
	
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>=b&&a>=c)
	
	printf("最大的数为：%d",a);
	
	else if(b>=a&&b>=c)
	
	printf("最大的数为：%d",b);
	
	else if(c>=b&&c>=a)
	
	printf("最大的数为：%d",c);
	
	else
	
	printf("输入错误");
	
	
	return 0; 	
} 
