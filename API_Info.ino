void request_status(WiFiClient client) {
  String str = String("{\"BuiltIn_Led status\": \"");
  if (get_BUILTIN_LED_Status()) {
    str = str + String("On");
  } else {
    str = str + String("Off");
  }
  str = str + "\", ";
  
  str = str + String("\"Floor_1_LED status\": \"");
  if (get_Floor_1_Led_Status()) {
    str = str + String("On");
  } else {
    str = str + String("Off");
  }
  str = str + "\", ";

  str = str + String("\"Floor_2_LED status\": \"");
  if (get_Floor_2_Led_Status()) {
    str = str + String("On");
  } else {
    str = str + String("Off");
  }
    
  str = str + String("\"}");
  print_to_web(str, client, false); 
}
