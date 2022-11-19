//#include <SoftwareSerial.h>

//SoftwareSerial BT(10, 11);
String state;
void setup() {
  // put your setup code here, to run once:

  // BT.begin(9600);
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  
}
void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available()) {
    delay(10);
    char c = Serial.read();
    state += c;
  }

  if (state.length() > 0) {
    Serial.println (state);

    if (state == "Bulb ON") {
      digitalWrite(3, HIGH);

    }

    else if (state == "Bulb OFF") {
      digitalWrite(3, LOW);
    }
    if (state == "Fan ON") {
      digitalWrite(4, HIGH);

    }

    else if (state == "Fan OFF") {
      digitalWrite(4, LOW);
    }
    if (state == "Soc1 ON") {
      digitalWrite(5, HIGH);

    }

    else if (state == "Soc1 OFF") {
      digitalWrite(5, LOW);
    }
    if (state == "Soc2 ON") {
      digitalWrite(6, HIGH);

    }

    else if (state == "Soc2 OFF") {
      digitalWrite(6, LOW);
    }
    if (state == "Soc3 ON") {
      digitalWrite(7, HIGH);

    }

    else if (state == "Soc3 OFF") {
      digitalWrite(7, LOW);
    }
    if (state == "Soc4 ON") {
      digitalWrite(8, HIGH);

    }

    else if (state == "Soc4 OFF") {
      digitalWrite(8, LOW);
    }
    state = "";

  }
}
