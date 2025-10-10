#include<stdio.h>


int main() 
{
	int a;
	while (1)
	{
		printf("请输入1 0 -1:\n");

		scanf_s("%d", &a);
		if (a == 1) {
			printf("HELLOWORLD\n");
		}
		else if (a == 0) {
			printf("helloworld\n");
		}
		else if (a == -1) {
			break;
		}
		else {
			printf("数据错误，请输入-1 0 1\n");
		}
		
	}
	return 0;

}