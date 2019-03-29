#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int hour,minute,second,leftover;
	printf("請輸入總計秒數:");
	scanf("%d",&second);
	hour=second/3600;
	minute=second/60%60;
	leftover=(second-hour*3600-minute*60);
	printf("%d時%d分%d秒\n",hour,minute,leftover);
	
	
	int hou,minut,secon,leftove;
	printf("請輸入總計秒數:");
	scanf("%d",&secon);
	hou=secon/3600;
	minut=secon/60%60;
	leftove=(secon-hou*3600-minut*60);
	printf("%d時%d分%d秒\n",hou,minut,leftove);
	printf("兩個時間相減為");
	printf("%d秒\n",second-secon);
	system("pause"); 
	return 0;
}
