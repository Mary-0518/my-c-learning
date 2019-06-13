#include <stdio.h>
int main(){
	int i,j,a,b;
	printf("请输入两个数，我来画长方形"); 
	scanf("%d%d",&a,&b);
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
	printf("*");	
		}printf("\n");	
	}
	return 0;	
}
