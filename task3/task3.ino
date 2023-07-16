byte a=8,b=9,c=4,d=3,e=2,f=7,g=6;

void setup() {
  // put your setup code here, to run once:
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(a, HIGH); 
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, HIGH); 
  digitalWrite(f, HIGH); 
  digitalWrite(g, LOW);
  delay(5000); 
  digitalWrite(a, LOW); 
  digitalWrite(b, HIGH); 
  digitalWrite(c, HIGH); 
  digitalWrite(d, LOW); 
  digitalWrite(e, LOW); 
  digitalWrite(f, LOW); 
  digitalWrite(g, LOW);
  delay(5000); 
  digitalWrite(a, HIGH); 
  digitalWrite(b, HIGH); 
  digitalWrite(c, LOW); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, HIGH); 
  digitalWrite(f, LOW); 
  digitalWrite(g, HIGH);
  delay(5000); 
}
