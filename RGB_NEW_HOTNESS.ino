//Dan, Michael, and Nate 
//1/27/2017

const int s0=2;
const int s1=4;
const int s2=8;
const int s3=12;
const int out=7;

int dataR, dataG, dataB;
enum color {red, orange, yellow, green, blue, purple, black};

void setup(){
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);
  pinMode(out, INPUT);
  Serial.begin(9600);

  digitalWrite(s0, HIGH);
  digitalWrite(s1, HIGH);
}

void loop(){

  int shirtColor;
  while (true){

    senseColor();
    if (dRed()) {shirtColor = red; break;}
    if (dOrange()) {shirtColor = orange; break;}
    if (dYellow()) {shirtColor = yellow; break;}
    if (dGreen()) {shirtColor = green; break;}
    if (dBlue()) {shirtColor = blue; break;}
    if (dPurple()) {shirtColor = purple; break;}
    if (dBlack()) {shirtColor = black; break;}
    
  }
 
  Serial.print(shirtColor);
  Serial.print("\n");
  
/*  // find color to match
  switch (shirtColor){
    case 0:
    // if we find a yellow tie
    Serial.print("Yellow\n");
    // else find a white tie
    Serial.print("White\n");
    // else find a black tie
    Serial.print("Black\n");
    // else default
    break;
    }

  delay(10000);  */
  // spin servo until tie of color is found
}

//------------------------------------------------------------------------//
//
//                      ***FUNCTION DEFINITIONS***
//
//
/*---------------------------SENSE THE COLOR------------------------------*/

void senseColor(){
  //****************SENSE RED COLOR********************************
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);
  dataR = pulseIn(out, LOW);

  //**************** SENSE GREEN COLOR*******************************
  digitalWrite(s2, LOW);
  digitalWrite(s3, HIGH);
  dataG = pulseIn(out, LOW);

  //**************** SENSE BLUE COLOR*******************************
  digitalWrite(s2, HIGH);
  digitalWrite(s3, HIGH);
  dataB = pulseIn(out, LOW);
}

/*---------------------------FIND THE COLOR------------------------------*/

bool dRed(){
// ----------------------RED-----------------------
  if (dataR >= 18 && dataR <= 25){
    if (dataG >= 45 && dataG <= 55){
      if (dataB >= 57 && dataB <= 63){
        Serial.print("RED\n");
        return true;
        }
      }
    }
    return false;
}

bool dOrange(){
    //---------------------ORANGE----------------------
  if (dataR >= 15 && dataR <= 20){
    if (dataG >= 35 && dataG <= 42){
      if (dataB >= 35 && dataB <= 40){
        Serial.print("ORANGE\n");
        return true;
        }
      }
    }
    return false;
}

bool dYellow(){
    //---------------------YELLOW----------------------
  if (dataR >= 10 && dataR <= 18){
    if (dataG >= 25 && dataG <= 32){
      if (dataB >= 16 && dataB <= 24){
        Serial.print("YELLOW\n");
        return true;
        }
      }
    }
    return false;
}

bool dGreen(){
    //---------------------GREEN-----------------------
  if (dataR >= 22 && dataR <= 30){
    if (dataG >= 28 && dataG <= 35){
      if (dataB >= 17 && dataB <= 23){
        Serial.print("GREEN\n");
        return true;
        }
      }
    }
    return false;
}

bool dBlue(){
  //---------------------BLUE-------------------------
  if (dataR >= 60 && dataR <= 67){
    if (dataG >= 52 && dataG <= 59){
      if (dataB >= 64 && dataB <= 70){
        Serial.print("BLUE\n");
        return true;
        }
      }
    }
    return false;
}
bool dPurple(){
    //---------------------PURPLE-----------------------
  if (dataR >= 30 && dataR <= 36){
    if (dataG >= 25 && dataG <= 31){
      if (dataB >= 33 && dataB <= 37){
        Serial.print("PURPLE\n");
        return true;
        }
      }
    }
    return false;
}

bool dBlack(){
    //--------------------BLACK-------------------------
  if (dataR >= 55 && dataR <= 60){
    if (dataG >= 58 && dataG <= 65){
      if (dataB >= 63 && dataB <= 70){
        Serial.print("BLACK\n");
        return true;
        }
      }
    }
    return false;
}


