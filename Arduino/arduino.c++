const int BATHROOM_LIGHT = 11;
const int BEDROOM_LIGHT = 12;
const int KITCHEN_LIGHT = 13;

void menu(){
  Serial.println("MENU");
  Serial.println("[1]. Turn on bathroom_light");
  Serial.println("[2]. Turn off bathroom_light");
  Serial.println("[3]. Turn on bedroom_light");
  Serial.println("[4]. Turn off bedroom_light");
  Serial.println("[5]. Turn on kitchen_light");
  Serial.println("[6]. Turn off kitchen_light");
  Serial.println("[7]. Turn on all lights");
  Serial.println("[8]. Turn off all lights");
  Serial.println("[9]. Blinking lights (3 times)");
  Serial.print("Select the option: ");
}

void setup() {
  pinMode(BATHROOM_LIGHT, OUTPUT);
  pinMode(BEDROOM_LIGHT, OUTPUT);
  pinMode(KITCHEN_LIGHT, OUTPUT);
  Serial.begin(9600);
  menu(); // Show menu on startup
}

// FIXED: Renamed from loop1 to loop
void loop() {
  if(Serial.available() > 0){
    char opt = Serial.read();
    
    // Clear buffer logic (optional but helps with newline characters)
    while(Serial.available() > 0) Serial.read(); 

    switch (opt){
      case '1':
        digitalWrite(BATHROOM_LIGHT, HIGH);
        Serial.println("Bathroom ON");
        break; // FIXED: Added break to stop code here
        
      case '2':
        digitalWrite(BATHROOM_LIGHT, LOW);
        Serial.println("Bathroom OFF");
        break; 
        
      case '3':
        digitalWrite(BEDROOM_LIGHT, HIGH);
        Serial.println("Bedroom ON");
        break; 
        
      case '4':
        digitalWrite(BEDROOM_LIGHT, LOW);
        Serial.println("Bedroom OFF");
        break; 
        
      case '5':
        digitalWrite(KITCHEN_LIGHT, HIGH);
        Serial.println("Kitchen ON");
        break; 
        
      case '6':
        digitalWrite(KITCHEN_LIGHT, LOW);
        Serial.println("Kitchen OFF");
        break; 
        
      case '7':
        digitalWrite(BATHROOM_LIGHT, HIGH);
        digitalWrite(BEDROOM_LIGHT, HIGH);
        digitalWrite(KITCHEN_LIGHT, HIGH);
        Serial.println("All Lights ON");
        break; 
        
      case '8':
        digitalWrite(BATHROOM_LIGHT, LOW);
        digitalWrite(BEDROOM_LIGHT, LOW);
        digitalWrite(KITCHEN_LIGHT, LOW);
        Serial.println("All Lights OFF");
        break; 
        
      case '9':
        Serial.println("Blinking sequence started...");
        // Simple loop to blink 3 times
        for(int i=0; i<3; i++) {
           digitalWrite(BATHROOM_LIGHT, HIGH);
           digitalWrite(BEDROOM_LIGHT, HIGH);
           digitalWrite(KITCHEN_LIGHT, HIGH);
           delay(500); // Wait 500ms
           digitalWrite(BATHROOM_LIGHT, LOW);
           digitalWrite(BEDROOM_LIGHT, LOW);
           digitalWrite(KITCHEN_LIGHT, LOW);
           delay(500);
        }
      break;
        
       default:
        // Handles invalid inputs (like newlines or wrong numbers)
        break;
    }
    
    // Show menu again after an action so the user knows what to do next
    if (opt != '\n' && opt != '\r') {
       menu();
    }
  }
}
          // trabajo en equipo
//Camilo fierro
//Jose Berdugo
//stiven Portilla 
//Nicolas Basante 