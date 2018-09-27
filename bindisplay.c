#include<LPC21xx.h>
unsigned int delay,i;
int main()
{
   PINSEL1=0x00000000; 
   IO0DIR=0x00FF0000;
   while(1)
   {
      IO0CLR=0x00FF0000;
	  IO0SET=0x00000000;
	  
for(i=0;i<256;i++)
{
   IO0CLR=0x00FF0000;
   IO0SET=~i<<16;
   for(delay=0;delay<500000;delay++);
}
   }
}                             
