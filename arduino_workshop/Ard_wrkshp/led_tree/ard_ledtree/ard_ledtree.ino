#include <LiquidCrystal.h>

// Initialize the LCD (RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

// Messages for each line
String message1 = "  Happy Holidays!  ";   // Top line
String message2 = "  From the UIW Engineering Club  "; // Bottom line

void setup() {
  lcd.begin(16, 2);  // 16 columns, 2 rows
  lcd.clear();
  pinMode(40, OUTPUT);
  pinMode(42, OUTPUT);
  pinMode(44, OUTPUT);
  pinMode(46, OUTPUT);
  pinMode(48, OUTPUT);
  pinMode(50, OUTPUT);
  pinMode(52, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(29, OUTPUT);
  pinMode(31, OUTPUT);
  pinMode(33, OUTPUT);
  pinMode(35, OUTPUT);
  pinMode(37, OUTPUT);
  pinMode(39, OUTPUT);
  pinMode(41, OUTPUT);
  pinMode(43, OUTPUT);
  pinMode(45, OUTPUT);
  pinMode(47, OUTPUT);
  pinMode(49, OUTPUT);
  pinMode(51, OUTPUT);
  pinMode(53, OUTPUT);
}

void loop() {
  digitalWrite(40, HIGH);
  digitalWrite(42, HIGH);
  digitalWrite(44, HIGH);
  digitalWrite(46, HIGH);
  digitalWrite(48, HIGH);
  digitalWrite(50, HIGH);
  digitalWrite(52, HIGH);
  digitalWrite(23, HIGH);
  digitalWrite(25, HIGH);
  digitalWrite(27, HIGH);
  digitalWrite(29, HIGH);
  digitalWrite(31, HIGH);
  digitalWrite(33, HIGH);
  digitalWrite(35, HIGH);
  digitalWrite(37, HIGH);
  digitalWrite(39, HIGH);
  digitalWrite(41, HIGH);
  digitalWrite(43, HIGH);
  digitalWrite(45, HIGH);
  digitalWrite(47, HIGH);
  digitalWrite(49, HIGH);
  digitalWrite(51, HIGH);
  digitalWrite(53, HIGH);
  // Each message scrolls independently
  for (int i = 0; i < max(message1.length(), message2.length()); i++) {
    String line1 = "";
    String line2 = "";

    // Build 16-character window for line 1
    for (int j = 0; j < 16; j++) {
      line1 += message1[(i + j) % message1.length()];
    }

    // Build 16-character window for line 2
    for (int j = 0; j < 16; j++) {
      line2 += message2[(i + j) % message2.length()];
    }

    // Print both lines
    lcd.setCursor(0, 0);
    lcd.print(line1);
    lcd.setCursor(0, 1);
    lcd.print(line2);

    delay(800);  // adjust scroll speed (lower = faster)
  }
}
