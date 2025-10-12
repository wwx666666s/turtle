#include<stdio.h>


int main() 
{
	int input;
	while (1)
	{
		printf("请输入1 0 -1:\n");

		scanf_s("%d", &input);
		if (input == 1) {
			printf("HELLOWORLD\n");
		}
		else if (input == 0) {
			printf("helloworld\n");
		}
		else if (input == -1) {
			break;
		}
		else {
			printf("数据错误，请输入-1 0 1\n");
		}
		
	}
	return 0;


}
