    #define led1 2
#define led2 3
#define led3 4 
#define led4 5
#define led5 6
#define but  7 
#define but2 8
int a=0;
int s=0;
void setup() {
  pinMode(but,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  Serial.begin(9600);
  

}

void loop() {
 //but 1 başlangıç
  int d=digitalRead(but2);
  int x=digitalRead(but);
  if (x==0){
     a=a+1;
     delay(100);
  }
  Serial.println(a);
  
 
     
     {
     if (a==1)
      digitalWrite(led1,HIGH);
     }
     {
      if (a==2)
      digitalWrite(led2,HIGH);
     }
     {
      if (a==3)
      digitalWrite(led3,HIGH);
     }
     {
      if (a==4)
      digitalWrite(led4,HIGH);
     }
  {
      if (a==5)
      digitalWrite(led5,HIGH);
  }

  if (a==6){
digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);
  }
  //but 1 bitiş
   
}