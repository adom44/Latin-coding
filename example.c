#include "latin.h"

realis floatFunction(){
    realis y = (realis)5/(realis)2;

    redde y;
}

int primus(){
    integer x=0;
    littera s='a';

    dum(x!=5){
        scribe("%c", s);

        si(s=='a'){
            s='b';
        }
        aliter si(s=='b'){
            s='c';
        }
        aliter si(s=='c'){
            s='d';
        }
        aliter si(s=='d'){
            s='e';
        }
        aliter si(s=='e'){//realfin
            s='f';
        }
        aliter si(s=='f'){
            s='g';
        }
        aliter si(s=='g'){
            s='h';
        }
        
        x++;
    }
    scribe("\n");

    scribe("%f",floatFunction());

    scribe("\n");

    littera st[1000]=""; //pro 1000 signa
    catena str = st;

    nam(int i=0; i<=2; i++){
        si(i==2){
            str = nihil;
        }
        si(str!=nihil){
            lege("%s", str);
            scribe("%s\n", str);
        }aliter{
            scribe("%s\n", "fin");
        }
        
    }

    fac{
        scribe("\n\nansdoafnoandwinaondwiaondiaondioanfoinidaon\n");
        x--;
    }dum(x!=0);

    redde 0;
}
