//#include <stdio.h>
//int main(){
//  	int a;//�������Ķ��壬a�Ǳ����� 
//  	int b;//b�Ǳ����� 
//  	printf("������һ������");
//	scanf("%d%d",&a,&b);
//	printf("���ǵĺ��ǣ�%d",a+b);
//	return 0; 		
//}
//====================================================





//class three


//if���
//if else
//
//if   else-if   else

//if  else-if  else-if  else-if 
//
//if else Ƕ��



//1
//#include <stdio.h>
//int main(){
//	int a,b;
//	puts("��������������:"); 
//	//printf("��������������:\n");
//	scanf("%d %d",&a,&b);
//	
//	if(a>b){
//		printf("��������ǣ�%d",a);
//		printf("haihai");
//	}else{
//		printf("��������ǣ�%d",b);
//		printf("haihai");
//	}
//	
/////���if����ֻ��һ�仰��Ҫִ�У���ô���Բ���Ҫ�ӻ����� 
////	if(a>b)	printf("aftafwa");
////	else	printf("agfaref");
//	
//	return 0;	
//} 
//
//#include <stdio.h>
//int main(){
//	int a,b;
//	puts("��������������:"); 
//
//	scanf("%d %d",&a,&b);
//	
//	//��ѡһ�������  1:�������   2:һ����ѡ��һ�� 
//	if(a>b){
//		printf("��������ǣ�%d",a);
//		printf("haihai");
//	}else{
//		printf("��������ǣ�%d",b);
//		printf("haihai");
//	}
//
//	return 0;	
//} 
//


////2,  �ɸ��� ��ѡһ 
//#include <stdio.h>
//int main(){
//   	int a;
//   	scanf("%d",&a);  //&ȡ��ַ��   && and 
//   	if(a==0){   //==���������    =�Ǹ�ֵ����� 
//   		printf("�������0");
//		}else if(a>0){
//			printf("�����������");
//		}else{
//			printf("������Ǹ���");
//	}
//   	return 0;
//}


//3 ���ж�������Ĵ�С��Χ����� 
//#include <stdio.h>     //��ѡһ  ��һ����ѡһ�� 
//int main(){
//   	int a;
//   	scanf("%d",&a);
//   	if(a==0){
//   		printf("�������0\n");
//	}else if(a>0&&a<10){
//			printf("�������0~9\n");
//	}else if(a>=10&&a<20){
//			printf("�������10~19\n");
//	}else if(a>=20&&a<30){
//			printf("�������20~29\n");
//	}else{
//			printf("������Ǵ���30\n");
//	}
//	
//	printf("�жϽ���");
//	
//   	return 0;
//}

//
////4  ��else 
//#include <stdio.h>     //��ѡ����һ����ѡһ�� 
//int main(){
//   	int a;
//   	scanf("%d",&a);
//   	if(a==0){
//   		printf("�������0\n");
//	}else if(a>0&&a<10){
//			printf("�������0~9\n");
//	}else if(a>=10&&a<20){
//			printf("�������10~19\n");
//	}else if(a>=20&&a<30){
//			printf("�������20~29\n");
//	}
//	
//	printf("�жϽ���");
//	
//   	return 0;
//}

//5 if Ƕ��
#include <stdio.h> 
  int main(){
  int a, b,c;
  scanf("%d%d%d",&a,&b,&c);//��Ҫ����ȡ��ַ�� 
  if(a>b)
  {
  	if(a>c)
  	     printf("���ֵ��:%d",a); 
    else
	printf("���ֵ��:%d",c);
  }
  else 
	{   
		if(b>c)
			printf("���ֵ��:%d",b) ;
    	else	
			printf("���ֵ��:%d",c) ; 
	}  
	return 0;  	
} 
	  	  
	   
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	

 






 
 
