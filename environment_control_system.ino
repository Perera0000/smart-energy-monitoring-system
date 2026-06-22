const int inputPin = A0;  // Analog pin to read the signal from the signal generator
int sample;

void setup() {
  Serial.begin(9600);   // Start the serial communication at 115200 baud rate
}

void loop() {
  sample = analogRead(inputPin);  // Read the analog signal from signal generator
  Serial.println(sample);         // Send the value to the Serial Plotter
  delayMicroseconds(100);         // Adjust the sampling rate by changing this value
}
