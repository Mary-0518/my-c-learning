#include <stdio.h>
int main(){
	printf("让我来画一个三角形吧 输入一个整数：");
	int x,i,j;
	scanf("%d",&x);
	for(i=1;i<=x;i++){
		for(j=1;j<=x-i;j++)
			printf(" ");
			for(j=1;j<=i;j++)
			printf("*");
	printf("\n");
	}
	return 0;	
}
