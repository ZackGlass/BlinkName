//initializing variables
int led = D7;
int dot = 200;
int dash = 400;
int gap = 200;
int stop = 600;
int end = 5000;


void setup() {
    pinMode(led, OUTPUT);
}

void loop() {
    
    //Blinking my first name with the LED on D7

    
    //Z -------- Dash-Dash-Dot-Dot
    
    digitalWrite(led, HIGH);
    delay(dash);
    digitalWrite(led, LOW);
    delay(gap);
    
    digitalWrite(led, HIGH);
    delay(dash);
    digitalWrite(led, LOW);
    delay(gap);
    
    digitalWrite(led, HIGH);
    delay(dot);
    digitalWrite(led, LOW);
    delay(gap);
    
    digitalWrite(led, HIGH);
    delay(dot);
    digitalWrite(led, LOW);
    delay(stop);
    
    
    //A -------- Dot-Dash
    
    digitalWrite(led, HIGH);
    delay(dot);
    digitalWrite(led, LOW);
    delay(gap);
    
    digitalWrite(led, HIGH);
    delay(dash);
    digitalWrite(led, LOW);
    delay(stop);
    
    
    //C -------- Dash-Dot-Dash-Dot
    
    digitalWrite(led, HIGH);
    delay(dash);
    digitalWrite(led, LOW);
    delay(gap);
    
    digitalWrite(led, HIGH);
    delay(dot);
    digitalWrite(led, LOW);
    delay(gap);
    
    digitalWrite(led, HIGH);
    delay(dash);
    digitalWrite(led, LOW);
    delay(gap);
    
    digitalWrite(led, HIGH);
    delay(dot);
    digitalWrite(led, LOW);
    delay(stop);
    
    
    //K -------- Dash-Dot-Dash
    
    digitalWrite(led, HIGH);
    delay(dash);
    digitalWrite(led, LOW);
    delay(gap);
    
    digitalWrite(led, HIGH);
    delay(dot);
    digitalWrite(led, LOW);
    delay(gap);
    
    digitalWrite(led, HIGH);
    delay(dash);
    digitalWrite(led, LOW);
    delay(stop);
    
    delay(end);
    
    
    
    
}