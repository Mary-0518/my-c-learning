
//没有return语句的函数
// void类型的函数 

//#include<stdio.h>
//
//void printchar(int n){//打印*  没有函数返回值 
//	while(n-->0){
//		putchar('*');//输出字符串 
//	}
//}
//
//int main(){
//	int len=0;
//	scanf("%d",&len);
//
//	for(int i=1;i<=len;i++){
//		printchar(i);//i复制一个副本，传给n     值传递 
//		printf("\n"); 
//	} 
//	return 0;	
//} 



//多个形参的函数类型 
//#include<stdio.h>
//void printChar(int a,char zifu){
//	while(a-->0){
//		putchar(zifu);//看一下putchar函数的使用 
//	}	
//}
//
//int main(){
//	int len=0;
//	
//	scanf("%d",&len);//输入长度 
//	
//	for(int i=1;i<=len;i++){
//		printChar(i,'$');//长度，输出的符号 
//		printf("\n");	
//	}
//	return 0;
//	
//}
//*******这个例题回去要好好看看，notice****** 

//#include<stdio.h>
//
//void printChar(int a,char b); //函数原型的申明 
//
//int main(){
//	int a=0;
//	scanf("%d",&a);
//	for(int i=1;i<=a;i++){
//		printChar(a-i,'a');//你自己定义的一个函数的使用 
//		printChar(i,'^');
//		printf("\n");
//	}
//	return 0;
//}
//void printChar(int x,char zifu){
//	while(x-->0){
//		putchar(zifu);
//	}
//} 


//=======================important 重点，函数，变量的作用域问题 ====================================== 
#include<stdio.h>

void printChar(int a,char b); //函数原型的申明 

int main(){
	int a=0;
	int b=2333; //b的作用域是从定义处开始，一直到这个函数的结束 
	scanf("%d",&a);
	for(int i=1;i<=a;i++){//这个i的作用域，从这个i的定义开始到}大括号，结束，就不存在了 
		printChar(a-i,'a');
		printChar(i,'^');
		printf("\n");
		int b=0; //你如果在这里再定义一个b变量，表面上，是不是和上面的b冲突了？都叫b？
		//其实不然,因为，这个b的有效存在周期只能到for函数的大括号结束而已 
	}
	//int b=0; //在这里如果定义一个b ,就有冲突了 ，  这句话是错的 
	b=999;//这句话不是变量的定义吧，这句话只是变量的赋值 
	for(int i=0;i<=3;i++){//所以才与这里的i不冲突 
		printf("*******");
	} 
	printf("\n");
	
	for(int i=0;i<=3;i++){
		for(int j=0;j<=4;j++){//双层for循环，i，j 的作用域要注意 
			printf("&&&&&&");
		} 
	} 
	printf("\n");
	printf("%d",b);
	return 0;
}

void printChar(int x,char zifu){//x zifu 这两个变量的作用从定义处开始到}大括号结束 
	while(x-->0){
		putchar(zifu);
	}
} 





	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 

