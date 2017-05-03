void setup() {
  Serial1.begin(115200);
  Serial.begin(115200);
}

void loop() {
  static uint32_t t_head1, t_crc;
  static uint32_t msp_time;
  static uint32_t cnt;
  
  if(Serial1.
