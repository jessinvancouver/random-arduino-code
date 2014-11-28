//asigning variables

//pin numbers
//LED pin arrays
const int ledPins[] = {1,2,3,4,5,6,7,8,9,10,11,12};
const int pot_pin = A0;
//sensor variables
int pot_in = 0;

void setup() {
//asigning pin config
 for (int i=0 ; i = 12; i++){
  pinMode(ledPins[i], OUTPUT); 
  pinMode(13, OUTPUT);
 }

   // setup serial
  Serial.begin(9600);  
  
};

void loop() {
  
  pot_in = analogRead(pot_pin);
  if (pot_in > 100){
    digitalWrite(ledPins[1], HIGH);
  }
  if (pot_in < 200) {
    digitalWrite(ledPins[2], HIGH);
  } 
  if (pot_in < 300) {
    digitalWrite(ledPins[3], HIGH);
  }   
  if (pot_in < 400) {
    digitalWrite(ledPins[4], HIGH);
  }  
  if (pot_in < 500) {
    digitalWrite(ledPins[5], HIGH);
  }    
  if (pot_in < 600) {
    digitalWrite(ledPins[6], HIGH);
  }    
  if (pot_in < 700) {
    digitalWrite(ledPins[7], HIGH);
  }
  if (pot_in < 800) {
    digitalWrite(ledPins[8], HIGH);
  }    
  if (pot_in < 900) {
    digitalWrite(ledPins[9], HIGH);
  }      
   if (pot_in < 1000) {
    digitalWrite(ledPins[10], HIGH);
  }      
   if (pot_in < 1024) {
    digitalWrite(ledPins[11], HIGH);
  }      
};
