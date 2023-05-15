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

//advanced wholenumber datatypes
#define magnitudo size_t
#define integer8_t int8_t
#define integer16_t int16_t
#define integer32_t int32_t
#define integer64_t int64_t
#define nonsignis8_t uint8_t
#define nonsignis16_t uint16_t
#define nonsignis32_t uint32_t
#define nonsignis64_t uint64_t

//commands
#define lege(...) scanf(__VA_ARGS__)
#define scribe(...) printf(__VA_ARGS__)