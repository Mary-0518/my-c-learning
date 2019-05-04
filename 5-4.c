//#include <stdio.h>
//int main(){
//  	int a;//，变量的定义，a是变量名 
//  	int b;//b是变量名 
//  	printf("请输入一个整数");
//	scanf("%d%d",&a,&b);
//	printf("它们的和是：%d",a+b);
//	return 0; 		
//}
//====================================================





//class three


//if语句
//if else
//
//if   else-if   else

//if  else-if  else-if  else-if 
//
//if else 嵌套



//1
//#include <stdio.h>
//int main(){
//	int a,b;
//	puts("请输入两个数字:"); 
//	//printf("请输入两个数字:\n");
//	scanf("%d %d",&a,&b);
//	
//	if(a>b){
//		printf("最大数字是：%d",a);
//		printf("haihai");
//	}else{
//		printf("最大数字是：%d",b);
//		printf("haihai");
//	}
//	
/////如果if后面只有一句话需要执行，那么可以不需要加花括号 
////	if(a>b)	printf("aftafwa");
////	else	printf("agfaref");
//	
//	return 0;	
//} 
//
//#include <stdio.h>
//int main(){
//	int a,b;
//	puts("请输入两个数字:"); 
//
//	scanf("%d %d",&a,&b);
//	
//	//二选一的情况，  1:两种情况   2:一定会选择一个 
//	if(a>b){
//		printf("最大数字是：%d",a);
//		printf("haihai");
//	}else{
//		printf("最大数字是：%d",b);
//		printf("haihai");
//	}
//
//	return 0;	
//} 
//


////2,  可改善 三选一 
//#include <stdio.h>
//int main(){
//   	int a;
//   	scanf("%d",&a);  //&取地址符   && and 
//   	if(a==0){   //==等于运算符    =是赋值运算符 
//   		printf("这个数是0");
//		}else if(a>0){
//			printf("这个数是正数");
//		}else{
//			printf("这个数是负数");
//	}
//   	return 0;
//}


//3 ，判断这个数的大小范围在哪里： 
//#include <stdio.h>     //多选一  ，一定会选一个 
//int main(){
//   	int a;
//   	scanf("%d",&a);
//   	if(a==0){
//   		printf("这个数是0\n");
//	}else if(a>0&&a<10){
//			printf("这个数是0~9\n");
//	}else if(a>=10&&a<20){
//			printf("这个数是10~19\n");
//	}else if(a>=20&&a<30){
//			printf("这个数是20~29\n");
//	}else{
//			printf("这个数是大于30\n");
//	}
//	
//	printf("判断结束");
//	
//   	return 0;
//}

//
////4  无else 
//#include <stdio.h>     //多选，不一定会选一个 
//int main(){
//   	int a;
//   	scanf("%d",&a);
//   	if(a==0){
//   		printf("这个数是0\n");
//	}else if(a>0&&a<10){
//			printf("这个数是0~9\n");
//	}else if(a>=10&&a<20){
//			printf("这个数是10~19\n");
//	}else if(a>=20&&a<30){
//			printf("这个数是20~29\n");
//	}
//	
//	printf("判断结束");
//	
//   	return 0;
//}

//5 if 嵌套
#include <stdio.h> 
  int main(){
  int a, b,c;
  scanf("%d%d%d",&a,&b,&c);//不要忘了取地址符 
  if(a>b)
  {
  	if(a>c)
  	     printf("最大值是:%d",a); 
    else
	printf("最大值是:%d",c);
  }
  else 
	{   
		if(b>c)
			printf("最大值是:%d",b) ;
    	else	
			printf("最大值是:%d",c) ; 
	}  
	return 0;  	
} 
	  	  
	   
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	

 






 
 
