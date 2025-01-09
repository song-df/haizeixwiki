#include <esp_attr.h>
#include <esp_heap_caps.h>

int globalVar = 100;
static int staticGlobalVar = 200;
const int constVar = 300;
RTC_FAST_ATTR int rtcFastVar = 400;
RTC_SLOW_ATTR int rtcSlowVar = 500;
EXT_RAM_ATTR int psramVar = 600;

void dynamicMemoryAllocate(){
  int localVar;
  int localVar2;
  int localVar3;
  Serial.printf("localVar at %p\n",&localVar);
  Serial.printf("localVar2 at %p\n",&localVar2);
  Serial.printf("localVar3 at %p\n",&localVar3);
  int *heapAddr = (int*)malloc(10*sizeof(int));
  if(heapAddr == NULL){
    Serial.println("heap allocate memory fail!");
  }
  else{
    *heapAddr = 100;
    *(heapAddr+1) = 200;
    Serial.printf("1:%d,2:%d\n",*heapAddr,*(heapAddr+1));
    Serial.printf("heapAddr = %p\n",heapAddr);
    Serial.printf("after malloc heap size: %d\n",ESP.getFreeHeap());
    free(heapAddr);
    Serial.printf("after free heap size: %d\n",ESP.getFreeHeap());
  }

  if(psramFound()){
    Serial.println("psram is ready!");
  }
  else{
    Serial.println("psram not found!");
    //return ;
  }


  int *psramVarAddr = (int*)heap_caps_malloc(10*sizeof(int),MALLOC_CAP_SPIRAM);
  if(psramVarAddr == NULL){
    Serial.println("PSRAM malloc fail");
  }
  else{
    *psramVarAddr = 400;
    Serial.print("before free psram heap size: ");
    Serial.println(heap_caps_get_free_size(MALLOC_CAP_SPIRAM));
    heap_caps_free(psramVarAddr);
    Serial.print("after free psram heap size: ");
    Serial.println(heap_caps_get_free_size(MALLOC_CAP_SPIRAM));
  }
}
void funca(){
  int localVar;
  int localVar2;
  int localVar3;
  Serial.printf("localVar in funca at %p\n",&localVar);
  Serial.printf("localVar2 in funca at %p\n",&localVar2);
  Serial.printf("localVar3 in funca at %p\n",&localVar3);
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(1000);
  Serial.printf("globalVar = %d\nstaticGlobalVar = %d\nconstVar = %d\nrtcFastVar = %d\n \
    rtcSlowVar = %d\n psramVar = %d\n",globalVar,staticGlobalVar,constVar,rtcFastVar,rtcSlowVar,psramVar);
  Serial.printf("globalVar at %p\nstaticGlobalVar at %p\nconstVar at %p\nrtcFastVar at %p\n \
    rtcSlowVar at %p\n psramVar at %p\n",&globalVar, &staticGlobalVar, &constVar, &rtcFastVar, &rtcSlowVar, &psramVar);
  dynamicMemoryAllocate();
  funca();
}

void loop() {
  // put your main code here, to run repeatedly:

}
