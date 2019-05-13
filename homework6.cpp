#include <stdio.h>
int main(){
    int	a,b;
    printf("输入两个整数：");
	scanf("%d%d",&a,&b);
	if(a>=b) 
	printf("他们的差是：%d",a-b);
	else
	printf("他们的差是：%d",b-a);
	return 0;	
}
