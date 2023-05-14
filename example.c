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

    return 0;
}
