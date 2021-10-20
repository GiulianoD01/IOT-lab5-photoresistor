void setup() {
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  int value = analogRead(A0);
  Serial.println("Analog value : ");
  Serial.println(value);
  delay(250);


      if (value < 120 && value >30){

        digitalWrite(4, HIGH);
      }

      else if (value < 250 && value > 120){

        //digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      }

      else if (value < 400  && value > 250){
        //digitalWrite(4, HIGH);
        //digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
      }

      else if (value < 600 && value > 400){
       // digitalWrite(4, HIGH);
       // digitalWrite(5, HIGH);
       // digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
      }

      else if (value < 800 && value < 600){

       // digitalWrite(4, HIGH);
      //  digitalWrite(5, HIGH);
        //digitalWrite(6, HIGH);
        //digitalWrite(7, HIGH);
        digitalWrite(8, HIGH);
      }

      else if (value < 900 && value > 800){

       // digitalWrite(4, HIGH);
       // digitalWrite(5, HIGH);
      //  digitalWrite(6, HIGH);
      //  digitalWrite(7, HIGH);
      //  digitalWrite(8, HIGH);
        digitalWrite(9, HIGH);
      }
      
      else{
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      }
  }
