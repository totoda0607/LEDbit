const int btn_pin=2;
const int led_pin=4;

void setup(){
  DDRD=B00010000;
  PORTD=B00000100;
}

void loop(){
  int btn=digitalRead(btn_pin);

  if(btn==LOW){
     PORTD=B00010000;
  }else{
     PORTD=B00000100;
  }
}
