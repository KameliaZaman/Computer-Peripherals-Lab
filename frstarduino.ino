int ledPin=7; //pass 5V or 7V

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);//defining which pin will do which work
  

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledPin,1); //what to output
delay(1000); //for how much time it will take to execute
digitalWrite(ledPin,0);
delay(1000);

}
