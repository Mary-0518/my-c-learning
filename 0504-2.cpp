#include <stdio.h>
int main(){
    int a,b,c;
    printf("请输入三个整数，不可输入其他字符：");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b&&a>=c){
	printf("三个数的最大值为：%d\n",a);
	printf("祝您使用愉快，谢谢！！"); 
	}else if(b>=a&&b>=c){
	printf("三个数的最大值为：%d\n",b);
	printf("祝您使用愉快，谢谢！！");
	}else if(c>=a&&c>=b){
	printf("三个数的最大值为：%d\n",c);	
	printf("祝您使用愉快，谢谢！！");	
	}else{
	printf("输入错误，请重试！！\n");
	printf("祝您使用愉快，谢谢！！");	
	} 
	return 0;	
	}
