 int sensor=A0; //intialize sensor input pin
 float senval; //variable to store sensor reading
 int buzz=5;   //initialize output pin for buzzer
 int solval=6; //initialize output pin for triggering solenoid valve.
 int light=7;  //initialize output pin for turning off power supply.
 void setup()
 {
  pinMode(sensor,INPUT); //setting variable sensor as Input 
  pinMode(buzz,OUTPUT);  //setting variable buzz as Output 
  pinMode(solval,OUTPUT);//setting variable solval as Output
  pinMode(light,OUTPUT); //setting variable light as Output
  Serial.begin(9600);

}

void loop()
{
  senval=analogRead(sensor); //inputing values from sensor and store values to variable senval
  if(senval<60)
  {
      digitalWrite(buzz,HIGH);
      digitalWrite(solval,HIGH);
      digitalWrite(light,HIGH);
  }
  else
  {
      digitalWrite(buzz,LOW);
      digitalWrite(solval,LOW);
      digitalWrite(light,LOW);
  }
  delay(100);

}
