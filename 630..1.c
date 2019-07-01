#include <stdio.h>
int main(){
	int a[10];//一共十个数据~~
	int i;
	for(i=0;i<=9;i++){
		scanf("%d",&a[i]); 
			printf("%d ",a[i]); 
	} puts("\n");
		for(i=9;i>=0;i--){
			printf("%d ",a[i]);  			
		}	
	puts("\n演示结束");	

	
	return 0;
}
