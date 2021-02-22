void run_Request (String requestString, WiFiClient client) {
  
  if (requestString.indexOf(F("/main/status")) != -1){
    request_status(client);
    Serial.println("Запрос статуса");
  }
  
  if (requestString.indexOf(F("/main/info")) != -1){
    Serial.println("info");
  }

  /* ------------------------------------------------------------------------------------------*/
  
  if (requestString.indexOf(F("/Floor_1/LED/STATUS")) != -1){
    Serial.println("Свет на 1 этаже: вывести статус");
    Floor_1_Led_Status(client);
  }

  if (requestString.indexOf(F("/Floor_1/LED/ON")) != -1){
    Serial.println("Свет на 1 этаже: Включить освещение");
    Floor_1_Led_On(client);
  }
  
  if (requestString.indexOf(F("/Floor_1/LED/OFF")) != -1){
    Serial.println("Свет на 1 этаже: Выключить освещение");
    Floor_1_Led_Off(client);
  }

  /* ------------------------------------------------------------------------------------------*/

  if (requestString.indexOf(F("/Floor_2/LED/STATUS")) != -1){
    Serial.println("Свет на 2 этаже: вывести статус");
    Floor_2_Led_Status(client);
  }

  if (requestString.indexOf(F("/Floor_2/LED/ON")) != -1){
    Serial.println("Свет на 2 этаже: Включить освещение");
    Floor_2_Led_On(client);
  }
  
  if (requestString.indexOf(F("/Floor_2/LED/OFF")) != -1){
    Serial.println("Свет на 2 этаже: Выключить освещение");
    Floor_2_Led_Off(client);
  }
 
  /* ------------------------------------------------------------------------------------------*/

  if (requestString.indexOf(F("/BUILTIN_LED/LED/STATUS")) != -1){
    Serial.println("Встроенный светодиод: вывести статус");
    BUILTIN_LED_Status(client);
  }

  if (requestString.indexOf(F("/BUILTIN_LED/LED/ON")) != -1){
    Serial.println("Встроенный светодиод: Включить");
    BUILTIN_LED_On(client);
  }
  
  if (requestString.indexOf(F("/BUILTIN_LED/LED/OFF")) != -1){
    Serial.println("Встроенный светодиод: Выключить");
    BUILTIN_LED_Off(client);
  }

}
