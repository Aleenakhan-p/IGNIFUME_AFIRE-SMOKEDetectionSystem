#define BUZZER_PIN 3 
#define SMOKE_THRESHOLD 300 
#define FLAME_THRESHOLD 400 // flame detected when value goes BELOW this 
void setup() 
{ 
 Serial.begin(9600); 
 pinMode(BUZZER_PIN, OUTPUT); 
} 
void loop() 
{ 
 int smokeValue = analogRead(A0); 
 int flameValue = analogRead(A1); 
 Serial.print("Smoke: "); 
 Serial.print(smokeValue); 
 Serial.print(" | Flame: "); 
 Serial.println(flameValue); 
 if (smokeValue > SMOKE_THRESHOLD || flameValue < FLAME_THRESHOLD) 
 { 
 analogWrite(BUZZER_PIN, 50); // Buzzer ON 
 } 
 else 
 { 
 analogWrite(BUZZER_PIN, 0); // Buzzer OFF 
 } 
 delay(1000); 
}
