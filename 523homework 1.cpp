#include <stdio.h>
int main(){
	do{
		int a,b,c;
		printf("请输入两个数字:\n");
		scanf("%d%d",&a,&b);
		printf("如果你想算出他们的和请按下1，如果你想算出他们的积请按下2，如果你想算出他们的余请按下3，结束请按下4\n");
		scanf("%d",&c);
		switch(c){
		case 1:printf("他们的和是:%d\n",a+b);               break;	
		case 2:printf("他们的积是:%d\n",a*b);               break;
		case 3:printf("他们的余是：%d\n",a%b);              break;
		case 4:printf("好了就写作业去！！休想调戏我！！\n");break;       		
		}
	}while(1);
	
	return 0;
}
