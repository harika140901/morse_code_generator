String stringToMorse;
int buzz=7;
int led=4;
int note=1200;
int dotDelay=100;
int dashDelay=3*dotDelay;
void MorseDot(){
  tone(buzz,note,dotDelay);
    digitalWrite(led,HIGH);
  delay(dotDelay*2);
  digitalWrite(led,LOW);
 Serial.print(".");
}
void MorseDash(){
  tone(buzz,note,dashDelay);
  digitalWrite(led,HIGH);
  delay(dashDelay*2);
  digitalWrite(led,LOW);
  Serial.print("-");
}
void getMorse(char temp){
  switch (temp) {
    case 'a': 
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    delay(500);
    Serial.print(" ");
    break;
    case 'b':
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    delay(500);
    Serial.print(" ");
    break;
    case 'c':
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    delay(500);
    Serial.print(" ");
    break;
    case 'd':
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(100); 
    delay(500);
    Serial.print(" ");
    break;
    case 'e':
    MorseDot();
    delay(100);
    delay(500);
    Serial.print(" ");
    break;
    case 'f':
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    delay(500);
    Serial.print(" ");
    break;
    case 'g':
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    delay(500);
    Serial.print(" ");
    break;
    case 'h':
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    delay(500);
    Serial.print(" ");
    break;
    case 'i':
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    delay(500);
    Serial.print(" ");
    break;
    case 'j':
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    delay(500);
    Serial.print(" ");
    break;
    case 'k':
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    delay(500);
    Serial.print(" ");
    break;
    case 'l':
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    delay(500);
    Serial.print(" ");
    break;
    case 'm':
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    delay(500);
    Serial.print(" ");
    break;
    case 'n':
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    delay(500);
    Serial.print(" ");
    break;
    case 'o':
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    delay(500);
    Serial.print(" ");
    break;
    case 'p':
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    delay(500);
    Serial.print(" ");
    break;
    case 'q':
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    delay(500);
    Serial.print(" ");
    break;
    case 'r':
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    delay(500);
    Serial.print(" ");
    break;
    case 's':
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    delay(500);
    Serial.print(" ");
    break;
    case 't':
    MorseDash();
    delay(100);
    delay(500);
    Serial.print(" ");
    break;
    case 'u':
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    delay(500);
    Serial.print(" ");
    break;
    case 'v':
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    delay(500);
    Serial.print(" ");
    break;
    case 'w':
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    delay(500);
    Serial.print(" ");
    break;
    case 'x':
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    delay(500);
    Serial.print(" ");
    break;
    case 'y':
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    delay(500);
    Serial.print(" ");
    break;
    case 'z':
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);   
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    delay(500);
    Serial.print(" ");
    break;
    default:
       break;
}
}
void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzz, OUTPUT);
  Serial.begin(9600);
  while (! Serial); // Wait untilSerial is ready - Leonardo
  Serial.println("enter string to convert");
}

void loop() {
  while (Serial.available() == 0)   
    { //Wait for user input
      }  
    stringToMorse = Serial.readString();
    for(int i=0;i<sizeof(stringToMorse)-1;i++){
      char temp=stringToMorse[i];
      temp=toLowerCase(temp);
      getMorse(temp);
    }
}
