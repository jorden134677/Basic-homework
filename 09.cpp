#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,j;
	for(i=1;i<=9;i++)
	{
	for(j=1;j<=9;j++)
	{
		printf("%dX%d=%d\t",i,j,i*j);
	}
	printf("\n");
	}
	system("pause");
	return 0;
}
