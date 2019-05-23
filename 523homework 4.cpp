#include <stdio.h>
int main(){
	int a,b;//两个整数 
	int i,x=0;//i——***个整数；x——他们的和 
	printf("请输入两个整数，老夫可以帮你算出他们之间的所有的整数的和：");
	scanf("%d%d",&a,&b);
	if(a<b){
		for(i=a+1;i<=b-1;i++)
		x=x+i; 
		printf("%d",x);
	}else{
		for(i=b+1;i<=a-1;i++)
		x=x+i;
		printf("%d",x);
	}
	return 0;
}
