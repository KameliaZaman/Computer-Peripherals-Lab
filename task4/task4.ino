int MotorA_IN1=2;
int MotorA_IN2=3;
int MotorB_IN3=4;
int MotorB_IN4=5;
int MotorA_PWM=9;
int MotorB_PWM=10;
int spd=150;

char sms; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(MotorA_IN1,OUTPUT);
  pinMode(MotorA_IN2,OUTPUT);
  pinMode(MotorB_IN3,OUTPUT);
  pinMode(MotorB_IN4,OUTPUT);
  pinMode(MotorA_PWM,OUTPUT);
  pinMode(MotorB_PWM,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    sms=Serial.read();
  }
  analogWrite(MotorA_PWM,spd);
  analogWrite(MotorB_PWM,spd);
  if(sms=='S')
  {
    RobotStop();
  }
  if(sms=='F')
  {
    RobotForward();
  }
  if(sms=='B')
  {
    RobotBackward();
  }
  if(sms=='R')
  {
    RobotRight();
  }
  if(sms=='L')
  {
    RobotLeft();
  }
  if(sms=='0')
  {
    spd=0;
  }
  if(sms=='1')
  {
    spd=30;
  }
  if(sms=='2')
  {
    spd=60;
  }
  if(sms=='3')
  {
    spd=90;
  }
  if(sms=='4')
  {
    spd=120;
  }
  if(sms=='5')
  {
    spd=150;
  }
  if(sms=='6')
  {
    spd=180;
  }
  if(sms=='7')
  {
    spd=210;
  }
  if(sms=='8')
  {
    spd=240;
  }
  if(sms=='9')
  {
    spd=255;
  }
}

void RobotForward()
{
  digitalWrite(MotorA_IN1,HIGH);
  digitalWrite(MotorA_IN2,LOW);
  digitalWrite(MotorB_IN3,HIGH);
  digitalWrite(MotorB_IN4,LOW);
}

void RobotBackward()
{
  digitalWrite(MotorA_IN1,LOW);
  digitalWrite(MotorA_IN2,HIGH);
  digitalWrite(MotorB_IN3,LOW);
  digitalWrite(MotorB_IN4,HIGH);
}

void RobotRight()
{
  digitalWrite(MotorA_IN1,LOW);
  digitalWrite(MotorA_IN2,LOW);
  digitalWrite(MotorB_IN3,HIGH);
  digitalWrite(MotorB_IN4,LOW);
}

void RobotLeft()
{
  digitalWrite(MotorA_IN1,HIGH);
  digitalWrite(MotorA_IN2,LOW);
  digitalWrite(MotorB_IN3,LOW);
  digitalWrite(MotorB_IN4,LOW);
}

void RobotStop()
{
  digitalWrite(MotorA_IN1,LOW);
  digitalWrite(MotorA_IN2,LOW);
  digitalWrite(MotorB_IN3,LOW);
  digitalWrite(MotorB_IN4,LOW);
}
