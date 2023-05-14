#include "latin.h"

realis floatFunction(){
    realis y = (realis)5/(realis)2;

    reddere y;
}

int main(){
    integer x=0;
    signum s='a';

    dum(x!=5){
        scribere("%c", s);

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
    scribere("\n");

    scribere("%f",floatFunction());

    scribere("\n");

    signum st[1000]=""; //pro 1000 signa
    catena str = st;

    nam(int i=0; i<=2; i++){
        si(i==2){
            str = nihil;
        }
        si(str!=nihil){
            legere("%s", str);
            scribere("%s\n", str);
        }aliter{
            scribere("%s\n", "fin");
        }
        
    }

    facere{
        scribere("\n\nansdoafnoandwinaondwiaondiaondioanfoinidaon\n");
        x--;
    }dum(x!=0);

    reddere 0;
}
