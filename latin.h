#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>
#include <float.h>
#include <string.h>
#include <limits.h>


//constants
#define NOVA_LINEA '\n'
#define NL '\n'
#define FINIS_CARTAE EOF
#define FC EOF
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
#define salta goto

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

//other type stuff
#define magnitudode(x) sizeof(x)
#define constans const
#define staticus static

//modes of opening files
#define LEGERE "r"
#define SCRIBERE "w"
#define ATTRIBUERE "a"
#define DUPLEX_LEGERE "rb"
#define DUPLEX_SCRIBERE "wb"
#define DUPLEX_ATTRIBUERE "wa"

//standard I/O streams
#define ingressus stdin
#define egressus stdout
#define errgressus stderr

//commands
// <stdio.h>
#define renomena(x, y) rename(x, y)
#define tmpcart() tmpfile()
#define tmpnom(x) tmpnam(x)
#define claudec(x) fclose(x)
#define purgac(x) fflush(x)
#define aperic(x, y) fopen(x, y)
#define reaperic(x, y, z) freopen(x, y, z)
#define constivas(x, y) setbuf(x, y)
#define reconstivas(x, y, z, a) setvbuf(x, y, z, a)
#define legec(...) fscanf(__VA_ARGS__)
#define scribec(...) fprintf(__VA_ARGS__)
#define lege(...) scanf(__VA_ARGS__)
#define scribe(...) printf(__VA_ARGS__)

// <stdlib.h>
#define puralloc(x, y) calloc(x, y)
#define dealloc(x) free(x)

#define aadi(x) atoi(x) // ASCII to integer
#define aadr(x) atof(x) // ASCII to float
#define aadl(x) atol(x) // ASCII to long
#define aadll(x) atoll(x) // ASCII to long long

#define catadl(x, y, z) strtol(x, y, z) // string to long
#define catadll(x, y, z) strtoll(x, y, z) // string to long long

#define catadnsl(x, y, z) strtoul(x, y, z) // string to unsigned long
#define catadnsll(x, y, z) strtoull(x, y, z) // string to unsigned long long

#define impredicti() rand()

//buffer r/w
#define catlimscribe(...) snprintf(__VA_ARGS__)
#define catscribe(...) sprintf(__VA_ARGS__)
#define catlege(...) sscanf(__VA_ARGS__)

//formatted variable file print
#define vscribec(...) vfprintf(__VA_ARGS__)
#define vslegec(...) vfscanf(__VA_ARGS__)
#define vscribe(...) vprintf(__VA_ARGS__)
#define vlege(...) vscanf(__VA_ARGS__)
#define vcatlimscribe(...) vsnprintf(__VA_ARGS__)
#define vcatscribe(...) vsprintf(__VA_ARGS__)
#define vcatlege(...) vsscanf(__VA_ARGS__)
#define accipelc(x) fgetc(x)
#define accipecatc(x, y, z) fgets(x, y, z)
#define ponelc(x, y) fputc(x, y)
#define ponecatc(x, y) fputs(x, y)
#define accipel(x) getc(x)
#define accipeling(x) getchar(x)
#define accipecat(x) gets(x)
#define ponel(x, y) putc(x, y)
#define poneling(x) putchar(x)
#define ponecat(x) puts(x)
#define naccipel(x, y) ungetc(x, y)
#define legecar(x, y, z, a) fread(x, y, z, a)
#define scribecar(x, y, z, a) fwrite(x, y, z, a)
#define accipetorpos(x, y) fgetpos(x, y)
#define compensatorpos(x, y, z) fseek(x, y, z)
#define saltatorpos(x, y) fsetpos(x, y)
#define nunctorpos(x) ftell(x)
#define retracta(x) rewind(x)
#define purgaerr(x) clearerr(x)
#define fctor(x) feof(x)
#define errtor(x) ferror(x)
#define scribeerr(x) perror(x)