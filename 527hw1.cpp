#include <stdio.h>
int main(){
	int sum,n;
	scanf("%d",&n);
	
	do{
		sum=n%10;
		n=n/10;
		printf("%d",sum);
		
	}while(n>0);
	return 0;
	
	
	
	
	
	
	
	
}
