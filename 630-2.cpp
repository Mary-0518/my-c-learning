#include <stdio.h>
int main(){
	int i,j;
	int a[3][5]={{0,0,1,0,0},{0,1,0,1,0},{1,0,1,0,1}};
		for(i=0;i<=2;i++){
		for(j=0;j<=4;j++){
		if(a[i][j]==0)	    
			printf(" ");
	        else
	        printf("*");
		}
		    printf("\n");     
	}
	return 0;
}
