#define buzzer 8 // Buzzer bagli olan pini belirliyoruz
// Her bir taktik pini icin gerekli olan pin baglantisini ayarliyoruz
#define taktik1 4
#define taktik2 3
#define taktik3 2

void setup() {                

    pinMode(buzzer, OUTPUT); // buzzer pinini cikis olarak ayarliyoruz
    // tum taktik pinlerini INPUT_PULLUP olarak belirliyoruz
    pinMode(taktik1, INPUT_PULLUP);
    pinMode(taktik2, INPUT_PULLUP);
    pinMode(taktik3, INPUT_PULLUP);
  
  }

void loop() {
    
    if(digitalRead(taktik1)){ // taktik1 acik iken yarım saniyede bir buzzer calmasini istiyoruz
        digitalWrite(buzzer, HIGH);
        delay(500);
        digitalWrite(buzzer, LOW);
        delay(500);
    }
      
    if(digitalRead(taktik2)){ // taktik2 acik iken 1 saniyede bir buzzer calmasini istiyoruz
        digitalWrite(buzzer, HIGH);
        delay(1000);
        digitalWrite(buzzer, LOW);
        delay(1000);
    }

    if(digitalRead(taktik3)){ // taktik3 acik iken 2 saniyede bir buzzer calmasini istiyoruz
        digitalWrite(buzzer, HIGH);
        delay(2000);
        digitalWrite(buzzer, LOW);
        delay(2000);      
    }
 // Bu uygulamada buzzer ile ilgili işlem yapılan bloklar arasına sumo robotun hareketi için çeşitli taktiksel algoritmalar yazılabilir.
 
  }
