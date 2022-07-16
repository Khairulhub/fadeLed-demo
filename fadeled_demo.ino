int led1 = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(11,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<255;i++){
    analogWrite(led1,i) ;
    delay(10);
  }
  
  for(int j=255; j>0;j--){
    analogWrite(led1,j) ;
    delay(10);
  }
  
 
}
