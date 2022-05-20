#include<reg51.h> 
#include"gsm.h" 
#include"lcd.h" 
#define NUMBER1 "7231939556" //Enterthemobile number
#define NUMBER2"7016958644" 
#define NUMBER3 "9532715168" 
sbit vib = P3^2; 
sbit arduino = P0^0; 
void main() 
{ 
unsigned int r; init_serial(); 
LCD_initialise(); 
comwrt(0x80); 
display("INITIALISING...."); 
for(r=0;r<10000;r++); 
comwrt(0x80); 
display("GSM ACCIDENT DET"); 
comwrt(0xC0); 
display("VIBRATION:NO");arduino=0; 
while(1) { 
if(vib==1) { 
arduino=1; 
comwrt(0x80); 
display("VIBRATION DETECT"); 
comwrt(0xC0); 
display("VIBRATION:YES"); 
for(r=0;r<30000;r++); 
for(r=0;r<30000;r++); 
comwrt(0x80); 
display("SENDING MSG....."); 
sendSMS(NUMBER1,"ACCIDENT DETECTED"); 
sendSMS(NUMBER2,"ACCIDENT DETECTED"); 
sendSMS(NUMBER3,"ACCIDENTDETECTED"); 
comwrt(0xC0); 
display(" MSGSENT "); 
for(r=0;r<30000;r++); 
for(r=0;r<30000;r++); 
for(r=0;r<30000;r++); 
comwrt(0x80);display("CALLING........."); 
call(NUMBER1); 
call(NUMBER2); 
call(NUMBER3); 
comwrt(0x80); 
display("GSM ACCIDENT DET"); 
} 
else 
{ arduino=0; 
comwrt(0xC0); 
display("VIBRATION:NO"); 
} 
} 
}