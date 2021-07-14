void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 int mode = 0;
 int Sum;
}

void loop() {
   mode = 0;
   if (Serial.available() > 0) {
    mode = Serial.readString();
    ]
  //if var = "a"{
    //Sum = 
  //}
  print(mode)
}
