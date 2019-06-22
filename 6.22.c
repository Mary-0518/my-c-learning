//#include <stdio.h>
//int main(){
//	int a[5];
//	int sum=0;
//	int i;
//	int max=0;
//	int min=99999;
//	for(i=0;i<5;i++){
//		scanf("%d",&a[i]);
//		sum+=a[i];	
//		if(min>a[i]){
//			min=a[i];
//		}
//		if(max<a[i]){
//			max=a[i];
//		}
//		
//	}	
//	printf("%d\n",sum/5);
//	printf("%d\n",min);
//	printf("%d\n",max);
//	return 0;
//} 
#include <stdio.h>
	int cmax;
	int mmax;
	int emax;
int main(){
	int a[4][3];
	int i;
	int j;
	
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
			if(cmax<a[i][0]){
				cmax=a[i][j];
			}if(mmax<a[i][1]){
				mmax=a[i][j];
			}if(emax<a[i][2]){
				emax=a[i][j];
			}
		}		
	}
	printf("%d\n",cmax);
	printf("%d\n",mmax);
	printf("%d\n",emax);
	
	return 0;
}

