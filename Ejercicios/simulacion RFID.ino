int count = 0;
char c;
String id;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  Serial.println(" ACERQUE SU TARJETA RFID PARA SER ESCANEADA");
 
}

void loop() {
  while(Serial.available()>0)
  {
    c = Serial.read();
   count++;
   id += c;
   if(count == 12)  
    {
      Serial.print(id);
      //break;
     
      if(id=="AB123456789A")
      {
        Serial.println("    " "TARJETA VALIDA***INGRESAR""   "" ANDRES ***");
        digitalWrite(13, HIGH);
      }
      else
      {
      digitalWrite(13, LOW);
      Serial.println("    ""TARJETA INVALIDA***VOLVER""  ""A""   ""INGRESAR***");
      }
    }
  }
  count = 0;
  id="";
  delay(500);

}