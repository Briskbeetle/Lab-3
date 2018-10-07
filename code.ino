int LED = 9;
int pot; // To hold the pot value
int potposition = A0;


void setup() {
  Serial.begin(9600);
  pinMode(LED,OUTPUT); //Set LED pin as an output 

}

// LED should dim up and down as you turn the pot
// The brightness value should be printed as well

void loop() {
  // read value from the pot
  pot = analogRead(potposition); // read the value from the pot
  // put pot value into analogValue
  pot = pot / 4; // This should ensure the range is 0 to 255
  //fit analogValue into a byte
  Serial.print(analogRead(potposition));

  analogWrite(LED,pot); //Fade the LED

  //PWM the LED with the brightness value

  
  // digitalRead(pin location);
  // digitalWrite(pin location,HIGH/LOW);
  // Serialprintln();
}
