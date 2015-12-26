//program that plays the james bond theme on a bus, speaker

int bus9 = 9;

double tempo = 120.0; // ca...
int quart = (int) ((60/tempo)*1000); //q = quarterNote [ms]
int whole = quart*4;                    //w = whole note
int half = quart*2;                    //h = halfNote
int eigth = quart/2;                    //e = eigth part Note
int sixt = quart/4;                    //s = sixteenth part Note
//otharfi... notadi bara half+eigth t.d. beint i fylkin
int half_eigth = half+eigth;
int quart_eigth = quart+eigth;
int whole__eigth = whole - eigth; // __ = minus _ = +
int eigth_sixt  = eigth + sixt;
int quart_sixt  = quart + sixt;
int whole_eigth = whole + eigth;


char notes[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b' };

char melodyIntro[] = { 'b','C','C', 'C', 'b','C','C','C' };
char hiloIntro[] =   { 'n','n','s', 'n', 'n','n','s','n' };
int beatsIntro[] =  { half,half,half, half, half,half,half,half };

char melodyVerse[] = { 'e', 'f', 'f', 'f', 'f', 'e', 'e', 'e', 'e', 
                  'g', 'g', 'g', 'g', 'f', 'f', 'f',
                       'e', 'f', 'f', 'f', 'f', 'e', 'e', 'e', 'e', 
                  'g', 'g', 'g', 'g', 'f', 'f', 'f',
                       'e', 'f', 'f', 'f', 'f', 'e', 'e', 'e', 'e', 
                  'g', 'g', 'g', 'g', 'f', 'f', 'e', 'D', 'C', 
                  'b', 'a', 'b' };
char hiloVerse[] =   { 'n', 's', 's', 's', 's', 'n', 'n', 'n', 'n', 
                  'n', 'n', 'n', 'n', 's', 's', 's',
                       'n', 's', 's', 's', 's', 'n', 'n', 'n', 'n', 
                  'n', 'n', 'n', 'n', 's', 's', 's',
                       'n', 's', 's', 's', 's', 'n', 'n', 'n', 'n', 
                  'n', 'n', 'n', 'n', 's', 'n', 'n', 'n', 's', 
                  'n', 'n', 'n' };
int beatsVerse[] =   { eigth, sixt, sixt, eigth, quart, eigth, eigth, eigth, eigth, 
                  sixt, sixt, eigth, quart, eigth, eigth, eigth,
                       eigth, sixt, sixt, eigth, quart, eigth, eigth, eigth, eigth, 
                  sixt, sixt, eigth, quart, eigth, eigth, eigth,
                       eigth, sixt, sixt, eigth, quart, eigth, eigth, eigth, eigth,
                  sixt, sixt, eigth, quart, eigth, eigth, eigth, eigth, half_eigth, 
                  eigth, eigth, whole };
                  
char melodyMiddle[] = { 'e', 'g', 'D', 'D', 'g', 'a', 'b',
                        'g', 'f', 'B', 'e', 'c',
                        'e', 'g', 'D', 'D', 'g', 'a', 'b',
                        'g', 'f', 'B', 'd', 'e' };
                        
char hiloMiddle[] = {   'n', 'n', 's', 'n', 'n', 's', 'n',
                        'n', 's', 'n', 'n', 's',
                        'n', 'n', 's', 'n', 'n', 's', 'n',
                        'n', 's', 'n', 's', 'n',
                      };
int beatsMiddle[] = {   eigth, quart, eigth, quart_eigth, eigth, eigth, whole__eigth-sixt,
                        quart+eigth, half-sixt, sixt, 3*sixt, whole,
                        eigth, quart, eigth, quart_eigth, eigth, eigth, whole__eigth-sixt,
                        quart+eigth, half-sixt, sixt, 3*sixt, whole,

                      };

char melodyMiddle2[] = { 'e', 'e', 'e', 'f', 'e', 'f',
                        'g', 'g', 'g', 'f', 'e', 'f',
                        'e', 'e', 'e', 'f', 'e', 'f',
                        'g', 'g', 'g', 'f', 'e', 'f',
                        
                        'b','b','B','b','b','B','b','b',
                        'b','b','b'
                       };
char hiloMiddle2[] =    {
                        'n', 'n', 'n', 's', 'n', 's',
                        'n', 'n', 'n', 's', 'n', 's',
                        'n', 'n', 'n', 's', 'n', 's',
                        'n', 'n', 'n', 's', 'n', 's',
                        
                        'n','n','n','n','n','n','n','n',
                        'n','n','n'
                        };
int beatsMiddle2[] =   {
                          eigth, quart, eigth, eigth, eigth, quart,
                        eigth, quart, eigth, eigth, eigth, quart,
                        eigth, quart, eigth, eigth, eigth, quart,
                        eigth, quart, eigth, eigth, eigth, quart,
                        
                        eigth,quart,eigth+quart,eigth,quart,eigth+quart,sixt,eigth,
                        sixt,eigth,eigth                       
                        };
char melodyEnd[] = { 'e', 'g', 'D', 'D', 
                     'g', 'b', 'F', 'F', 
                     'b', 'D', 'A', 'A',
                     'E', 'G', 'p', 'p',
                     'e', 'g', 'b', 'F'
                     };
char hiloEnd[] =   { 'n', 'n', 's', 'n', 
                     'n', 'n', 's', 'n', 
                     'n', 'n', 's', 'n',
                     'n', 'n', 's', 'n',
                     'n', 'n', 'n', 's'
                   };
int  beatsEnd[] =  { eigth, quart, eigth, quart, 
                     eigth, quart, eigth, quart,  
                     eigth, quart, eigth, quart, 
                     eigth, quart, eigth, quart, 
                     sixt, sixt, sixt, sixt+half+quart
                   };
void setup()
{
  pinMode(bus9,OUTPUT);
}

//spilar notu note i noteType langan tima, 
// hilo er 'b' = lækka, 's' = sharp, 'n' = no change
void play(char note, char hilo, unsigned long noteType)
{
    unsigned long n; // n = note
    switch (note) {
      case 't': //test
        n = noteType;
        noteType = quart;
        break;
      case 'B':
        n = 8100;
        break;
      case 'c':
        if (hilo == 's') n = 7215;
        else n = 7644; //period in microseconds
        break;
      case 'd':
        if (hilo == 's') n = 6428;
        else n = 6811; //period in microseconds
        break;
      case 'e':
        n = 6067; 
        break;
      case 'f':
        if (hilo == 's') n = 5405;
        else n = 5727;
        break;
      case 'g':
        if (hilo == 's') n = 4816;
        else n = 5102;
        break;
      case 'a':
        if (hilo == 's') n = 4290;
        else n = 4545;
        break;
      case 'b':
        n = 4050;
        break;
      case 'C':
        if (hilo == 's') n = 3608;
        else n = 3822;
        break;
      case 'D':
        if (hilo == 's') n = 3214;
        else n = 3405;
        break;
      case 'E':
        n = 3034;
        break;
      case 'F':
        if (hilo == 's') n = 2703;
        else n = 2863;
        break;
      case 'A':
        if (hilo == 's') n = 2145;
        else n = 2273;
        break;
      case 'G':
        n = 2551;
        break;
      case 'p': //'p' = d fyrir ofan D
        if (hilo == 's') n = 1607;
        else n = 1703;
        break;
    }  
    
    unsigned long timeDiff = 0;       
    unsigned long prevTime = millis();
       
    while (timeDiff < noteType) {

       digitalWrite(bus9,HIGH);  
       delayMicroseconds(n/2.0);
       digitalWrite(bus9,LOW);
       delayMicroseconds(n/2.0);
       
       unsigned long afterTime = millis();
       
       timeDiff = afterTime - prevTime;
    }   
    delay(5);
}

void playIntro()
{
  //intro
    for (int i = 0; i < sizeof(melodyIntro)/sizeof(melodyIntro[0]); i++) {
       play(melodyIntro[i],hiloIntro[i],beatsIntro[i]); 
    }   
}

void playVerse()
{
  //verse
    for (int i = 0; i < sizeof(melodyVerse)/sizeof(melodyVerse[0]); i++) {
       play(melodyVerse[i],hiloVerse[i],beatsVerse[i]); 
    }   
}

void playMiddle()
{//middle part
    for (int i = 0; i < sizeof(melodyMiddle)/sizeof(melodyMiddle[0]); i++) {
       play(melodyMiddle[i],hiloMiddle[i],beatsMiddle[i]); 
    }   
}

void playMiddle2()
{
  //middle part nr.2
    for (int i = 0; i < sizeof(melodyMiddle2)/sizeof(melodyMiddle2[0]); i++) {
       play(melodyMiddle2[i],hiloMiddle2[i],beatsMiddle2[i]); 
    } 
}

void playShortIntro()
{
  //first half of intro
    for (int i = 0; i < (sizeof(melodyIntro)/sizeof(melodyIntro[0]))/2; i++) {
       play(melodyIntro[i],hiloIntro[i],beatsIntro[i]); 
    }   
}

void playEnd()
{
   //the end
    for (int i = 0; i < (sizeof(melodyEnd)/sizeof(melodyEnd[0])); i++) {
       play(melodyEnd[i],hiloEnd[i],beatsEnd[i]); 
    }   
}

void loop()
{
  playIntro();
  playVerse();
  playVerse();
  playIntro();
  playMiddle();
  playMiddle();
  playMiddle2();
  playShortIntro();  
  playVerse();
  playEnd();
}
