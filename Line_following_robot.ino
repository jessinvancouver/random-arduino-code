/*
             ___
            / _ \                                                             
           / /_\ \__      __ ___  ___   ___   _ __ ___    ___                 
           |  _  |\ \ /\ / // _ \/ __| / _ \ | '_ ` _ \  / _ \                
           | | | | \ V  V /|  __/\__ \| (_) || | | | | ||  __/                
           \_| |_/  \_/\_/  \___||___/ \___/ |_| |_| |_| \___|                
                                                                              
                                                                              
 _  _                        __        _  _                  _                
| |(_)                      / _|      | || |                (_)               
| | _  _ __    ___  ______ | |_  ___  | || |  ___ __      __ _  _ __    __ _  
| || || '_ \  / _ \|______||  _|/ _ \ | || | / _ \\ \ /\ / /| || '_ \  / _` | 
| || || | | ||  __/        | | | (_) || || || (_) |\ V  V / | || | | || (_| | 
|_||_||_| |_| \___|        |_|  \___/ |_||_| \___/  \_/\_/  |_||_| |_| \__, | 
                                                                        __/ | 
                                                                       |___/  
                         _             _                                      
                        | |           | |                                     
                        | |__    ___  | |_                                    
                        | '_ \  / _ \ | __|                                   
                        | |_) || (_) || |_                                    
                        |_.__/  \___/  \__|    

\======================= Code by: Jesse "Jmaster" Rougeau  ======================/
 \==============================================================================/
*/





//------------assigning vars---------------

  //sensor pins
  int pinlight = A0;
  
  //debug pins
  int debug1 = 5
  int debug2 = 6
  
  //motors
  int leftdrive = 2;
  int rightdrive = 3;
  
  //dark(line) sensor value
  int dline = 800;
  //light (not line);
  int nline = 450;
  
//------------function library------------------

//left drive function for time (ms)
void Ldrivetime(int time) {
    digitalWrite(leftdrive, HIGH);
    delay(time);
    digitalWrite(leftdrive, LOW);
}


//right drive function for time (ms)
void Rdrivetime(int time) {
    digitalWrite(rightdrive, HIGH);
    delay(time);
    digitalWrite(rightdrive, LOW);
}

//left motor forward
void Ldriveforward(int dir) {
  if (int dir = 0) {
    digitalWrite(leftdrive, HIGH);
  };  
  if (int dir = 0) {
    digitalWrite(leftdrive, LOW;
  };    
}

//right motor forward
void Rdriveforward(int dir) {
  if (int dir = 1) {
    digitalWrite(rightdrive, HIGH);
  };
  if (int dir = 0) {
    digitalWrite(rightdrive, LOW);
  };
}


//----------program init--------------------------
void setup() {                
    // assigning pin modes
  //drive pins
  pinMode(rightdrive, OUTPUT);
  pinMode(leftdrive, OUTPUT); 
  //debug pins
  pinMode(debug1, OUTPUT);
  pinMode(debug2, OUTPUT); 
  //sensor pins
  pinMode(pinlight, INPUT);
  
}
//----------main program-------------------------
void loop() {
  
  lightval = analogRead(pinlight);
  
  //wobble left
  if (lightval < dline) {
    void Ldriveforward(1);
    void Rdriveforward(0);a
  }
  //wobble right
  if (lightval > dline) {
    void Rdriveforward(1);
    void Ldriveforward(0);
  }
}


