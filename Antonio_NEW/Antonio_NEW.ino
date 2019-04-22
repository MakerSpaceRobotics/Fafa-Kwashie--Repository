String command;
char c;
long randNumber;

void setup() {
  randomSeed(analogRead(0));
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  randNumber = random(-15, 20);

  if (Serial.available())
  {
    command = "";

    while (Serial.available())
    {
      delay(50);
      c = Serial.read();
      command += c;
    }

    Serial.println(command);
  }

  if (command == "idle")
  {
    delay(100);

  }
  else if (command == "turn on led")
  {
    LEDon();
  }
  else if (command == "turn led off")
  {
    LEDoff();
  }
  else if (command == "blink")
  {
    Blink();
  }
  else if (command == "tell me something")
  {
    Serial.print(randNumber);
    if  (randNumber  < 5)
    {
      Serial.println ("SinEad the evil is cool");
    }
    else if (randNumber  > 5)
    {
      Serial.println ("Antonio the god is cool");
    }
    else
    {
      Serial.println ("James the weeb needs communism");
    }

    command = "idle";
  }
  else
  {
    Serial.println ("-YOUR NOT OVER 90001-");
    command = "idle";
  }
}

void LEDon()
{
  digitalWrite(13, HIGH);
}

void LEDoff()
{
  digitalWrite(13, LOW);
}

void Blink()
{
  LEDon();
  delay(500);
  LEDoff();
  delay(500);
}



