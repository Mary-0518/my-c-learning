#include <stdio.h>
    int main(){
    int x,y; 
    printf("请输入长方形的宽和长，让我来帮你算算它的面积 还有它的周长");
    scanf("%d %d",&x,&y);	
    printf("长方形的面积是：%d\n",x*y);
    printf("长方形的周长是：%d",2*x+2*y);
    return 0;	
    }
