/*
  Rubix kids Hackathon, let 5 LED burn in different sequences
  
  bvo
*/


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pins 4,...,8 as an output.
  for (int i=4;i<9; i = i + 1) {
    pinMode(i, OUTPUT);
  }
}



// the loop function runs over and over again forever
void loop() {
  
  
  for (int j=1;j<3;j=j+1){
    
    // All LED together
    //
    for (int i=4;i<9; i = i + 1) {
      digitalWrite(i, HIGH);
    }
    delay(1000);
    for (int i=4;i<9; i = i + 1) {
      digitalWrite(i, LOW);
    }
    delay(1000);
    
  }
  delay(1000);
  
  // Per LED on/off forward
  //
  for (int i=4;i<9; i = i + 1) {
     digitalWrite(i, HIGH);
     delay(250);
     digitalWrite(i, LOW);
     delay(250);
  }
  delay(1000);
  
  // Per LED on/off backward
  //
  for (int i=9;i>3; i = i - 1) {
     digitalWrite(i, HIGH);
     delay(250);
     digitalWrite(i, LOW);
     delay(250);
  }
  delay(1000);
  
  // repeat twice
  //
  for (int j=1;j<3;j=j+1){
  
  // Per LED starting in middle to edge
  //
  for (int i=0;i<4; i = i + 1) {
     int af = 6 + i;
     int op = 6 - i;
     digitalWrite(af, HIGH);
     digitalWrite(op, HIGH);
     delay(250);
     digitalWrite(af, LOW);
     digitalWrite(op, LOW);
     delay(250);
  }
  delay(1000);
  
  // Per LED starting in edges to middle
  //
  for (int i=0;i<3; i = i + 1) {
     int af = 4 + i;
     int op = 8 - i;
     digitalWrite(af, HIGH);
     digitalWrite(op, HIGH);
     delay(250);
     digitalWrite(af, LOW);
     digitalWrite(op, LOW);
     delay(250);
  }
  delay(1000);
  
  }
  delay(1000);
  
}
