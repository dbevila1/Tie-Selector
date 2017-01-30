
bool  sen2Red() {
  // ----------------------RED-----------------------
  if (dataR >= 30 && dataR <= 40) {
    if (dataG >= 48 && dataG <= 60) {
      if (dataB >= 72 && dataB <= 78) {
        Serial.print("RED\n");
        return true;
      }
    }
  }
  return  false ;
}

bool  sen2Orange() {
  //---------------------ORANGE----------------------
  if (dataR >= 21 && dataR <= 27) {
    if (dataG >= 37 && dataG <= 45) {
      if (dataB >= 53 && dataB <= 59) {
        Serial.print("ORANGE\n");
        return true;
      }
    }
  }
  return  false;
}

bool  sen2Yellow() {
  //---------------------YELLOW----------------------
  if (dataR >= 21 && dataR <= 29) {
    if (dataG >= 29 && dataG <= 35) {
      if (dataB >= 30 && dataB <= 36) {
        Serial.print("YELLOW\n");
        return true;
      }
    }
  }
  return false;
}

bool sen2Green() {
  //---------------------GREEN-----------------------
  if (dataR >= 52 && dataR <= 58) {
    if (dataG >= 44 && dataG <= 52) {
      if (dataB >= 61 && dataB <= 68) {
        Serial.print("GREEN\n");
        return true;
      }
    }
  }
  return false;
}

bool sen2Blue() {
  //---------------------BLUE-------------------------
  if (dataR >= 35 && dataR <= 45) {
    if (dataG >= 18 && dataG <= 25) {
      if (dataB >= 35 && dataB <= 45) {
        Serial.print("BLUE\n");
        return true;
      }
    }
  }
  return false;
}
bool sen2Purple() {
  //---------------------PURPLE-----------------------
  if (dataR >= 50 && dataR <= 57) {
    if (dataG >= 44 && dataG <= 53) {
      if (dataB >= 58 && dataB <= 72) {
        Serial.print("PURPLE\n");
        return true;
      }
    }
  }
  return false;
}

bool sen2Black() {
  //--------------------BLACK-------------------------
  if (dataR >= 58 && dataR <= 70) {
    if (dataG >= 44 && dataG <= 58) {
      if (dataB >= 62 && dataB <= 80) {
        Serial.print("BLACK\n");
        return true;
      }
    }
  }
  return false;
}

bool sen2White(){
  // -------------------WHITE------------------------
  if (dataR >= 10 && dataR <= 20){
    if (dataG >= 10&& dataG <= 20){
      if (dataB >= 12 && dataB <= 25){
        Serial.print("WHITE\n");
        return true;
        }
      }
    }
  return false; 
}
