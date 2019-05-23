#include <stdio.h>
int main(){ 
	int panduan;// 判断是否继续的那个玩意
		int he=0;//和 
	do{
		int a;
		printf("输入一个整数：");
		scanf("%d",&a);
		he=he+a;
		printf("还要继续吗??继续——1停止——0\n");
		scanf("%d",&panduan);
		}while(panduan==1);
		printf("他们的和是:%d",he);
	return 0;
	} 
