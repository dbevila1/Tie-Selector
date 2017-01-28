bool  sen2Red() {
  // ----------------------RED-----------------------
  if (dataR >= 33 && dataR <= 39) {
    if (dataG >= 49 && dataG <= 55) {
      if (dataB >= 75 && dataB <= 81) {
        Serial.print("RED\n");
        return true;
      }
    }
  }
  return  false ;
}

bool  sen2Orange() {
  //---------------------ORANGE----------------------
  if (dataR >= 24 && dataR <= 30) {
    if (dataG >= 41 && dataG <= 47) {
      if (dataB >= 48 && dataB <= 54) {
        Serial.print("ORANGE\n");
        return true;
      }
    }
  }
  return  false;
}

bool  sen2Yellow() {
  //---------------------YELLOW----------------------
  if (dataR >= 14 && dataR <= 20) {
    if (dataG >= 28 && dataG <= 34) {
      if (dataB >= 21 && dataB <= 27) {
        Serial.print("YELLOW\n");
        return true;
      }
    }
  }
  return false;
}

bool sen2Green() {
  //---------------------GREEN-----------------------
  if (dataR >= 53 && dataR <= 57) {
    if (dataG >= 48 && dataG <= 52) {
      if (dataB >= 64 && dataB <= 68) {
        Serial.print("GREEN\n");
        return true;
      }
    }
  }
  return false;
}

bool sen2Blue() {
  //---------------------BLUE-------------------------
  if (dataR >= 57 && dataR <= 63) {
    if (dataG >= 53 && dataG <= 59) {
      if (dataB >= 74 && dataB <= 80) {
        Serial.print("BLUE\n");
        return true;
      }
    }
  }
  return false;
}
bool sen2Purple() {
  //---------------------PURPLE-----------------------
  if (dataR >= 51 && dataR <= 57) {
    if (dataG >= 34 && dataG <= 40) {
      if (dataB >= 56 && dataB <= 62) {
        Serial.print("PURPLE\n");
        return true;
      }
    }
  }
  return false;
}

bool sen2Black() {
  //--------------------BLACK-------------------------
  if (dataR >= 53 && dataR <= 59) {
    if (dataG >= 44 && dataG <= 50) {
      if (dataB >= 65 && dataB <= 71) {
        Serial.print("BLACK\n");
        return true;
      }
    }
  }
  return false;
}

bool sen2White(){
  // -------------------WHITE------------------------
  if (dataR >= 15 && dataR <= 21){
    if (dataG >= 10 && dataG <= 16){
      if (dataB >= 15 && dataB <= 21){
        Serial.print("WHITE\n");
        return true;
        }
      }
    }
  return false; 
}
