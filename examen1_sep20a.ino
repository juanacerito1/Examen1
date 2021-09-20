float volts = 0.0;
float F = 0.0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  //Comunicación con la computadora a una velocidad serial de 9600 bits por segundo (baudios)
}

void loop()
{
  volts = analogRead(A0);
  F = -((volts*4)/1023-2);
  Serial.print("Aceleracion actual: ");
  Serial.print(F);
  Serial.println("Fuerza G");
  delay(1000);
}
