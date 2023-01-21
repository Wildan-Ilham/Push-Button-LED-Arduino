const int ledPin = 3;
const int pbPin = 2;


bool ledMenyala = false;
bool lastState = false;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(pbPin, INPUT);
}

void loop() {

  bool statusLed = digitalRead(pbPin);

  if (statusLed == true && statusLed != lastState) {
    ledMenyala =! ledMenyala;
    if(ledMenyala){
      digitalWrite(ledPin,HIGH);
    }else{
      digitalWrite(ledPin,LOW);
    }
    delay(300);
  }
  lastState = statusLed;
}