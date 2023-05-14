#include "latin.h"

realum floatFunction(){
    realum y = (realum)5/(realum)2;

    reditire y;
}

int main(){
    integer x=0;
    signum s='a';

    dum(x!=5){
        scribere("%c", s);

        si(s=='a'){
            s='b';
        }
        aliud si(s=='b'){
            s='c';
        }
        aliud si(s=='c'){
            s='d';
        }
        aliud si(s=='d'){
            s='e';
        }
        aliud si(s=='e'){//realfin
            s='f';
        }
        aliud si(s=='f'){
            s='g';
        }
        aliud si(s=='g'){
            s='h';
        }
        
        x++;
    }
    scribere("\n");

    scribere("%f",floatFunction());

    scribere("\n");

    return 0;
}
