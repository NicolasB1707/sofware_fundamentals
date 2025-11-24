const int BATHROOM_LIGHT = 11;
const int BEDROOM_LIGHT = 12;
const int KITCHEN_LIGHT = 13;

void menu(){
  Serial.println("[1]. Turn on bathroom_light");
  Serial.println("[2]. Turn off bathroom_light");
  Serial.println("[3]. Turn on bedroom_light");
  Serial.println("[4]. Turn off bedroom_light");
  Serial.println("[5]. Turn on kitchen_light");
  Serial.println("[6]. Turn off kitchen_light");
  Serial.println("[7]. Turn on all lights");
  Serial.println("[8]. Turn off all lights");
  Serial.println("[9]. Blinking lights");
  Serial.println("Select the option: ");
}

void setup() {
  pinMode(BATHROOM_LIGHT, OUTPUT);
  pinMode(BEDROOM_LIGHT, OUTPUT);
  pinMode(KITCHEN_LIGHT, OUTPUT);
  Serial.begin(9600);
  menu();
}

void loop() {
  digitalWrite(BATHROOM_LIGHT, HIGH);
  delay(10);
  digitalWrite(BEDROOM_LIGHT, HIGH);
  delay(10);
  digitalWrite(KITCHEN_LIGHT, HIGH);
  delay(10);
  digitalWrite(BATHROOM_LIGHT, LOW);
  delay(100);
  digitalWrite(BEDROOM_LIGHT, LOW);
  delay(10);
  digitalWrite(KITCHEN_LIGHT, LOW);
  delay(1000);
}
void loop1() {
  if(Serial.available() > 0){
    char opt = Serial.read();
    
    switch (opt){
      case '1':
      digitalWrite(BATHROOM_LIGHT, HIGH);