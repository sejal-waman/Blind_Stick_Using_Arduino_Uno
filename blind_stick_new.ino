#define trigPin 9


#define echoPin 10


#define motor 7


#define buzzer 11


void setup()

{

pinMode(trigPin, OUTPUT);


pinMode(echoPin, INPUT);


pinMode(motor, OUTPUT);


pinMode(buzzer,OUTPUT);


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


if (distance < 70)     // This is where checking the distance you can change the value


{


digitalWrite(motor,HIGH);    // When the the distance below 100cm


digitalWrite(buzzer,HIGH);


} else


{


digitalWrite(motor,LOW);     // when greater than 100cm


digitalWrite(buzzer,LOW);


} delay(500);


}