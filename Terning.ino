int timer = 150;

int ani_timer = 50;

int flashes;

long recmill = 0;

int yesRoll = 0;

long randomNo;

int rolls;
int rollsNo;



void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(2), intfunc, RISING);

  for (int thisPin = 3; thisPin < 10; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }

randomSeed(analogRead(0));

}


void loop() {


  if (yesRoll == 1) {
        Serial.print("Roll");
    roll();

    randomNo = random(1,7);
  Serial.println(randomNo);
    
for(flashes = 0; flashes <= 4; flashes +=1){
Serial.print("flash");
allOff();
delay(120);

    if(randomNo == 1){
      one();
    }
    else if(randomNo == 2){
      two();
    }

    else if(randomNo == 3){
      tree();
    }

    else if(randomNo == 4){
      four();
    }

    else if(randomNo == 5){
      five();
    }

    else if(randomNo == 6){
      six();
    }
}


delay(5000);

    yesRoll = 0;
    recmill = millis();
  }

  else {

if (millis() <= recmill + 20000){

    for (int i = 0; i < 5; i +=1){
    ani();
}
    for (int i = 0; i < 5; i +=1){
    aniRev();

}


roll();
  }

  allOff();
  }


}

void intfunc() {
  yesRoll = 1;
}

void ani() {

  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);

  delay(ani_timer);

  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);

  delay(ani_timer);
  digitalWrite(3, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);

  delay(ani_timer);
  digitalWrite(3, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);

  delay(ani_timer);
  digitalWrite(3, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(9, LOW);
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);

  delay(ani_timer);
  digitalWrite(3, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);

  delay(ani_timer);
}

void aniRev() {

  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);

  delay(ani_timer);

  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);

  delay(ani_timer);
  digitalWrite(3, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);

  delay(ani_timer);
  digitalWrite(3, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(9, LOW);
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);

  delay(ani_timer);
  digitalWrite(3, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);

  delay(ani_timer);
  digitalWrite(3, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);

  delay(ani_timer);
}




void six() {
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  delay(timer);
}
void five() {
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  delay(timer);
}
void four() {
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  delay(timer);
}
void tree() {
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  delay(timer);
}
void two() {
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(timer);
}
void one() {
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(timer);
}


void allOff(){
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);

}


void roll() {

rollsNo = random(4,15);
 
for(rolls = 0; rolls <= rollsNo ; rolls +=1){

randomNo = random(1,7);
 


    
    if(randomNo == 1){
      one();
    }
    else if(randomNo == 2){
      two();
    }

    else if(randomNo == 3){
      tree();
    }

    else if(randomNo == 4){
      four();
    }

    else if(randomNo == 5){
      five();
    }

    else if(randomNo == 6){
      six();
    }
  
  }
}