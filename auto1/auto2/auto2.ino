#define A0Pin 0
int sensorVal = 0;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  sensorVal = analogRead(A0Pin);
  delay(1000);
  Serial.print("sensor 값 = ");
  Serial.println(sensorVal);

  if(sensorVal <= 450){
    Serial.println("축축");
  }
  if(sensorVal > 500 && sensorVal <= 1000){
    Serial.println("적당");
  }
  else if(sensorVal > 1000){
    Serial.println("건조");
  }
  // put your main code here, to run repeatedly:

}
