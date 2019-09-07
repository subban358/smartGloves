#define trigPin 5 //D1

#define echoPin 4 //D2

#define motor 7

#define buzzer 6

void setup()
{
pinMode(trigPin, OUTPUT);

pinMode(echoPin, INPUT);

pinMode(motor, OUTPUT);

pinMode(buzzer,OUTPUT);
Serial.begin(9600);

}

void loop()

{

long duration, distance;

digitalWrite(trigPin, LOW);

delayMicroseconds(2);

digitalWrite(trigPin, HIGH);

delayMicroseconds(10);

digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance = (duration/2) / 29.1;

Serial.print("Distance: ");
Serial.println(distance);

if (distance < 50)// This is where checking the distanceyou can change the value

{

digitalWrite(motor,HIGH); // When the the distance below 100cm

digitalWrite(buzzer,HIGH);

} else

{

digitalWrite(motor,LOW);// when greater than 100cm

digitalWrite(buzzer,LOW);

} delay(500);

}
