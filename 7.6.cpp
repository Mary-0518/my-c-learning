
//û��return���ĺ���
// void���͵ĺ��� 

//#include<stdio.h>
//
//void printchar(int n){//��ӡ*  û�к�������ֵ 
//	while(n-->0){
//		putchar('*');//����ַ��� 
//	}
//}
//
//int main(){
//	int len=0;
//	scanf("%d",&len);
//
//	for(int i=1;i<=len;i++){
//		printchar(i);//i����һ������������n     ֵ���� 
//		printf("\n"); 
//	} 
//	return 0;	
//} 



//����βεĺ������� 
//#include<stdio.h>
//void printChar(int a,char zifu){
//	while(a-->0){
//		putchar(zifu);//��һ��putchar������ʹ�� 
//	}	
//}
//
//int main(){
//	int len=0;
//	
//	scanf("%d",&len);//���볤�� 
//	
//	for(int i=1;i<=len;i++){
//		printChar(i,'$');//���ȣ�����ķ��� 
//		printf("\n");	
//	}
//	return 0;
//	
//}
//*******��������ȥҪ�úÿ�����notice****** 

//#include<stdio.h>
//
//void printChar(int a,char b); //����ԭ�͵����� 
//
//int main(){
//	int a=0;
//	scanf("%d",&a);
//	for(int i=1;i<=a;i++){
//		printChar(a-i,'a');//���Լ������һ��������ʹ�� 
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


//=======================important �ص㣬���������������������� ====================================== 
#include<stdio.h>

void printChar(int a,char b); //����ԭ�͵����� 

int main(){
	int a=0;
	int b=2333; //b���������ǴӶ��崦��ʼ��һֱ����������Ľ��� 
	scanf("%d",&a);
	for(int i=1;i<=a;i++){//���i�������򣬴����i�Ķ��忪ʼ��}�����ţ��������Ͳ������� 
		printChar(a-i,'a');
		printChar(i,'^');
		printf("\n");
		int b=0; //������������ٶ���һ��b�����������ϣ��ǲ��Ǻ������b��ͻ�ˣ�����b��
		//��ʵ��Ȼ,��Ϊ�����b����Ч��������ֻ�ܵ�for�����Ĵ����Ž������� 
	}
	//int b=0; //�������������һ��b ,���г�ͻ�� ��  ��仰�Ǵ�� 
	b=999;//��仰���Ǳ����Ķ���ɣ���仰ֻ�Ǳ����ĸ�ֵ 
	for(int i=0;i<=3;i++){//���Բ��������i����ͻ 
		printf("*******");
	} 
	printf("\n");
	
	for(int i=0;i<=3;i++){
		for(int j=0;j<=4;j++){//˫��forѭ����i��j ��������Ҫע�� 
			printf("&&&&&&");
		} 
	} 
	printf("\n");
	printf("%d",b);
	return 0;
}

void printChar(int x,char zifu){//x zifu ���������������ôӶ��崦��ʼ��}�����Ž��� 
	while(x-->0){
		putchar(zifu);
	}
} 





	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 

