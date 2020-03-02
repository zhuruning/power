#include<STC12C5A60S2.h>

#include<intrins.h>
#include <stdio.h>

#define usint unsigned short int		
#define uchar unsigned char			
#define uint unsigned int  
#define VALID    0
#define INVALID  1

			

sbit IN1 = P1^0;			//使能
sbit IN2 = P2^1;			//按键


void delay_1ms(uint z){         //延时函数1ms  
	uint x,y; 
	for(x = z; x > 0; x--) 
		for(y = 920; y > 0; y--); 
}



void main()
{	
	uchar i=0;
	  
	while(1){
			if (IN2 == 1){		//	  按键按下
			  IN1 = 1;
			  }
			delay_1ms(100);
			while(IN2 == 1){		//检测按键是否松开
				delay_1ms(1000);
				}
			IN1 = 0;		
	}
}
