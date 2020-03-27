int a=3;
int b=4;
int s1=5;
int s2=6;
int s3=7;
int s4=8;
int s5=9;
int s6=10;
int s7=11;
int i=0,j;

void setup() {
 pinMode(a,INPUT_PULLUP);
 pinMode(b,INPUT_PULLUP);
 pinMode(s1,OUTPUT);
 pinMode(s2,OUTPUT);
 pinMode(s3,OUTPUT);
 pinMode(s4,OUTPUT);
 pinMode(s5,OUTPUT);
 pinMode(s6,OUTPUT);
 pinMode(s7,OUTPUT);
 digitalWrite(s1,HIGH);
 digitalWrite(s2,HIGH);
 digitalWrite(s3,HIGH);
 digitalWrite(s4,HIGH);

 digitalWrite(s5,HIGH);
 digitalWrite(s6,HIGH);
 digitalWrite(s7,LOW);
 Serial.begin(9600);
}

void loop() {
 rread();
 if(i==1)
 {
  one();
 }
 if(i==2)
 {
  two();
 }
 if(i==3)
 {
  three();
 }
 if(i==4)
 {
  four();
 }
 if(i==5)
 {
  five();
 }
 if(i==6)
 {
  six();
 }
 if(i==7)
 {
  seven();
 }
 if(i==8)
 {
  eight();
 }
 if(i==9)
 {
 nine();
 }
}

void rread()
{
 if(!digitalRead(a)==0)
 {
  j=digitalRead(a);

  Serial.println(j);

  while(!digitalRead(b)==1)
  {
  j=digitalRead(b);
  Serial.println(j);
  }
  i++;
  Serial.println(&#39;\t&#39;);
  Serial.print(&quot;i=&quot;);
  Serial.print(i);
  delay(1000);
 }
 if(!digitalRead(b)==0)
 {
  j=digitalRead(b);
  Serial.println(j);

  while(!digitalRead(a)==1)
  {
  j=digitalRead(a);
  Serial.println(j);
  }
  i--;
  Serial.println(&#39;\t&#39;);

  Serial.print(&quot;i=&quot;);
  Serial.print(i);
  delay(1000);
 }
}
void one()
{
digitalWrite(s1,LOW);
digitalWrite(s2,HIGH);
digitalWrite(s3,HIGH);
digitalWrite(s4,LOW);
digitalWrite(s5,LOW);
digitalWrite(s6,LOW);
digitalWrite(s7,LOW);
}
void two()
{
digitalWrite(s1,HIGH);
digitalWrite(s2,HIGH);
digitalWrite(s3,LOW);
digitalWrite(s4,HIGH);
digitalWrite(s5,HIGH);
digitalWrite(s6,LOW);
digitalWrite(s7,HIGH);
}

void three()
{
digitalWrite(s1,HIGH);
digitalWrite(s2,HIGH);
digitalWrite(s3,HIGH);
digitalWrite(s4,HIGH);
digitalWrite(s5,LOW);
digitalWrite(s6,LOW);
digitalWrite(s7,HIGH);
}
void four()
{
digitalWrite(s1,LOW);
digitalWrite(s2,HIGH);
digitalWrite(s3,HIGH);
digitalWrite(s4,LOW);
digitalWrite(s5,LOW);
digitalWrite(s6,HIGH);
digitalWrite(s7,HIGH);
}
void five()
{
digitalWrite(s1,HIGH);
digitalWrite(s2,LOW);
digitalWrite(s3,HIGH);

digitalWrite(s4,HIGH);
digitalWrite(s5,LOW);
digitalWrite(s6,HIGH);
digitalWrite(s7,HIGH);
}
void six()
{
digitalWrite(s1,HIGH);
digitalWrite(s2,LOW);
digitalWrite(s3,HIGH);
digitalWrite(s4,HIGH);
digitalWrite(s5,HIGH);
digitalWrite(s6,HIGH);
digitalWrite(s7,HIGH);
}
void seven()
{
digitalWrite(s1,HIGH);
digitalWrite(s2,HIGH);
digitalWrite(s3,HIGH);
digitalWrite(s4,LOW);
digitalWrite(s5,LOW);
digitalWrite(s6,LOW);
digitalWrite(s7,LOW);
}

void eight()
{
digitalWrite(s1,HIGH);
digitalWrite(s2,HIGH);
digitalWrite(s3,HIGH);
digitalWrite(s4,HIGH);
digitalWrite(s5,HIGH);
digitalWrite(s6,HIGH);
digitalWrite(s7,HIGH);
}
void nine()
{
digitalWrite(s1,HIGH);
digitalWrite(s2,HIGH);
digitalWrite(s3,HIGH);
digitalWrite(s4,LOW);
digitalWrite(s5,LOW);
digitalWrite(s6,HIGH);
digitalWrite(s7,HIGH);
}
