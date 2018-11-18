/*
 * Derek Holsapple
 * 
 * Motion detection in the dark using Arduino 
 * Activates LED(With PWM to dim) in the Dark(LDR sensor) combined with a motion sensor (PIR)
 * 
 */

int LDR = 0;
int PIR = 5;
int LED = 6;

int brightness = 0;                 //Brightness variable

int pirState;
int ldrValue;

void setup() {
  //Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(PIR, INPUT);
  digitalWrite(LED, LOW);
}

void loop(){
  ldrValue = analogRead(LDR);
  //Serial.print("Analog reading = ");
  //Serial.println(ldrValue);






  if (ldrValue <= 900) { // dark look at previos sketch… serial read
    digitalWrite(PIR, LOW); //Turn off the PIR detector if it is light out
  } 
  else { // ldrValue => 900 dark
    pirState = digitalRead(PIR); //analog read the motion sensor data high/ or low
    if (pirState == HIGH) { // If motion detector in the dark detects then...

 analogWrite(LED, brightness); //Analog read the LED and send the brightness level

    brightness = brightness + 10; //increase brightness varible by 10, go up to 250
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness + 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness + 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness + 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness + 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness + 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness + 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness + 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness + 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness + 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness + 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness + 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness + 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness + 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness + 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness + 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness + 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness + 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness + 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness + 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness + 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness + 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness + 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness + 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness + 10;
    delay(100);
    analogWrite(LED, brightness);

  
      
    delay(90000); //1min and 30sec lights remain on at 250, "brightness level"
      
      
    brightness = brightness - 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness - 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness - 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness - 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness - 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness - 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness - 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness - 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness - 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness - 10;
    delay(100);
    analogWrite(LED, brightness); 
     brightness = brightness - 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness - 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness - 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness - 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness - 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness - 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness - 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness - 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness - 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness - 10;
    delay(100);
    analogWrite(LED, brightness); 
     brightness = brightness - 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness - 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness - 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness - 10;
    delay(100);
    analogWrite(LED, brightness);
    brightness = brightness - 10;
    delay(100);
    analogWrite(LED, brightness);

      
      digitalWrite(LED, LOW);
      delay(1000);
  
    
    } 


    
    else { // pirState == LOW
      digitalWrite(LED, LOW);
    }
  }
  // The processing in the Arduino occurs faster
  // than the response from the PIR, and adding this delay
  // eliminated a flickering on the LED
  delay(1000);
}

