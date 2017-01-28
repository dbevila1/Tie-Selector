bool tieSelect(int sColor) {
  switch (sColor) {
  
    case 0:
      while (cycleCount <= 4) {
        delay(1500);        
        senseColor(ss2, ss3, sout);
        if (sen2Blue()) {
          Serial.print("!!! FOUND A BLUE  MATCHING TIE !!!\n");
          return true;
        }
        if (sen2Black()) {
          Serial.print ("!!! FOUND A BLACK MATCHING TIE !!!\n");
          return true;
        }
        if (sen2White()) {
          Serial.print("!!! FOUND A WHITE MATCHING TIE !!!\n");
          return true;
        }
        rackServo.write(107);
        rackServo.write(90);        
        cycleCount++;
      }
      Serial.print("!!! NO GOOD MATCH FOUND !!!\n");
      return false;
      break;
    
    case 1:
      while (cycleCount <= 4) {
        delay(1500);
        senseColor(ss2, ss3, sout);
        if (sen2White()) {
          Serial.print("!!! FOUND A WHITE MATCHING TIE !!!\n");
          return true;
        }
        if (sen2Blue()) {
          Serial.print ("!!! FOUND A BLUE MATCHING TIE !!!\n");
          return true;
        }
        rackServo.write(107);
        rackServo.write(90);
        cycleCount++;
      }
      Serial.print("!!! NO GOOD MATCH FOUND !!!\n");
      return false;
      break;
    
    case 2:
      while (cycleCount <= 4) {
        delay(1500);        
        senseColor(ss2, ss3, sout);
        if (sen2Blue()) {
          Serial.print("!!! FOUND A BLUE MATCHING TIE !!!\n");
          return true;
        }
        if (sen2White()) {
          Serial.print ("!!! FOUND A WHITE MATCHING TIE !!!\n");
          return true;
        }
        rackServo.write(107);
        rackServo.write(90);
        cycleCount++;
      }
      Serial.print("!!! NO GOOD MATCH FOUND !!!\n");
      return false;
      break;
    
    case 3:
      while (cycleCount <= 4) {
        delay(1500);        
        senseColor(ss2, ss3, sout);
        if (sen2Black()) {
          Serial.print ("!!! FOUND A BLACK MATCHING TIE !!!\n");
          return true;
        }
        if (sen2Green()) {
          Serial.print("!!! FOUND A GREEN MATCHING TIE !!!\n");
          return true;
        }
        rackServo.write(107);
        rackServo.write(90);
        cycleCount++;
      }
      Serial.print("!!! NO GOOD MATCH FOUND !!!\n");
      return false;
      break;
    
    case 4:
      while (cycleCount <= 4) {
        delay(1500);       
        senseColor(ss2, ss3, sout);
        if (sen2Red()) {
          Serial.print("!!! FOUND A RED MATCHING TIE !!!\n");
          return true;
        }
        if (sen2White()) {
          Serial.print ("!!! FOUND A WHITE MATCHING TIE !!!\n");
          return true;
        }
        if (sen2Yellow()) {
          Serial.print("!!! FOUND A YELLOW MATCHING TIE !!!\n");
          return true;
        }
        rackServo.write(107);
        rackServo.write(90);
        cycleCount++;
      }
      Serial.print("!!! NO GOOD MATCH FOUND !!!\n");
      return false;
      break;
    
    case 5:
      while (cycleCount <= 4) {
        delay(1500);        
        senseColor(ss2, ss3, sout);
        if (sen2Purple()) {
          Serial.print("!!! FOUND A PURPLE MATCHING TIE !!!\n");
          return true;
        }
        if (sen2White()) {
          Serial.print ("!!! FOUND A WHITE MATCHING TIE !!!\n");
          return true;
        }
        if (sen2Black()) {
          Serial.print("!!! FOUND A BLACK MATCHING TIE !!!\n");
          return true;
        }
        rackServo.write(107);
        rackServo.write(90);
        cycleCount++;
      }
      Serial.print("!!! NO GOOD MATCH FOUND !!!\n");
      return false;
      break;
      
    case 6:
      while (cycleCount <= 4) {
        delay(1500);
        senseColor(ss2, ss3, sout);
        if (sen2Red()) {
          Serial.print("!!! FOUND A RED MATCHING TIE !!!\n");
          return foundTie = true;
        }
        if (sen2White()) {
          Serial.print ("!!! FOUND A WHITE MATCHING TIE !!!\n");
          return true;
        }
        if (sen2Yellow()) {
          Serial.print("!!! FOUND A YELLOW MATCHING TIE !!!\n");
          return true;
        }
        rackServo.write(107);
        rackServo.write(90);
        cycleCount++;
      }
      Serial.print("!!! NO GOOD MATCH FOUND !!!\n");
      return false;
      break;
  }
}
