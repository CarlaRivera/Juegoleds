/*         UTN-FICA-CIERCOM
             OPTATIVA II
            CARLA RIVERA

     Juego de Leds
 */
 
 #include<LiquidCrystal.h> //incluir libreria
 LiquidCrystal lcd(13,12,11,10,8,7); //inicializar lcd (RS,E,D4,D5,D6,D7)
 //inicializo puertos
 int led1=6;
 int led2=5;
 int led3=4;
 
void setup() {
lcd.begin(16,2); //inicializo la interfaz del lcd y defino dimensiones de pantalla
//configuracion de pines como salida
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
}

void loop() {
delay(200); 
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
lcd.print("Led 1 ENCENDIDO");
lcd.setCursor(0,1);
delay(2000);
lcd.clear();


  
digitalWrite(led1, LOW);
digitalWrite(led2, HIGH);
digitalWrite(led3, LOW);
lcd.print("Led 2 ENCENDIDO");
lcd.setCursor(0,1);
delay(1000);
lcd.clear();



digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, HIGH);
lcd.print("Led 3 ENCENDIDO");
lcd.setCursor(0,1);
delay(15000);
lcd.clear();


  

}
