int ledPin = 13;
volatile unsigned long press_ms = 0;

void tatled() {
    press_ms = millis();
    digitalWrite(ledPin, HIGH); // bat đèn led
}

void setup() {
    pinMode(ledPin, OUTPUT);
    pinMode(2, INPUT_PULLUP); // sử dụng điện trở kéo lên cho chân số 2, ngắt 0
    attachInterrupt(0, tatled, RISING); // gọi hàm tatled liên tục khi còn nhấn nút
}

void loop() {
    if ((millis() - press_ms) >= 1000) {
        digitalWrite(ledPin, LOW); // tat đèn led
    } else {
        //
    }
}
