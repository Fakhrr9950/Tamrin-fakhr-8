
#include <LiquidCrystal.h>//include the library code
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;//creat an lcd object
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup() {
 lcd.begin(16,2);//set up the lcd number of columns and rows
}

void loop() {
float voltage=analogRead(A0);
float temp=voltage * 0.48828125;
lcd.setCursor(0,0);//prin the temperature on the lcd
lcd.print("temp");//print to the lcd
lcd.print(temp);//print to the lcd
lcd.print("*C");//print to the lcd
delay(2000);//time
lcd.clear();//clrae the lcd screan
}
