#include <stdio.h>//循环1234567890； 
int main(){
	int i,n;
	printf("请输入一个整数：");
	scanf("%d",&i);
	for(n=1;n<=i;n++)
		printf("%d",n%10);
	 
	return 0;
}

