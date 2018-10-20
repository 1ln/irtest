int pin_a = A0;
int pin_d = 22;
int pin_led = 5;

void setup() {
Serial.begin(115200);

pinMode(pin_led,OUTPUT);

pinMode(pin_d,INPUT);
pinMode(pin_a,INPUT);

}

void led_blink_test() {
analogWrite(pin_led,255);
delay(100);
analogWrite(pin_led,0);
delay(100);
}

void blink_ir() {
int val = analogRead(pin_a);
if (val > 100) {
led_blink_test();
}
Serial.println(val);
}

void blink_ir_digital() {
int val = digitalRead(pin_d);
if (val == 1) {
led_blink_test();
}
Serial.println(val);
}

void loop() {
//read_value();
//blink_ir();
blink_ir_digital();
}
