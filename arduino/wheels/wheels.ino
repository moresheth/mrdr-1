// These pin numbers are the position on the Arduino board,
// from the driver board. The Motor pins have to use the ones
// with wavy lines, which means they are Pulse Width Modulated.

int rightDirectionPin = 2; // Channel 2, DIR
int rightMotorPin = 3;     // Channel 2, PWM
int leftDirectionPin = 4;  // Channel 4, DIR
int leftMotorPin = 5;      // Channel 4, PWM

// All we have to do to initialize the pins,
// and tell it we are moving forward.
void setup()
{
  pinMode(rightMotorPin, OUTPUT);
  pinMode(rightDirectionPin, OUTPUT);
  pinMode(leftMotorPin, OUTPUT);
  pinMode(leftDirectionPin, OUTPUT);
  // Only moving forward for now.
  digitalWrite(rightDirectionPin, 1); 
  digitalWrite(leftDirectionPin, 1); 
}

// The function analogWrite( pin, speed ) controls the speed 0-255.
void loop()
{
  // Go as fast as you can.
  analogWrite(rightMotorPin, 255);
  analogWrite(leftMotorPin, 255);
  // For 5 seconds.
  delay(5000);
  // Then stop.
  analogWrite(rightMotorPin, 0);
  analogWrite(leftMotorPin, 0);
  // And wait another 5 seconds.
  delay(5000);
}

