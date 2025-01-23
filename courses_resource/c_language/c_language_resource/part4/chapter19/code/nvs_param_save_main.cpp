#include <Arduino.h>
#include <nvs_flash.h>
#include <nvs.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(1000);
  esp_err_t err = nvs_flash_init();
  if (err == ESP_ERR_NVS_NO_FREE_PAGES || err == ESP_ERR_NVS_NEW_VERSION_FOUND) {
    ESP_ERROR_CHECK(nvs_flash_erase());
    err = nvs_flash_init();
  }
  ESP_ERROR_CHECK(err);
  Serial.println("NVS Flash initialized");
  nvs_handle_t nvs_handle;
  err = nvs_open("storage", NVS_READWRITE, &nvs_handle);
  if(err != ESP_OK) {
    Serial.println("Error opening NVS handle");
  } else {
    Serial.println("NVS handle opened");
    uint32_t value = 0;
    err = nvs_get_u32(nvs_handle, "value", &value);
    if(err != ESP_OK) {
      Serial.println("Error reading value from NVS");
    } else {
      Serial.print("Value read from NVS: ");
      Serial.println(value);
    }
    value++;
    err = nvs_set_u32(nvs_handle, "value", value);
    if(err != ESP_OK) {
      Serial.println("Error writing value to NVS");
    } else {
      Serial.print("Value written to NVS: ");
      Serial.println(value);
    }
    err = nvs_commit(nvs_handle);
    if(err != ESP_OK) {
      Serial.println("Error committing changes to NVS");
    } else {
      Serial.println("Changes committed to NVS");
    }
    nvs_close(nvs_handle);
    Serial.println("NVS handle closed");
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}

