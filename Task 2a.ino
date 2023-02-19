int motionSens = 2;
bool curr_State = false;

void setup()
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(motionSens, INPUT);

  attachInterrupt(digitalPinToInterrupt(motionSens), swap, CHANGE);
}

void loop()
{
  delay(1000);
}

void swap()
{
  curr_State = !curr_State;
  digitalWrite(LED_BUILTIN, curr_State);
  Serial.println("Interrupted");
}