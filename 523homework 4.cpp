#include <stdio.h>
int main(){
	int a,b;//�������� 
	int i,x=0;//i����***��������x�������ǵĺ� 
	printf("�����������������Ϸ���԰����������֮������е������ĺͣ�");
	scanf("%d%d",&a,&b);
	if(a<b){
		for(i=a+1;i<=b-1;i++)
		x=x+i; 
		printf("%d",x);
	}else{
		for(i=b+1;i<=a-1;i++)
		x=x+i;
		printf("%d",x);
	}
	return 0;
}
