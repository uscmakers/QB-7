#include <Servo.h>
Servo esc_signal;

// Run at 23V

void setup() {
  // put your setup code here, to run once:
  esc_signal.attach(10); 
  esc_signal.write(40);
  delay(5000);
    // put your main code here, to run repeatedly:
  for (int i = 40; i < 120; i++){
    esc_signal.write(i);
    delay(100);
  }
  esc_signal.write(40);
}

void loop() {

}
