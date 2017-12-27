//int hallsensorpin=2;

int led=8;
void setup() {
  pinMode(led,OUTPUT);
  //pinMode(hallsensorpin,INPUT);
  // put your setup code here, to run once:
  Serial.begin(9600);
}
void loop() {
  int state=analogRead(A0);
  Serial.println(state);
  // put your main code here, to run repeatedly:
if(state >= 1000){
   digitalWrite(led,HIGH);
  }
else {
  digitalWrite(led,LOW);
  
  } 
 delay(100);  
}
