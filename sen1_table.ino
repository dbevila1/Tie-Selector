//------------------------------------------------------------------------//
//
//                      ***FUNCTION DEFINITIONS***
//
//

/*---------------------------FIND THE COLOR------------------------------*/

bool sen1Red(){
// ----------------------RED-----------------------
  if (dataR >= 18 && dataR <= 26){
    if (dataG >= 36 && dataG <= 45){
      if (dataB >= 43 && dataB <= 54){
        Serial.print("RED\n");
        return true;
        }
      }
    }
    return false;
}

bool sen1Orange(){
    //---------------------ORANGE----------------------
  if (dataR >= 11 && dataR <= 16){
    if (dataG >= 27 && dataG <= 36){
      if (dataB >= 24 && dataB <= 33){
        Serial.print("ORANGE\n");
        return true;
        }
      }
    }
    return false;
}

bool sen1Yellow(){
    //---------------------YELLOW----------------------
  if (dataR >= 8 && dataR <= 15){
    if (dataG >= 16 && dataG <= 25){
      if (dataB >= 10 && dataB <= 18){
        Serial.print("YELLOW\n");
        return true;
        }
      }
    }
    return false;
}

bool sen1Green(){
    //---------------------GREEN-----------------------
  if (dataR >= 32 && dataR <= 44){
    if (dataG >= 38 && dataG <= 52){
      if (dataB >= 35 && dataB <= 48){
        Serial.print("GREEN\n");
        return true;
        }
      }
    }
    return false;
}

bool sen1Blue(){
  //---------------------BLUE-------------------------
  if (dataR >= 35 && dataR <= 44){
    if (dataG >= 27 && dataG <= 38){
      if (dataB >= 30 && dataB <= 45){
        Serial.print("BLUE\n");
        return true;
        }
      }
    }
    return false;
}
bool sen1Purple(){
    //---------------------PURPLE-----------------------
  if (dataR >= 27 && dataR <= 34){
    if (dataG >= 22 && dataG <= 27){
      if (dataB >= 25 && dataB <= 36){
        Serial.print("PURPLE\n");
        return true;
        }
      }
    }
    return false;
}

bool sen1Black(){
    //--------------------BLACK-------------------------
  if (dataR >= 42 && dataR <= 51){
    if (dataG >= 46 && dataG <= 52){
      if (dataB >= 47 && dataB <= 64){
        Serial.print("BLACK\n");
        return true;
        }
      }
    }
    return false;
}

bool sen1White(){
    //--------------------WHITE-------------------------
  if (dataR >= 10 && dataR <= 20){
    if (dataG >= 10 && dataG <= 20){
      if (dataB >= 10 && dataB <= 20){
        Serial.print("White\n");
        return true;
        }
      }
    }
    return false;
}

