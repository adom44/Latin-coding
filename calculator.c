#include "latin.h"

realis multiplication(){
    realis x, y;

    scribe("Da numerum X:\n");
    lege("%f", &x);
    scribe("Da numerum Y:\n");
    lege("%f", &y);
    redde x * y;
}

realis division(){
    realis x, y;

    scribe("Da numerum X:\n");
    lege("%f", &x);
    scribe("Da numerum Y:\n");
    lege("%f", &y);
    redde x / y;

}

realis addition(){
    realis x, y;

    scribe("Da numerum X:\n");
    lege("%f", &x);
    scribe("Da numerum Y:\n");
    lege("%f", &y);
    redde x + y;

}

realis subtraction(){
    realis x, y;

    scribe("Da numerum X:\n");
    lege("%f", &x);
    scribe("Da numerum Y:\n");
    lege("%f", &y);
    redde x - y;

}

integer primus(){
    scribe("Scribe numerum:\n");
    scribe("1 -> multiplication\n");
    scribe("2 -> division\n");
    scribe("3 -> addition\n");
    scribe("4 -> subtraction\n");
    integer x=0;
    
    dum(x<1 || x>4){
        lege("%d", &x);
        muta(x){
            exemplum 1:
                scribe("---------------------\n%f\n", multiplication());
                seca;
            exemplum 2:
                scribe("---------------------\n%f\n", division());
                seca;
            exemplum 3:
                scribe("---------------------\n%f\n", addition());
                seca;
            exemplum 4:
                scribe("---------------------\n%f\n", subtraction());
                seca;
            default:
                scribe("Scribe alium numerum\n");
                perserva;
        }
    }
    
}