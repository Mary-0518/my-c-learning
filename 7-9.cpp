
//数组作为形参的情况的举例 

//#include<stdio.h>
//#define number 10
//int maxME(int a[],int b){//定义的时候传入的参数是数组的话[]是不能省略的 
//	//a>b?a:b;
//	int maxx=0;
//	for(int i=0;i<=b;i++){
//		if(a[i]>maxx)
//			maxx=a[i];	
//	}
////	return maxx;//输出方式一 
//	printf("%d",maxx);	// 输出方式二 
//} 
//
//int main(){
//	int n;
//	int a[number];
//	int b[number];
//	scanf("%d",&n);
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);	
//	}
//	
//	for(int j=0;j<n;j++){
//		scanf("%d",&b[j]);
//	}
//		//调用方式一 : 
////	int bbb=maxME(a,n);//在函数中传入的参数是数组的话，不需要[] 
////	printf("%d\n",bbb);
////	int mmm=maxME(b,n);
////	printf("%d",mmm);
//调用方式二 
//	maxME(a,n);
//	printf("\n");
//	maxME(b,n);

//	return 0;
//}


//在嵌套情况下的作用域的覆盖等之类的关系
 

#include <stdio.h>

int x=75;//全局变量 

void printfx(void){
	printf("%d\n",x);	
} 

void printfxx(int x){
	printf("%d\n",x);	
} 

int main(){
	int i;
	int x=999;//局部变量 
	
	printfx();
	
	printfxx(x);
	
	printf("x=%d\n",x);
	
	for(int i=0;i<5;i++){
		int x=i*100;
		printf("x=%d\n",x);
	}
	
	printf("x=%d\n",x);
	return 0;
}
