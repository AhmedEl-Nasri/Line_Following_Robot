
#define l1 2
#define l2 3
#define r1 4
#define r2 5
#define irl 13
#define irr 12

void setup() {
for (int i =2;i<=5;i++){
  pinMode(i , OUTPUT);
}
  pinMode(irl , INPUT);
  pinMode(irr , INPUT);
}

void loop() {

int valL = digitalRead (irl); 
int valR = digitalRead (irr); 
if( valL == LOW && valR == LOW){ forward(); }
else if (valL == HIGH && valR == HIGH){ stop(); }
else if (valL == HIGH && valR == LOW){ right(); }
else if (valL == LOW && valR == HIGH){ left(); }
}



void forward(){
digitalWrite(r1,HIGH);
digitalWrite(r2,LOW);
digitalWrite(l1,HIGH);
digitalWrite(l2,LOW);
}

void backwords(){
digitalWrite(r1,LOW);
digitalWrite(r2,HIGH);
digitalWrite(l1,LOW);
digitalWrite(l2,HIGH);
}
void left(){
digitalWrite(r1,LOW);
digitalWrite(r2,LOW);
digitalWrite(l1,HIGH);
digitalWrite(l2,LOW);
}
void right(){
digitalWrite(r1,HIGH);
digitalWrite(r2,LOW);
digitalWrite(l1,LOW);
digitalWrite(l2,LOW);
}
void stop (){
digitalWrite(r1,LOW);
digitalWrite(r2,LOW);
digitalWrite(l1,LOW);
digitalWrite(l2,LOW);
}
