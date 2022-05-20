#include <TinyGPS.h> 
TinyGPS gps; //Creates a new instance of the TinyGPS object 
int gps_inp = 7; 
int buttonState = 0; 
int lastButtonState = 0; 

void setup() 
{
Serial.begin(9600);
Serial.println(); 
pinMode(gps_inp,INPUT); 
}


void loop() 
{
buttonState = digitalRead(gps_inp); 
bool newData = false; 
unsigned long chars; 
unsigned short sentences, failed; 
if (buttonState != lastButtonState) {
if (buttonState == HIGH) 
{ 
// For one second we parse GPS data and report some key values 
for (unsigned long start = millis(); millis() - start < 1000;) 
{
while (Serial.available()) 
{
char c = Serial.read(); 
//Serial.print(c); 
if (gps.encode(c)) 
newData = true; 
} 
}if (newData) //If newData is true 
{
float flat, flon; 
unsigned long age; 
gps.f_get_position(&flat, &flon, &age); 
Serial.print("Latitude = "); 
Serial.print(flat == TinyGPS::GPS_INVALID_F_ANGLE ?0.0 : flat, 6); 
Serial.print(" Longitude = "); 
Serial.print(flon == TinyGPS::GPS_INVALID_F_ANGLE ? 0.0 : flon, 6); 

} 
Serial.println(failed); 
// if (chars == 0) 
// Serial.println("* No characters received from GPS: check wiring *"); 
} 
} 
}
