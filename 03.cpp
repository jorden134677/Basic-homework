#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float tall,weight,h,BMI; //tall身高 weight體重 h身高公尺單位 
	printf("請輸入身高:");
	scanf("%f",&tall);
	printf("請輸入體重:");
	scanf("%f",&weight);
	h=(tall/100);
	BMI=(weight/(h*h));
	printf("你的BMI是:%f\n",BMI);
	system("pause");
	return 0;
}
