#include <stdio.h>
int main(){
	int a,b;
	int i;
	printf("�����������������Ϸ���԰���д������֮������е�������");
	scanf("%d%d",&a,&b);
	if(a<b){
		for(i=a+1;i<=b-1;i++)
		printf("%d ",i);
	}else{
		for(i=b+1;i<=a-1;i++)
		printf("%d ",i);
	}
	return 0;	
	
}
