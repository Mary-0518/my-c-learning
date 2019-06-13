#include <stdio.h>
int main(){
	int i,j,a;
	printf("请输入1个数，我来画正方形"); 
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		for(j=1;j<=a;j++){
	printf("*");	
		}printf("\n");	
	}
	return 0;
}
