#include <stdio.h>//ѭ��1234567890�� 
int main(){
	int i,n;
	printf("������һ��������");
	scanf("%d",&i);
	for(n=1;n<=i;n++)
		printf("%d",n%10);
	 
	return 0;
}

