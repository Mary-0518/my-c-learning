#include <stdio.h>
int main(){
	int a;
	int i;
	printf("����һ�����������Ϸ�����ҳ���ǰ�����е�ż����");
	scanf("%d",&a);
	for (i=2;i<=a;i=i+2)
		printf("%d ",i);
	return 0 ;	
}
