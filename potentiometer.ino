// this code controls and LEDs brightness with a potentiometer

int ledPin = 3;
int potPin = A3; // Potentiometer output connected to analog pin 3
int potVal = 0;

void setup() {

  pinMode(ledPin, OUTPUT);
  pinMode(potPin, INPUT);
  Serial.begin(9600);

}

void loop() {

  // Read the value of the potentiometer knob

  potVal = analogRead(potPin);   // read the potentiometer value at the input pin
  Serial.print("potval: "+ potVal);


  // Map the potentiometer value to 1-255

  int intensity = map(potVal, 1, 1024, 1, 255);

  Serial.print(intensity);

  // Output the respective value to the LED

  analogWrite(ledPin, intensity);

}