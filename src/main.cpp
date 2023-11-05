#include <Arduino.h>

// put function declarations here:
int add(int, int);

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  while (!Serial)
  {
    ; // wait for serial port to connect. Needed for native USB
  }
  int result = add(2, 3);
  Serial.println("Result: " + String(result));
}

void loop()
{
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int add(int x, int y)
{
  return x + y;
}
