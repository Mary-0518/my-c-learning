#include <stdio.h>
int main(){
	int a[3][4];
	int b[4][3];
	int i,j,k;
	puts("请输入数组a[3][4]的值："); 
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
	}
	puts("请输入数组b[4][3]的值：");
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			scanf("%d",&b[i][j]);
		}
	}
	int sum=0;
	int n=0;              
	int c[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<4;k++){
			sum+=a[i][k]*b[k][j];
		    c[i][j]=sum;
		}
		    sum=0;
		    printf("%d ",c[i][j]);
		}
} 
  	return 0;
}

