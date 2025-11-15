#include<stdio.h>
#include<stdint.h>

void Start();
void SendByte(uint8_t data);
void ReceoveAck();
void Stop();
void SendData();


int main() {
	
	SendData();
	return 0;
}

void Start() {
	SDA_High();
	SCL_High();
	SDA_Low();
	SCL_Low();
	printf("开始发送");
	
}

void SendByte(uint8_t data) {
	int i;
	for (i = 0; i < 8; i++) {
		 
		 if (data & 0x80 == 1) {
			 SDA_High();
		}
		 else {
			 SDA_Low();
		 }
		 SCL_Low();
		 data <<= 1;
	}
	
}

void ReceoveAck() {
	uint8_t ack;
	SCL_Low();
	SDA_High();
	SCL_High();
	ack = SDA_Read();
	SCL_Low();
	return ack;
}

void Stop() {
	SDA_Low();
	SCL_High();
	SDA_High();
	printf("数据发送完成！");
}

void SendData() {
	Start();
	SendByte(56);
	ReceoveAck();
	Stop();
}