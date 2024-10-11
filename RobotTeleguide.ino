char boutton;
int Speed;
int IN1=A2;
int IN2=A3;
int IN3=A4;
int IN4=A5;


void setup()                    // run once, when the sketch starts
{
 Serial.begin(9600);            // set the baud rate to 9600, same should be of your Serial Monitor
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
  
   digitalWrite(IN1,0);
            digitalWrite(IN2,0);
            digitalWrite(IN3,0);
            digitalWrite(IN4,0);
             

      }
void loop()

    {
    while (Serial.available() > 0)  
    {  
      delay(10);
      boutton = Serial.read() ;      
        // Serial.println(boutton); 
            if(boutton =='S'){         
      Serial.println("stop"); 
           
            digitalWrite(IN1,0);
            digitalWrite(IN2,0);
            digitalWrite(IN3,0);
            digitalWrite(IN4,0);
                 
            
            }
         
                /////////////marche simple///////////// 
    if(boutton =='F'){         
      Serial.println("emchi l9odem"); 
     



             digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW);
}
    if(boutton =='B'){  
       Serial.println("emchi lteli");
       Serial.println(Speed);
            



digitalWrite(IN1,LOW);
digitalWrite(IN2,HIGH);
digitalWrite(IN3,LOW);
digitalWrite(IN4,HIGH);
  
  
}
     if(boutton =='L'){  
      Serial.println("emchi Isaaar");
    






        digitalWrite(IN1,LOW);
digitalWrite(IN2,HIGH);
digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW);
}
     if(boutton == 'R'){  
      Serial.println("emchi imiiin");

            digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
digitalWrite(IN3,LOW);
digitalWrite(IN4,HIGH);
  
  
}
 if(boutton =='I'){  
       Serial.println("3aaaliii miiiin");
       Serial.println(Speed);
            
             digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
  
 if(boutton =='G'){  
       Serial.println("3aaaliii ISSSARR");
       Serial.println(Speed);
            
             digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW);


 }} }
 
 }
    
    
