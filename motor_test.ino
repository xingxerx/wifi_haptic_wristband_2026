const int MOTOR_A_PIN = 2;   // XIAO GPIO D0 / GPIO2
const int MOTOR_B_PIN = 10;  // XIAO GPIO D10 / GPIO10

void setup() {
  Serial.begin(115200);
  pinMode(MOTOR_A_PIN, OUTPUT);
  pinMode(MOTOR_B_PIN, OUTPUT);
  Serial.println("[Øneiro] Dual Motor test starting");
}

void loop() {
  Serial.println("Motor A ON");
  digitalWrite(MOTOR_A_PIN, HIGH);
  delay(500);
  
  Serial.println("Motor A OFF");
  digitalWrite(MOTOR_A_PIN, LOW);
  delay(500);

  Serial.println("Motor B ON");
  digitalWrite(MOTOR_B_PIN, HIGH);
  delay(500);
  
  Serial.println("Motor B OFF");
  digitalWrite(MOTOR_B_PIN, LOW);
  delay(2000);
}