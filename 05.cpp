#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int hour,minute,second;
	printf("�п�J�`�p���:");
	scanf("%d",&second);
	hour=second/3600;
	minute=second/60%60;
	second%=60;
	printf("%d��%d��%d��\n",hour,minute,second);
	
	
	int hou,minut,secon;
	printf("�п�J�`�p���:");
	scanf("%d",&secon);
	hou=secon/3600;
	minut=secon/60%60;
	secon%=60;
	printf("%d��%d��%d��\n",hou,minut,secon);
	printf("��Ӯɶ��۴");
	printf("%d��%d��%d��\n",hour-hou,minute-minut,second-secon);
	system("pause"); 
	return 0;
}
