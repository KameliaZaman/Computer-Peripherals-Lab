int MotorA_IN1=2;
int MotorA_IN2=3;
int MotorB_IN3=4;
int MotorB_IN4=5;
int MotorA_PWM=9;
int MotorB_PWM=10;
int spd=150;

void setup() {
  // put your setup code here, to run once:
  pinMode(MotorA_IN1,OUTPUT);
  pinMode(MotorA_IN2,OUTPUT);
  pinMode(MotorB_IN3,OUTPUT);
  pinMode(MotorB_IN4,OUTPUT);
  pinMode(MotorA_PWM,OUTPUT);
  pinMode(MotorB_PWM,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(MotorA_PWM,spd);
  analogWrite(MotorB_PWM,spd);
  digitalWrite(MotorA_IN1,HIGH);
  digitalWrite(MotorA_IN2,LOW);
  digitalWrite(MotorB_IN3,HIGH);
  digitalWrite(MotorB_IN4,LOW);
  delay(5000);
}
