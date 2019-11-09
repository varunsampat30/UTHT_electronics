#define TIME_DELAY 1000
int motor1_pin1 = 12;
int motor1_pin2 = 11;

int motor2_pin1 = 9;
int motor2_pin2 = 10;

void setup() {
//  Serial.begin(115200);
  // put your setup code here, to run once:
  pinMode(motor1_pin1, OUTPUT);
  pinMode(motor1_pin2, OUTPUT);

  pinMode(motor2_pin1, OUTPUT);
  pinMode(motor2_pin2, OUTPUT);
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
  moveAntiClockWise();
  delay(TIME_DELAY);
  stopMotors();
  delay(TIME_DELAY);
  moveClockWise();
  delay(TIME_DELAY);
  stopMotors();
  delay(TIME_DELAY);
}
