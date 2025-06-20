#define LASERPIN 7
void setup() {}
void loop() {
  // put your main code here, to run repeatedly:
  pinMode(LASERPIN, OUTPUT);

  Serial.begin(9600); // Initialize serial communication
  while (!Serial) {
; // Wait for serial port to connect. Needed for native USB port only
  }

  // Prompt the user to enter a string
  Serial.println("Enter your text:");
  while (Serial.available() <= 0) {
    ; // Wait for user input
  }
  String inputText = Serial.readString(); // Read the user input
  // Convert the String to a character array
  char myText[inputText.length() + 1];
  inputText.toCharArray(myText, sizeof(myText));

  int length = sizeof(myText);
  int ar[length];
  int m;
  int bits[8];

  for (int i = 0; i < length; i++) {
    ar[i] = int(myText[i]);
  }

  for (int n = 0; n < length; n++) {
    m = ar[n];
    int z;
    int bin[7];
    int newbin[7];

    for (z = 0; z < 8; z++) {
      bin[z] = m % 2;
      m = m / 2;
    }

    for (int j = 7; j >= 0; j--) {
      newbin[7 - j] = bin[j];
    }

    for (int p = 0; p < 8; p++) {
      if (newbin[p] == 1) {
        bits[p] = HIGH;
      } else {
        bits[p] = LOW;
      }
    }

    bits[0] = HIGH;

    for (int i = 0; i < 8; i++) {
      digitalWrite(LASERPIN, bits[i]);
      delay(10);
    }

    digitalWrite(LASERPIN, LOW);

    delay(100);
  }
}