#include <stdio.h>
int main(){
	int sum=0,n;
	scanf("%d",&n);
	
	do{
		sum++; 
		n/=10;
	}		
	while (n);
	printf("这个数字有%d位。",sum);
	return 0;	
}
