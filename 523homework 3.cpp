#include <stdio.h>
int main(){
	int a,b;
	int i;
	printf("请输入两个整数，老夫可以帮你写出他们之间的所有的整数：");
	scanf("%d%d",&a,&b);
	if(a<b){
		for(i=a+1;i<=b-1;i++)
		printf("%d ",i);
	}else{
		for(i=b+1;i<=a-1;i++)
		printf("%d ",i);
	}
	return 0;	
	
}
