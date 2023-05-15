#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>


//some terms
#define mille 1000
#define primus main
#define nihil NULL
#define etiam 1
#define non 0

//conditionals
#define si if
#define aliter else
#define fac do
#define dum while
#define nam for
#define muta switch


//actions
#define exemplum case
#define seca break
#define perserva continue
#define redde return

//datatypes
#define CARTA FILE
#define brevis short
#define integer int
#define longum long
#define signis signed
#define nonsignis unsigned
#define littera char
#define catena char*
#define realis float
#define duplex double
#define veritas bool

//commands
#define lege(...) scanf(__VA_ARGS__)
#define scribe(...) printf(__VA_ARGS__)