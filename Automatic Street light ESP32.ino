
int LED = 2;                      // LED connected to Pin 2
int IR = 4;                       // IR sensor OUTpin connected to Pin 4

void setup() {

  pinMode(LED, OUTPUT);
  pinMode(IR, INPUT);
  Serial.begin(115200);
}

void loop() {

  int statusSensor = digitalRead(IR);
  if (statusSensor == 0){         // If sensor detects something
    digitalWrite(LED, HIGH);      // Turn on LED
  }

  else                            // If sensor does not detect anything
  {
    digitalWrite(LED, LOW);       // Turn LED off
  }
  
}
