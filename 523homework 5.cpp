#include <stdio.h>
int main(){ 
	int panduan;// �ж��Ƿ�������Ǹ�����
		int he=0;//�� 
	do{
		int a;
		printf("����һ��������");
		scanf("%d",&a);
		he=he+a;
		printf("��Ҫ������??��������1ֹͣ����0\n");
		scanf("%d",&panduan);
		}while(panduan==1);
		printf("���ǵĺ���:%d",he);
	return 0;
	} 
