#include <STC89C5xRC.H>
#include "intrins.H"

sbit beep = P2^5;
sbit key1 = P3^0;
sbit key2 = P3^1;

void Delay50us(unsigned char us)	//@11.0592MHz
{
	while(us--)
	{		
		unsigned char data i;

		_nop_();
		_nop_();
		_nop_();
		i = 135;
		while (--i);
	}
}




void main()
{
	
	while(1)
	{
		if(key1==0)
		{			
			beep=0;
			Delay50us(2);
			beep=1;
		}
		
		if(key2==0)
		{			
			beep=0;
			Delay50us(1);
			beep=1;
		}

	}
}