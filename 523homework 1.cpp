#include <stdio.h>
int main(){
	do{
		int a,b,c;
		printf("��������������:\n");
		scanf("%d%d",&a,&b);
		printf("�������������ǵĺ��밴��1���������������ǵĻ��밴��2���������������ǵ����밴��3�������밴��4\n");
		scanf("%d",&c);
		switch(c){
		case 1:printf("���ǵĺ���:%d\n",a+b);               break;	
		case 2:printf("���ǵĻ���:%d\n",a*b);               break;
		case 3:printf("���ǵ����ǣ�%d\n",a%b);              break;
		case 4:printf("���˾�д��ҵȥ���������Ϸ�ң���\n");break;       		
		}
	}while(1);
	
	return 0;
}
