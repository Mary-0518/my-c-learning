//#include<stdio.h>
//int main(){
//	int i;
//	for(i=1;i<=3;i++){
//	continue;
//	printf("*");
////	break;
//	
//	printf("777");
//	}
//	printf("666"); 
//	
//	return 0;
//} 
//数组
//#include<stdio.h>
//int main(){
//	int a[10];
//	scanf("%d",&a[10]);
//	printf("%d",a[10]);
//	return 0;
//}
//#include<stdio.h>
//int main(){
//	int a[5];
//	int i;
//	
//	for(i=0;i<=5;i++){
//	scanf("%d",&a[i]);
//	printf("%d ",a[i]);
//	}
//	
//	return 0;
//}	
//初始化
//#include<stdio.h>
//int main(){
////	int a[5]={0,0,3};
//	int a[5]={1,2,3,4,5};
//	int b[6];
//	int i;
//	for(i=0;i<=4;i++){
//		b[i]=a[i];
//	printf("%d ",b[i]);
//	}
//	return 0;
//} 
#include<stdio.h>
int main(){
	int a[6];//a[0] a[1] a[2] a[3] a[4] a[5]
	printf("请输入六个学生的成绩：");
	int i,sum=0;

	for(i=0;i<6;i++){
		scanf("%d",&a[i]);
		sum+=a[i];//sum=sum+a[i]
			
	}
//	sum=a[0]+[1]+[2]+.....
	printf("%d",sum/6);
	return 0; 
}
	
	
 
