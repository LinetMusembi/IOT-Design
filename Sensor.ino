// C++ code
//
int distanceThreshold = 0;
int cm = 0;
int inches =0;


void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
   pinMode(11, OUTPUT);
}

void loop()
{
  
  digitalWrite(9, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(9, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
   
  digitalWrite(10, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(10, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
   
  digitalWrite(11, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

  if(cm>distanceThreshold){
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
    digitalWrite(11, LOW);
}
if(cm>distanceThreshold && cm >distanceThreshold -200){
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
    digitalWrite(11, LOW);
}
if(cm>distanceThreshold -350 && cm >distanceThreshold -450){
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
}
if(cm>distanceThreshold -450 && cm >distanceThreshold -550){
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
}
if(cm>distanceThreshold -300){
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
}
delay(400);
}