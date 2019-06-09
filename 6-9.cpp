
//6-9课程 

//#include <stdio.h>
//int main(){ 
////	for(int i=1;i<=12;i++){
//	int i=1;
//	do{
//		i++;
//		printf("****");
//		printf("\n");
//	} while(i<=3);
////	}
//	return 0;
//} 

//#include<stdio.h>
//int main(){
//	int i=1;
//	do{
//		
//		printf("****\n");
//		i++;
//	}while(i<=3);
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	for(int i=0;i<3;i++){
//		printf("*\n");
//	} 
//	return 0;
//}

//多重for循环
//#include<stdio.h>
//int main(){
//	for(int i=0;i<3;i++){
//		printf("*\n");
//		for(int j=0;j<4;j++){
//			printf("*\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(){
//	
//	for(int i=0;i<3;i++){
//		for(int j=0;j<4;j++){//作用域 
//			printf("*");
//		}
//		printf("\n");
//		
//	}
//	return 0;		
//}
#include <stdio.h> 
int main(){
	for(int i=1;i<=4;i++){
		for(int j=0;j<i;j++){
			printf("*");
		}printf("\n");
	}
	return 0;
}




























