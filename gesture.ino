void setup() {
 Serial.begin(9600);
 pinMode(2, INPUT_PULLUP);
 pinMode(3, INPUT_PULLUP);
 pinMode(4, INPUT_PULLUP);
 pinMode(5, INPUT_PULLUP);
 pinMode(6, INPUT_PULLUP);
 pinMode(7, INPUT_PULLUP);
 pinMode(8, INPUT_PULLUP);
 pinMode(9, INPUT_PULLUP);
 pinMode(10,INPUT_PULLUP);
 pinMode(11,INPUT_PULLUP);
 pinMode(12,INPUT_PULLUP);
 pinMode(13,INPUT_PULLUP);

}

void loop() {
   byte sensorVal1 = digitalRead(2);
   if (sensorVal1 == LOW)
   {
        Serial.println(1,DEC);
        delay(1000);
   }
   byte sensorVal2 = digitalRead(3);
   if (sensorVal2 == LOW)
   {
        Serial.println(2,DEC);
          delay(1000);
   }
   byte sensorVal3 = digitalRead(4);
   if (sensorVal3 == LOW)
   {
        Serial.println(3,DEC);
          delay(1000);
   }
   byte sensorVal4 = digitalRead(5);
   if (sensorVal4 == LOW)
   {
        Serial.println(4,DEC);
          delay(1000);
   }
   byte sensorVal5 = digitalRead(6);
   if (sensorVal5 == LOW)
   {
        Serial.println(5,DEC);
          delay(1000);
   }
   byte sensorVal6 = digitalRead(7);
   if (sensorVal6 == LOW)
   {
        Serial.println(6,DEC);
          delay(1000);
   }
   byte sensorVal7 = digitalRead(8);
   if (sensorVal7 == LOW)
   {
        Serial.println(7,DEC);
          delay(1000);
   }
   byte sensorVal8 = digitalRead(9);
   if (sensorVal8 == LOW)
   {
        Serial.println(8,DEC);
          delay(1000);
   }
   byte sensorVal9 = digitalRead(10);
   if (sensorVal9 == LOW)
   {
        Serial.println(9,DEC);
          delay(1000);
   }
   byte sensorVal10 = digitalRead(11);
   if (sensorVal10 == LOW)
   {
        Serial.println(10,DEC);
          delay(1000);
   }
   byte sensorVal11 = digitalRead(12);
   if (sensorVal11 == LOW)
   {
        Serial.println(11,DEC);
          delay(1000);
   }
    byte sensorVal12 = digitalRead(13);
   if (sensorVal12 == LOW)
   {
        Serial.println(12,DEC);
          delay(1000);
   }
   

}
