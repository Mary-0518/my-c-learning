#include <stdio.h>
int main(){
    int a,b,c;
    printf("�����������������������������ַ���");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b&&a>=c){
	printf("�����������ֵΪ��%d\n",a);
	printf("ף��ʹ����죬лл����"); 
	}else if(b>=a&&b>=c){
	printf("�����������ֵΪ��%d\n",b);
	printf("ף��ʹ����죬лл����");
	}else if(c>=a&&c>=b){
	printf("�����������ֵΪ��%d\n",c);	
	printf("ף��ʹ����죬лл����");	
	}else{
	printf("������������ԣ���\n");
	printf("ף��ʹ����죬лл����");	
	} 
	return 0;	
	}
