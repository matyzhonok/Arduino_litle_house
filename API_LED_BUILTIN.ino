void BUILTIN_LED_On (WiFiClient client){
  digitalWrite(LED_BUILTIN, false);
  print_to_web("{\"status\": \"Ok\"}", client, false);
}

void BUILTIN_LED_Off(WiFiClient client) {
  digitalWrite(LED_BUILTIN, true);
  print_to_web("{\"status\": \"Ok\"}", client, false);
}

void BUILTIN_LED_Status(WiFiClient client) {
  String str = String("{\"Led status\": \"");
  if (get_BUILTIN_LED_Status()) {
    str = str + String("On");
  } else {
    str = str + String("Off");
  }
  str = str + String("\"}");
  print_to_web(str, client, false);  
}

boolean get_BUILTIN_LED_Status () {
  return (!digitalRead(LED_BUILTIN));
}
