void setup(){
    pinMode(2, INPUT_PULLUP);
    Serial.begin(9600);

    delay(250);
    tone(8,200,500);

    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
    pinMode(12,OUTPUT);
    pinMode(13,OUTPUT);
}

int n = 1 ; 
int pin = 3;
int d = 100 ;
void loop() {
    if(digitalRead(2) == 0) {
        n = n*2 ;
        Serial.println("Faster X 2 (Current Speed : X" + String(n) + ")");
        tone(8,400,100);
        delay(100);
        d = d/2 ;        
    }
      else {}

    for(pin = 3 ; pin <= 13 ; pin++){
      if(pin == 8 ){
        digitalWrite(pin,0);
        continue;
      }

      digitalWrite(pin,1); 
      delay(d);
      digitalWrite(pin,0);      
    }

    for(pin = 13 ; pin >= 3 ; pin--){
      if(pin == 8 ){
        digitalWrite(pin,0);
        continue;
      }

      digitalWrite(pin,1); 
      delay(d);
      digitalWrite(pin,0);
    }

}