#include <stdio.h>
int main(){
	int sum=0,n;
	scanf("%d",&n);
	
	do{
		sum++; 
		n/=10;
	}		
	while (n);
	printf("���������%dλ��",sum);
	return 0;	
}
