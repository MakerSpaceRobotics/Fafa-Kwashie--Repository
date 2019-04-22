int x
int getInput() {
 
   digitalWrite(2, LOW);
  if (!digitalRead(5)) {
    Serial.println("2,5");
      digitalWrite(2, HIGH);
    return 1;
  }
  if (!digitalRead(6)) {
    Serial.println("2,6");
    digitalWrite(2, HIGH);
    return 4;
  }
  if (!digitalRead(7)) {
    Serial.println("2,7");
    return 7;
  }
  digitalWrite(2, HIGH);

  digitalWrite(3, LOW);
  if (!digitalRead(5)) {
    Serial.println("3,5");
    digitalWrite(3, HIGH);
    return 2;
  } 
  if (!digitalRead(6)) {
    Serial.println("3,6");
    digitalWrite(3, HIGH);
    return 5;
  }
  if (!digitalRead(7)) {
    Serial.println("3,7");
    digitalWrite(3, HIGH);
    return 8;
  }
  digitalWrite(3, HIGH);

  digitalWrite(4, LOW);
  if (!digitalRead(5)) {
    Serial.println("4,5");
      digitalWrite(4, HIGH);
    return 3;
  }
  if (!digitalRead(6)) {
    Serial.println("4,6");
    digitalWrite(4, HIGH);
    return 6;
  }
  if (!digitalRead(7)) {
    Serial.println("4,7");
    return 9;
  }
  digitalWrite(4, HIGH);
}


