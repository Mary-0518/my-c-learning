#include <stdio.h>
int main(){
    printf("����������:");
    int a;
    scanf("%d",&a);
    int b=0;
    for(int i=0;i<a;i++){
        if(b==5)//ÿ���*�Ż���һ�� 
        {printf("\n");
            b=0;
        }
    printf("*");
    b=b+1;
    }  
	return 0;  
 } 
