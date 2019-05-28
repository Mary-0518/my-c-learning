#include <stdio.h>
int main(){
    printf("请输入整数:");
    int a;
    scanf("%d",&a);
    int b=0;
    for(int i=0;i<a;i++){
        if(b==5)//每五个*号换行一次 
        {printf("\n");
            b=0;
        }
    printf("*");
    b=b+1;
    }  
	return 0;  
 } 
