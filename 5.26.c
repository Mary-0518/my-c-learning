////#include <stdio.h>
////int main(){
////	int a;//���� 
////	int b=0;//����
////	int sum=0; 
////	printf("���������������");
////	scanf("%d",&a);
////	do{
////		scanf("%d",&b);
////		sum+=b;
////		--a;
////	}while(a>0); 
////	
////	printf("���ǵĺ��ǣ�%d",sum);
////	printf("���ǵ�ƽ��ֵ�ǣ�%d",sum/a);
////	return 0;
////} 
//
//#include <stdio.h>
//int main(){
//	int i;
//	int n;
//	scanf("%d",&n);
//	for(i=0;i<=n-1;i++){
//		printf("*");
//	}
//	return 0;
//	
//}
#include <stdio.h>
int main(){
	int n,sum;
	scanf("%d",&n);
	do{
		sum=n%10;
		n=n/10;
		printf("%d",sum);	
	}while(n>0);
	return 0;
}
