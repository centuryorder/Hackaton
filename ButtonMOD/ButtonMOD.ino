const int LED = RED_LED;
const int buttonPin = PUSH2;
const int ledPin =  GREEN_LED;
boolean pushed = false;

int buttonPushCounter = 0;
int buttonState = 0;
int lastButtonState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(P1_0, OUTPUT);
  Serial.println("Pin 1.0 set as output");

  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  
    if (buttonState == HIGH)
    {
      buttonPushCounter++;
      Serial.println("on");
    }
    else {
      Serial.println("off");
    }
  lastButtonState = buttonState;
  
  if (buttonPushCounter % 2 == 0) {
      digitalWrite(ledPin, HIGH);
       Serial.println("Green LED on");
       digitalWrite(LED, HIGH);
       Serial.println("Red LED on");
       delay(500);
       digitalWrite(LED, LOW);
       Serial.println("Red LED off");
       delay(500);
     }
     else
     {
       digitalWrite(ledPin, LOW);
       digitalWrite(LED, LOW);
       Serial.println("Green LED off");
       Serial.println("Red LED off");
      delay(5000);
     }
   }
