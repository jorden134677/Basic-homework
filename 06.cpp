#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int year;
	printf("請輸入西元年分:");
	scanf("%d",&year);
	if (year%4==0 && year%100 !=0 || year%400==0 && year%3200 !=0)
	  {printf("%d是閏年\n",year);}
	else 
	  {printf("%d是平年\n",year);}
	system("pause");
	return 0;
}
