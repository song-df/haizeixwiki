#include <Arduino.h>
#include <esp_partition.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(1000);

  esp_partition_iterator_t it = esp_partition_find(ESP_PARTITION_TYPE_ANY, ESP_PARTITION_SUBTYPE_ANY, NULL);
  if (it == NULL) {
    Serial.println("No partition found");
    return ;
  } 
  Serial.println("# Name,   Type, SubType, Offset,  Size, Flags");
  while(it != NULL) {
    const esp_partition_t *partition = esp_partition_get(it);
    Serial.printf("%s,   %s,   %d,  0x%x,  0x%x, %c\n", partition->label,partition->type==1?"data":"app",partition->subtype,partition->address,partition->size,partition->encrypted?'S':'N');
    it = esp_partition_next(it);
  }
}
void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}