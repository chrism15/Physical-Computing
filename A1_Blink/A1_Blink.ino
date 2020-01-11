// setting the starting pin number to begin the loop, it will be changed
int pinNum = 13;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize the variable pinNum as an output.
  pinMode(pinNum, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
 // checking is pinNum is less than 11 because there are no connections past that pin
 if(pinNum < 11){
  // change pinNum to 13
  pinNum = 13; 
 }
 // writing to board to turn on and off the pinNum LED with a half second delay
 digitalWrite(pinNum, HIGH);
 delay(500);
 digitalWrite(pinNum,LOW);
 delay(500);
// setting pinNum to the next pin
 pinNum = pinNum - 1;
}
