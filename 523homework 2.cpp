#include <stdio.h>
int main(){
	int a;
	int i;
	printf("输入一个整数，让老夫帮你找出它前面所有的偶数：");
	scanf("%d",&a);
	for (i=2;i<=a;i=i+2)
		printf("%d ",i);
	return 0 ;	
}
