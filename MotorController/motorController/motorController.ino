#define TIME_DELAY 1000
int motor1_pin1 = 12;
int motor1_pin2 = 11;

int motor2_pin1 = 9;
int motor2_pin2 = 10;

int enable_pin = 2; 
// this pin MUST be a pin that supports PWM.

void setup() {
//  Serial.begin(115200);
  pinMode(motor1_pin1, OUTPUT);
  pinMode(motor1_pin2, OUTPUT);

  pinMode(motor2_pin1, OUTPUT);
  pinMode(motor2_pin2, OUTPUT);

  pinMode(enable_pin, OUTPUT);
}

void moveAntiClockWise(){
  digitalWrite(motor1_pin1, LOW);
  digitalWrite(motor1_pin2, HIGH);
  digitalWrite(motor2_pin1, LOW);
  digitalWrite(motor2_pin2, HIGH);
}

void moveClockWise(){
  digitalWrite(motor1_pin1, HIGH);
  digitalWrite(motor1_pin2, LOW);
  digitalWrite(motor2_pin1, HIGH);
  digitalWrite(motor2_pin2, LOW);
}

void stopMotors(){
  digitalWrite(motor1_pin1, LOW);
  digitalWrite(motor1_pin2, LOW);
  digitalWrite(motor2_pin1, LOW);
  digitalWrite(motor2_pin2, LOW);
}

// has to be between 0-255
void setSpeed(int speed){
  analogWrite(enable_pin, speed);
}

void loop() {
  /*
  if(Serial.available() > 0){
    char readVar = Serial.read();
    Serial.println(readVar);
    if(readVar == 'k'){
      stoptMotors();
    } else if(readVar == 'l'){
      moveClockWise();
    } else if(readVar == 'j'){
      moveAntiClockWise();
    }
  }
  */
  setSpeed(250);
  moveAntiClockWise();
  delay(TIME_DELAY);
  stopMotors();
  delay(TIME_DELAY);
  setSpeed(150);
  moveClockWise();
  delay(TIME_DELAY);
  stopMotors();
  delay(TIME_DELAY);
}
