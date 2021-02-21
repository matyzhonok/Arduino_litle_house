void run_Request (String requestString, WiFiClient client) {
  
  if (requestString.indexOf(F("/main/status")) != -1){
    request_Info(client);
    Serial.println("Запрос статуса");
  }
  
  if (requestString.indexOf(F("/main/info")) != -1){
    Serial.println("info");
  }

  /* ------------------------------------------------------------------------------------------*/
  
  if (requestString.indexOf(F("/Floor_1/LED/status")) != -1){
    Serial.println("Свет на 1 этаже: вывести статус");
  }

  if (requestString.indexOf(F("/Floor_1/LED/ON")) != -1){
    Serial.println("Свет на 1 этаже: Включить освещение");
  }
  
  if (requestString.indexOf(F("/Floor_1/LED/OFF")) != -1){
    Serial.println("Свет на 1 этаже: Выключить освещение");
  }

  /* ------------------------------------------------------------------------------------------*/

  if (requestString.indexOf(F("/Floor_2/LED/status")) != -1){
    Serial.println("Свет на 1 этаже: вывести статус");
  }

  if (requestString.indexOf(F("/Floor_2/LED/ON")) != -1){
    Serial.println("Свет на 1 этаже: Включить освещение");
  }
  
  if (requestString.indexOf(F("/Floor_2/LED/OFF")) != -1){
    Serial.println("Свет на 1 этаже: Выключить освещение");
  }

}
