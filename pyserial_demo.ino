int x, d;
int spe = 80;
#define rm1 5
#define rm2 6
#define lm1 9
#define lm2 10

void setup() {
 Serial.begin(115200);
 Serial.setTimeout(1);
 pinMode(rm1, OUTPUT);
 pinMode(rm2, OUTPUT);
 pinMode(lm1, OUTPUT);
 pinMode(lm2, OUTPUT);
}
void loop() {
    while (Serial.available()){
        String s = Serial.readString();
        if(s=="right"){
            analogWrite(rm1, spe);
            analogWrite(rm2, 0);
            analogWrite(lm1, spe);
            analogWrite(lm2, 0);
            Serial.println("right");
        }else if(s=="left") {
            analogWrite(rm1, 0);
            analogWrite(rm2, spe);
            analogWrite(lm1, 0);
            analogWrite(lm2, spe);
            Serial.println("left");
        }else if(s=="forward") {
            analogWrite(rm1, 0);
            analogWrite(rm2, spe);
            analogWrite(lm1, spe);
            analogWrite(lm2, 0);
            Serial.println("forward");
        } else if(s=="stop"){
            analogWrite(rm1, 0);
            analogWrite(rm2, 0);
            analogWrite(lm1, 0);
            analogWrite(lm2, 0);
            Serial.println("stop");
        }
    }
}
