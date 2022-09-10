

// the setup function runs once when you press reset or power the board
void setup() 
{
  // initialize digital pin 12 as an output.
  pinMode(12, OUTPUT);
}
void dot()           //when the dot function is called then there is delay of only one second in both glowing and fading 
{
  digitalWrite(12, HIGH);     //led glows
  delay(1000);
  digitalWrite(12, LOW);      //led fades
  delay(1000);
}

void dash()             //when the dash function is called then the led glows for 3 seconds and fades out for one second.
{
  digitalWrite(12, HIGH);        //led glows 
  delay(3000);
  digitalWrite(12, LOW);            //led fades
  delay(1000);
}

// the loop function runs over and over again forever
void loop() {
  // This is the morse code for my name 'Disha'
  dash();
  dot();
  dot();
  dot();
  dot();
  dot();
  dot();
  dot();
  dot();
  dot();
  dot();
  dot();
  dot();
  dash();
}
