#include<stdio.h>


typedef enum {                    
		GPIO_Speed_2MHz,
		GPIO_Speed_10MHz,
		GPIO_Speed_50MHz
} GPIO_SpeedTypeDef;            //豆包说用这些定义名可读性更强，而且更方便移植到别的平台。
                                //主要是自己设的一堆名字把自己绕晕了QAQ

typedef struct  {                        //结构体内还可以放引脚，模式等别的参数。
	GPIO_SpeedTypeDef GPIO_Speed;
}GPIO_InitTypeDef;


// 这是初始化函数，赋予（init）结构体默认值。
void GPIO_StructureInit(GPIO_InitTypeDef* GPIO_InitStruct) {
	GPIO_InitStruct->GPIO_Speed = GPIO_Speed_2MHz;
}

int main() {
	GPIO_InitTypeDef gpio_init;
	GPIO_StructureInit(&gpio_init);
	if (gpio_init.GPIO_Speed == GPIO_Speed_2MHz) {
		printf("已赋予默认值，GPIO缺省配置完成！");         //验证一下，总不能运行什么都没有吧。。。。
	}
	           


	return 0;
}