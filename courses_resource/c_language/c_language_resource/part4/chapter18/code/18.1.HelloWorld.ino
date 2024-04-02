// 18.1.HelloWorld.ino
int count;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  count = 20;
  delay(100);
  Serial.println("Hello world!");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(count == 0){
    count = 10;
  }
  count--;
  Serial.printf("%d,Hello world!\n",count);
  delay(1000);//1s
}