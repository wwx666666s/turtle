#include<stdio.h>


typedef enum {                    
		GPIO_Speed_2MHz,
		GPIO_Speed_10MHz,
		GPIO_Speed_50MHz
} GPIO_01;           
                                

typedef struct  {                        //结构体内还可以放引脚，模式等别的参数。
	GPIO_01 GPIO_Speed;
}GPIO_02;


// 这是初始化函数，赋予（init）结构体默认值。
void GPIO_StructureInit(GPIO_02* GPIO_03) {
	GPIO_03->GPIO_Speed = GPIO_Speed_2MHz;
}

int main() {
	GPIO_02 AAA;
	GPIO_StructureInit(&AAA);
	if (AAA.GPIO_Speed == GPIO_Speed_2MHz) {
		printf("已赋予默认值，GPIO缺省配置完成！");         //验证一下，总不能运行什么都没有吧。。。。
	}
	           


	return 0;
}