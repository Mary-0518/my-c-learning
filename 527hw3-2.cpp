#include <stdio.h>//ѭ��0123456789 
int main(){
	int i,n;
	printf("������һ��������");
	scanf("%d",&i);
	for(n=0;n<=i-1;n++)
		printf("%d",n%10);
	 
	return 0;
}

