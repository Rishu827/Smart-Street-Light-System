int ir1=2;
int ir2=3;
int ir3=4;
int ir4=5;

int led1=6;
int led2=7;
int led3=8;
int led4=9;
int led5=10;
int led6=11;
int green=13;
int prox1=0;
int prox2=0;
int prox3=0;
int prox4=0;


void setup() 
{
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
  pinMode(ir3,INPUT);
  pinMode(ir4,INPUT);

  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  
  pinMode(green,OUTPUT);

}

void loop() 
{
  //digitalWrite(led6,LOW);
  prox1=digitalRead(ir1);
  prox2=digitalRead(ir2);
  prox3=digitalRead(ir3);
  prox4=digitalRead(ir4);

  if(prox1==HIGH)
  {
     digitalWrite(led1,HIGH);
     digitalWrite(led2,HIGH);
     digitalWrite(led3,HIGH);
     digitalWrite(green,LOW);
  }
  else
  {
     digitalWrite(led1,LOW);
     digitalWrite(led2,LOW);
     digitalWrite(led3,LOW);
  }
 if(prox2==HIGH)
 {
     digitalWrite(led2,HIGH);
     digitalWrite(led3,HIGH);
     digitalWrite(led4,HIGH);
 } 
 else
 {
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW); 
 }
 if(prox3==HIGH)
 {
   digitalWrite(led3,HIGH);
   digitalWrite(led4,HIGH);
   digitalWrite(led5,HIGH);
 }
else
{
   digitalWrite(led3,LOW);
   digitalWrite(led4,LOW);
   digitalWrite(led5,LOW); 
}
if(prox4==HIGH)
{
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  digitalWrite(green,HIGH);
}
else
{
   digitalWrite(led4,LOW);
   digitalWrite(led5,LOW);
   digitalWrite(led6,LOW);
}
 /* if(prox1==HIGH && prox2==HIGH && prox3==HIGH $$ prox4==HIGH)
  *  {
  *    digitalWrite(red,HIGH);
  *    digitalWrite(green,LOW);
  *  } 
  *  else
  *  {
  *   digitalWrite(red,LOW);
  *   digitalWrite(green,HIGH);
  */
}



