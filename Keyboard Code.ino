const int b1 = A0;
const int b2 = A1;
const int b3 = A2;
const int b4 = A3;
const int b5 = A4;
const int b6 = A5;


const int sound =  3;

int val1, val2, val3, val4, val5, val6, cas;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
  
  pinMode(3, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  val1=digitalRead(b1);
  val2=digitalRead(b2);
  val3=digitalRead(b3);
  val4=digitalRead(b4);
  val5=digitalRead(b5);
  val6=digitalRead(b6);
  
  if(val1==1 && val2==0 && val3==0 && val4==0 && val5==0 && val6==0)
    cas=1;
  else if(val1==0 && val2==1 && val3==0 && val4==0 && val5==0 && val6==0)
    cas=2;
  else if(val1==0 && val2==0 && val3==1 && val4==0 && val5==0 && val6==0)
    cas=3;
  else if(val1==0 && val2==0 && val3==0 && val4==1 && val5==0 && val6==0)
    cas=4;
  else if(val1==0 && val2==0 && val3==0 && val4==0 && val5==1 && val6==0)
    cas=5;
  else if(val1==0 && val2==0 && val3==0 && val4==0 && val5==0 && val6==1)
    cas=6;
  else if(val1==1 && val2==0 && val3==0 && val4==0 && val5==0 && val6==1)
    cas=7;
  else if(val1==0 && val2==1 && val3==0 && val4==0 && val5==1 && val6==0)
    cas=8;
  else if(val1==0 && val2==0 && val3==1 && val4==1 && val5==0 && val6==0)
   	cas=9;
  else if(val1==0 && val2==0 && val3==0 && val4==0 && val5==0 && val6==0) 
    cas=10;
   
  switch(cas)
  {
    case 1:
    	tone(3, 440, 100);
    	Serial.print("\n Signal =");
    	Serial.print(analogRead(sound));
    	break;
    case 2:
    	tone(3, 490, 100);
    	Serial.print("\n Signal =");
    	Serial.print(analogRead(sound));
    	break;
    case 3:
    	tone(3, 540, 100);
    	Serial.print("\n Signal =");
    	Serial.print(analogRead(sound));
    	break;
    case 4:
    	tone(3, 590, 100);
    	Serial.print("\n Signal =");
    	Serial.print(analogRead(sound));
    	break;
    case 5:
    	tone(3, 640, 100);
    	Serial.print("\n Signal =");
    	Serial.print(analogRead(sound));
    	break;
    case 6:
    	tone(3, 690, 100);
    	Serial.print("\n Signal =");
    	Serial.print(analogRead(sound));
    	break;
    case 7:
    	tone(3, 740, 100);
    	Serial.print("\n Signal =");
    	Serial.print(analogRead(sound));
    	break;
    case 8:
    	tone(3, 790, 100);
    	Serial.print("\n Signal =");
    	Serial.print(analogRead(sound));
    	break;
    case 9:
    	tone(3, 840, 100);
    	Serial.print("\n Signal =");
    	Serial.print(analogRead(sound));
    	break;
    case 10:
    	analogWrite(sound, 0);
    	break;
  }
  delay(10);
  
}
  
  