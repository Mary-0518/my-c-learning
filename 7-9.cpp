
//������Ϊ�βε�����ľ��� 

//#include<stdio.h>
//#define number 10
//int maxME(int a[],int b){//�����ʱ����Ĳ���������Ļ�[]�ǲ���ʡ�Ե� 
//	//a>b?a:b;
//	int maxx=0;
//	for(int i=0;i<=b;i++){
//		if(a[i]>maxx)
//			maxx=a[i];	
//	}
////	return maxx;//�����ʽһ 
//	printf("%d",maxx);	// �����ʽ�� 
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
//		//���÷�ʽһ : 
////	int bbb=maxME(a,n);//�ں����д���Ĳ���������Ļ�������Ҫ[] 
////	printf("%d\n",bbb);
////	int mmm=maxME(b,n);
////	printf("%d",mmm);
//���÷�ʽ�� 
//	maxME(a,n);
//	printf("\n");
//	maxME(b,n);

//	return 0;
//}


//��Ƕ������µ�������ĸ��ǵ�֮��Ĺ�ϵ
 

#include <stdio.h>

int x=75;//ȫ�ֱ��� 

void printfx(void){
	printf("%d\n",x);	
} 

void printfxx(int x){
	printf("%d\n",x);	
} 

int main(){
	int i;
	int x=999;//�ֲ����� 
	
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
