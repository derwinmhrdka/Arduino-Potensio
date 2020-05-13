byte sensor= A0;
byte ledMerah= 7;
byte ledKuning= 6;
byte ledHijau= 5;
int nilai;

void setup(){
pinMode(ledMerah, OUTPUT);
pinMode(ledKuning, OUTPUT);
pinMode(ledHijau, OUTPUT);
}

void loop(){
nilai= analogRead(sensor);

if (nilai < 300 && nilai>0){
digitalWrite(ledMerah, HIGH);
digitalWrite(ledKuning, LOW);
digitalWrite(ledHijau, LOW);
}
else if (nilai>=300 && nilai < 700){
digitalWrite(ledMerah, LOW);
digitalWrite(ledKuning, HIGH);
digitalWrite(ledHijau, LOW);
}
else
{
digitalWrite(ledMerah, LOW);
digitalWrite(ledKuning, LOW);
digitalWrite(ledHijau, HIGH);
}
}
