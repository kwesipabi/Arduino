const int LED = 3;
const int buzzer = 2;



void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int lightValue = analogRead(A0);
  lightValue = map(lightValue, 0, 1023, 0, 100);
  if (lightValue > 50) {                             // This sets off the buzzer and led if the lightValue(mapped) > 50
    digitalWrite(LED, HIGH);
    tone(buzzer, 2000);
  } else{                                           // This turns the led and buzzer off if the light value is not > 50
    digitalWrite(LED, LOW);
    noTone(buzzer);
    }
}
