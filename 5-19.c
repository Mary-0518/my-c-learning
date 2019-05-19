//switch

//#include <stdio.h>
//int main(){
//	int a;
//	scanf("%d",&a);
//	switch(a){
//	case 0:	printf("输入的数是0");	break;//continue	
//	case 1:	printf("输入的数是1");	
//	case 2:	printf("输入的数是2");	
//	default:printf("这是什么鬼"); 
//}
//	return 0;
//	
//}

		







//实现一个能够计算多个数字的和，差 
//循环， 重复做，

//do while  先执行一次操作，后询问是否满足重复执行的要求，然后若满足就继续操作，否则就不操作 
//for
//while

//do{

	//要循环的操作 


//}while(能够进行循环的条件)
 
//#include<stdio.h>
//int main(){
//	int b;//作用域 
//	do{	
//		printf("请输入一个数字：");
//		int a; 
//		scanf("%d",&a);
//		if(a%2==1){
//		printf("%d是奇数\n",a);
//		}else{
//			printf("%d是偶数\n",a);
//		}
//		printf("还要继续吗?继续---1，结束---0:");
//		scanf("%d",&b); 	
//	} while(b==1);
//	printf("bye");
//	return 0;		
//}





//#include<stdio.h>
//int main(){
//	int c;
//	
//	do{
//	    int a,b;
//		printf("请输入两个数字：");
//		scanf("%d%d",&a,&b);
//		printf("他们的和是：%d\n",a+b);
//		if(a>=b)
//			printf("他们的差是：%d\n",a-b);
//		else 
//			printf("他们的差是：%d\n",b-a);
//	    printf("还要再继续吗？？继续点1，结束点0");
//		scanf("%d",&c); 
//	}while(c==1);
//}



//
//#include <stdio.h>
//int main(){
//	do{
//		int a;
//		printf("我们来玩石头剪刀布吧\n石头：1\n剪刀：2\n布：3\n")	;
//		scanf("%d",&a);
//		switch(a){
//			case 1:printf("你输入了石头\n");   break;
//			case 2:printf("你输入了剪刀\n");   break;
//			case 3:printf("你输入了布\n");    break;	
//			default:printf("什么鬼~~\n"); 	
//		}	
//	}while(1);
//	return 0;	
//}
#include<stdio.h>
int main(){
	int a;
	int i;
	scanf("%d",&a);
	for(i=1;i<=a;i++){  //for(int i=1,i<=a;i++)
		printf("%d\n",i);
	}
	return 0;
} 

