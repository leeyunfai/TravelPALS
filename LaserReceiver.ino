int analogPin = 0;
int val = 0; //measurement for light density
int buttonPin = 4;
int buttonState = 0;
int lightCathode = 9;


void setup() {
  Serial.begin(9600);
  pinMode(lightCathode, OUTPUT);
  delay(20000);
}

void loop() {
  val = analogRead(analogPin);    // read the input pin
  Serial.println(val);             // debug value

  if (val < 760)
  {
    digitalWrite(lightCathode, HIGH);
  }
}
