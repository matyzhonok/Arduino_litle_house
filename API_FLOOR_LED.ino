/* 1 этаж */
void Floor_1_Led_On (WiFiClient client){
  digitalWrite(FLOOR_1_PIN, false);
  print_to_web("{\"status\": \"Ok\"}", client, false);
}

void Floor_1_Led_Off(WiFiClient client) {
  digitalWrite(FLOOR_1_PIN, true);
  print_to_web("{\"status\": \"Ok\"}", client, false);
}

void Floor_1_Led_Status(WiFiClient client) {
  String str = String("{\"FLOOR_1_LED status\": \"");
  if (get_Floor_1_Led_Status()) {
    str = str + String("On");
  } else {
    str = str + String("Off");
  }
  str = str + String("\"}");
  print_to_web(str, client, false);  
}

boolean get_Floor_1_Led_Status () {
  return (!digitalRead(FLOOR_1_PIN));
}
/* -----------------------------------------------------------------*/

/* 2 этаж */
void Floor_2_Led_On (WiFiClient client){
  digitalWrite(FLOOR_2_PIN, false);
  print_to_web("{\"status\": \"Ok\"}", client, false);
}

void Floor_2_Led_Off(WiFiClient client) {
  digitalWrite(FLOOR_2_PIN, true);
  print_to_web("{\"status\": \"Ok\"}", client, false);
}

void Floor_2_Led_Status(WiFiClient client) {
  String str = String("{\"FLOOR_2_LED status\": \"");
  if (get_Floor_2_Led_Status()) {
    str = str + String("On");
  } else {
    str = str + String("Off");
  }
  str = str + String("\"}");
  print_to_web(str, client, false);  
}

boolean get_Floor_2_Led_Status () {
  return (!digitalRead(FLOOR_2_PIN));
}
