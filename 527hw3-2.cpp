#include <stdio.h>//循环0123456789 
int main(){
	int i,n;
	printf("请输入一个整数：");
	scanf("%d",&i);
	for(n=0;n<=i-1;n++)
		printf("%d",n%10);
	 
	return 0;
}

