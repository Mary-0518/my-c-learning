//switch

//#include <stdio.h>
//int main(){
//	int a;
//	scanf("%d",&a);
//	switch(a){
//	case 0:	printf("���������0");	break;//continue	
//	case 1:	printf("���������1");	
//	case 2:	printf("���������2");	
//	default:printf("����ʲô��"); 
//}
//	return 0;
//	
//}

		







//ʵ��һ���ܹ����������ֵĺͣ��� 
//ѭ���� �ظ�����

//do while  ��ִ��һ�β�������ѯ���Ƿ������ظ�ִ�е�Ҫ��Ȼ��������ͼ�������������Ͳ����� 
//for
//while

//do{

	//Ҫѭ���Ĳ��� 


//}while(�ܹ�����ѭ��������)
 
//#include<stdio.h>
//int main(){
//	int b;//������ 
//	do{	
//		printf("������һ�����֣�");
//		int a; 
//		scanf("%d",&a);
//		if(a%2==1){
//		printf("%d������\n",a);
//		}else{
//			printf("%d��ż��\n",a);
//		}
//		printf("��Ҫ������?����---1������---0:");
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
//		printf("�������������֣�");
//		scanf("%d%d",&a,&b);
//		printf("���ǵĺ��ǣ�%d\n",a+b);
//		if(a>=b)
//			printf("���ǵĲ��ǣ�%d\n",a-b);
//		else 
//			printf("���ǵĲ��ǣ�%d\n",b-a);
//	    printf("��Ҫ�ټ����𣿣�������1��������0");
//		scanf("%d",&c); 
//	}while(c==1);
//}



//
//#include <stdio.h>
//int main(){
//	do{
//		int a;
//		printf("��������ʯͷ��������\nʯͷ��1\n������2\n����3\n")	;
//		scanf("%d",&a);
//		switch(a){
//			case 1:printf("��������ʯͷ\n");   break;
//			case 2:printf("�������˼���\n");   break;
//			case 3:printf("�������˲�\n");    break;	
//			default:printf("ʲô��~~\n"); 	
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

