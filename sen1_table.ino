//------------------------------------------------------------------------//
//
//                      ***FUNCTION DEFINITIONS***
//
//

/*---------------------------FIND THE COLOR------------------------------*/

bool sen1Red(){
// ----------------------RED-----------------------
  if (dataR >= 95 && dataR <= 99){
    if (dataG >= 42 && dataG <= 49){
      if (dataB >= 51 && dataB <= 55){
        Serial.print("RED\n");
        return true;
        }
      }
    }
    return false;
}

bool sen1Orange(){
    //---------------------ORANGE----------------------
  if (dataR >= 70 && dataR <= 74){
    if (dataG >= 32 && dataG <= 36){
      if (dataB >= 32 && dataB <= 36){
        Serial.print("ORANGE\n");
        return true;
        }
      }
    }
    return false;
}

bool sen1Yellow(){
    //---------------------YELLOW----------------------
  if (dataR >= 54 && dataR <= 58){
    if (dataG >= 21 && dataG <= 25){
      if (dataB >= 12 && dataB <= 16){
        Serial.print("YELLOW\n");
        return true;
        }
      }
    }
    return false;
}

bool sen1Green(){
    //---------------------GREEN-----------------------
  if (dataR >= 42 && dataR <= 46){
    if (dataG >= 48 && dataG <= 52){
      if (dataB >= 47 && dataB <= 51){
        Serial.print("GREEN\n");
        return true;
        }
      }
    }
    return false;
}

bool sen1Blue(){
  //---------------------BLUE-------------------------
  if (dataR >= 55 && dataR <= 59){
    if (dataG >= 38 && dataG <= 42){
      if (dataB >= 54 && dataB <= 58){
        Serial.print("BLUE\n");
        return true;
        }
      }
    }
    return false;
}
bool sen1Purple(){
    //---------------------PURPLE-----------------------
  if (dataR >= 33 && dataR <= 37){
    if (dataG >= 28 && dataG <= 32){
      if (dataB >= 34 && dataB <= 38){
        Serial.print("PURPLE\n");
        return true;
        }
      }
    }
    return false;
}

bool sen1Black(){
    //--------------------BLACK-------------------------
  if (dataR >= 44 && dataR <= 48){
    if (dataG >= 41 && dataG <= 45){
      if (dataB >= 49 && dataB <= 53){
        Serial.print("BLACK\n");
        return true;
        }
      }
    }
    return false;
}
