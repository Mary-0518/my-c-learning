#include <stdio.h>
int main(){
	int a,b,c;
	
	printf("����������������");
	
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>=b&&a>=c)
	
	printf("������Ϊ��%d",a);
	
	else if(b>=a&&b>=c)
	
	printf("������Ϊ��%d",b);
	
	else if(c>=b&&c>=a)
	
	printf("������Ϊ��%d",c);
	
	else
	
	printf("�������");
	
	
	return 0; 	
} 
