/* To control speed and direction of one DC motor */

//LeftMotor
const byte MotorLeftA1Pin = 23;
const byte MotorLeftA2Pin = 33;
const byte MotorLeftEnAPin = 25;

//Paramter for PWM signal
const int MotorLeftChannel = 0;
const int frequency = 120000;
const int resolution = 12;

//Parameters for speed
int Speed = 4095;

void setup()
{
  pinMode(MotorLeftA1Pin, OUTPUT);
  pinMode(MotorLeftA2Pin, OUTPUT);
  pinMode(MotorLeftEnAPin, OUTPUT);
  ledcSetup(MotorLeftChannel, frequency, resolution);
  ledcAttachPin(MotorLeftEnAPin, MotorLeftChannel);
}

void loop()
{
  digitalWrite(MotorLeftA1Pin, HIGH);
  digitalWrite(MotorLeftA2Pin, LOW);
  ledcWrite(MotorLeftChannel, Speed);
  delay(3000);
  digitalWrite(MotorLeftA1Pin, LOW);
  digitalWrite(MotorLeftA2Pin, LOW);
  delay(5000);
  digitalWrite(MotorLeftA1Pin, LOW);
  digitalWrite(MotorLeftA2Pin, HIGH);
  ledcWrite(MotorLeftChannel, Speed);
  delay(3000);
  digitalWrite(MotorLeftA1Pin, LOW);
  digitalWrite(MotorLeftA2Pin, LOW);
  delay(5000);
}
