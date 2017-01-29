bool tieSelect(int sColor) {
    senseColor(ts2, ts3, tout);
    Serial.print(dataR);
    Serial.print(", ");
    Serial.print(dataG);
    Serial.print(", ");
    Serial.print(dataB);
    Serial.print("\n");
  switch (sColor) {
  
    case 0:
      while (cycleCount <= 5) {
        delay(1500);        
        senseColor(ts2, ts3, tout);
        if (sen1Blue()) {
          Serial.print("!!! FOUND A BLUE  MATCHING TIE !!!\n");
          return true;
        }
        if (sen1Black()) {
          Serial.print ("!!! FOUND A BLACK MATCHING TIE !!!\n");
          return true;
        }
        if (sen1White()) {
          Serial.print("!!! FOUND A WHITE MATCHING TIE !!!\n");
          return true;
        }
        rackServo.write(108);
        delay(725);
        rackServo.write(90);       
        cycleCount++;
      }
      Serial.print("!!! NO GOOD MATCH FOUND !!!\n");
      return false;
      break;
    
    case 1:
      while (cycleCount <= 5) {
        delay(1500);
        senseColor(ts2, ts3, tout);
        if (sen1White()) {
          Serial.print("!!! FOUND A WHITE MATCHING TIE !!!\n");
          return true;
        }
        if (sen1Blue()) {
          Serial.print ("!!! FOUND A BLUE MATCHING TIE !!!\n");
          return true;
        }
        rackServo.write(108);
        delay(850);
        rackServo.write(90);
        cycleCount++;
      }
      Serial.print("!!! NO GOOD MATCH FOUND !!!\n");
      return false;
      break;
    
    case 2:
      while (cycleCount <= 5) {
        delay(1500);        
        senseColor(ts2, ts3, tout);
        if (sen1Blue()) {
          Serial.print("!!! FOUND A BLUE MATCHING TIE !!!\n");
          return true;
        }
        if (sen1White()) {
          Serial.print ("!!! FOUND A WHITE MATCHING TIE !!!\n");
          return true;
        }
        rackServo.write(108);
        delay(850);
        rackServo.write(90);
        cycleCount++;
      }
      Serial.print("!!! NO GOOD MATCH FOUND !!!\n");
      return false;
      break;
    
    case 3:
      while (cycleCount <= 5) {
        delay(1500);        
        senseColor(ts2, ts3, tout);
        if (sen1Black()) {
          Serial.print ("!!! FOUND A BLACK MATCHING TIE !!!\n");
          return true;
        }
        if (sen1Green()) {
          Serial.print("!!! FOUND A GREEN MATCHING TIE !!!\n");
          return true;
        }
        rackServo.write(108);
        delay(850);
        rackServo.write(90);
        cycleCount++;
      }
      Serial.print("!!! NO GOOD MATCH FOUND !!!\n");
      return false;
      break;
    
    case 4:
      while (cycleCount <= 5) {
        delay(1500);       
        senseColor(ts2, ts3, tout);
        if (sen1Red()) {
          Serial.print("!!! FOUND A RED MATCHING TIE !!!\n");
          return true;
        }
        if (sen1White()) {
          Serial.print ("!!! FOUND A WHITE MATCHING TIE !!!\n");
          return true;
        }
        if (sen1Yellow()) {
          Serial.print("!!! FOUND A YELLOW MATCHING TIE !!!\n");
          return true;
        }
        rackServo.write(108);
        delay(850);
        rackServo.write(90);
        cycleCount++;
      }
      Serial.print("!!! NO GOOD MATCH FOUND !!!\n");
      return false;
      break;
    
    case 5:
      while (cycleCount <= 5) {
        delay(1500);        
        senseColor(ts2, ts3, tout);
        if (sen1Purple()) {
          Serial.print("!!! FOUND A PURPLE MATCHING TIE !!!\n");
          return true;
        }
        if (sen1White()) {
          Serial.print ("!!! FOUND A WHITE MATCHING TIE !!!\n");
          return true;
        }
        if (sen1Black()) {
          Serial.print("!!! FOUND A BLACK MATCHING TIE !!!\n");
          return true;
        }
        rackServo.write(108);
        delay(850);
        rackServo.write(90);
        cycleCount++;
      }
      Serial.print("!!! NO GOOD MATCH FOUND !!!\n");
      return false;
      break;
      
    case 6:
      while (cycleCount <= 5) {
        delay(1500);
        senseColor(ts2, ts3, tout);
        if (sen1Red()) {
          Serial.print("!!! FOUND A RED MATCHING TIE !!!\n");
          return foundTie = true;
        }
        if (sen1White()) {
          Serial.print ("!!! FOUND A WHITE MATCHING TIE !!!\n");
          return true;
        }
        if (sen1Yellow()) {
          Serial.print("!!! FOUND A YELLOW MATCHING TIE !!!\n");
          return true;
        }
        rackServo.write(108);
        delay(850);
        rackServo.write(90);
        cycleCount++;
      }
      Serial.print("!!! NO GOOD MATCH FOUND !!!\n");
      return false;
      break;
  }
}
