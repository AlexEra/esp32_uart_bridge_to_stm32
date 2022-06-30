void setup() {
//  Serial.begin(115200);
//  while(!Serial);
//  Serial1.begin(115200);
//  while(!Serial1);
  pinMode(19, OUTPUT); // gd32- BOOT0
  pinMode(23, OUTPUT); // ENABLE
  pinMode(1, OUTPUT); // TXD0
  pinMode(3, INPUT); // RXD0
  pinMode(17, INPUT); // TX1
  pinMode(16, OUTPUT); // RX1

  digitalWrite(19, 1);
  delay(1000);
  digitalWrite(23, 1);
}

void loop() {
  /*if ((REG_READ(GPIO_IN_REG) >> 3) & 0x1) {
    REG_WRITE(GPIO_OUT_W1TS_REG, ((uint32_t) 1) << 16);
  } else {
    REG_WRITE(GPIO_OUT_W1TC_REG, ((uint32_t) 1) << 16);
  }

  if ((REG_READ(GPIO_IN_REG) >> 17) & 0x1) {
    REG_WRITE(GPIO_OUT_W1TS_REG, ((uint32_t) 1) << 1);
  } else {
    REG_WRITE(GPIO_OUT_W1TC_REG, ((uint32_t) 1) << 1);
  }*/

  digitalWrite(16, digitalRead(3));
  digitalWrite(1, digitalRead(17));
}
