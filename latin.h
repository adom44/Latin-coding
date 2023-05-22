#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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
#define NIHIL NULL
#define est 1
#define non_est 0

//conditionals
#define si if
#define aliter else
#define fac do
#define dum while
#define per for
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
#define vacuum void

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
#define errgressus stderr //error egressus

//commands
#define purgatab() system("clear")

// <stdio.h>
#define renomena(x, y) rename(x, y)
#define tmpcart() tmpfile() //temporaria carta
#define tmpnom(x) tmpnam(x) //temporarium nomen
#define claudec(x) fclose(x) //claude cartam
#define purgac(x) fflush(x) //purga cartam
#define aperic(x, y) fopen(x, y) //aperi cartam
#define reaperic(x, y, z) freopen(x, y, z) //reaperi cartam
#define constivas(x, y) setbuf(x, y) //constitue vas
#define reconstivas(x, y, z, a) setvbuf(x, y, z, a) //reconstitue vas
#define legec(...) fscanf(__VA_ARGS__) //lege cartam
#define scribec(...) fprintf(__VA_ARGS__) //lege cartam
#define lege(...) scanf(__VA_ARGS__)
#define scribe(...) printf(__VA_ARGS__)

// <stdlib.h>
#define puralloc(x, y) calloc(x, y) //puram (memoriam) alloca
#define dealloc(x) free(x) //dealloca

#define aadi(x) atoi(x) //ASCII ad integerum
#define aadr(x) atof(x) //ASCII ad realem
#define aadl(x) atol(x) //ASCII ad longum
#define aadll(x) atoll(x) //ASCII ad longum longum

#define catadl(x, y, z) strtol(x, y, z) //catena ad longum
#define catadll(x, y, z) strtoll(x, y, z) //catena ad longum longum

#define catadnsl(x, y, z) strtoul(x, y, z) //catena ad nonsignis longum
#define catadnsll(x, y, z) strtoull(x, y, z) //catena ad nonsignis longum longum

#define impredicti() rand() //impredictibilis

//buffer r/w
#define catlimscribe(...) snprintf(__VA_ARGS__) //catenam _ limita _ scribe
#define catscribe(...) sprintf(__VA_ARGS__) //catenam scribe
#define catlege(...) sscanf(__VA_ARGS__) //catenam lege

//formatted variable file print
#define vscribec(...) vfprintf(__VA_ARGS__) //variabilis _ scribe in carta
#define vlegec(...) vfscanf(__VA_ARGS__) //variabilis _ lege in carta
#define vscribe(...) vprintf(__VA_ARGS__) //variabilis _ scribe
#define vlege(...) vscanf(__VA_ARGS__) //variabilis _ lege
#define vcatlimscribe(...) vsnprintf(__VA_ARGS__) //variabilis _ catenam limita _ scribe
#define vcatscribe(...) vsprintf(__VA_ARGS__) //variabilis _ catenam scribe
#define vcatlege(...) vsscanf(__VA_ARGS__) //variabilis _ catenam lege
#define accipelc(x) fgetc(x) //accipe litteram in carta
#define accipecatc(x, y, z) fgets(x, y, z) //accipe catenam in carta
#define ponelc(x, y) fputc(x, y) //pone litteram in carta
#define ponecatc(x, y) fputs(x, y) //pone catenam in carta
#define accipel(x) getc(x) //accipe litteram
#define accipeling(x) getchar(x) //accipe litteram _ ingressus
#define accipecat(x) gets(x) //accipe catenam
#define ponel(x, y) putc(x, y) //pone litteram
#define poneling(x) putchar(x) //pone litteram _ ingressus
#define ponecat(x) puts(x) //pone catenam
#define naccipel(x, y) ungetc(x, y) //non accipe litteram
#define legecar(x, y, z, a) fread(x, y, z, a) //lege in carta
#define scribecar(x, y, z, a) fwrite(x, y, z, a) //scribe in carta
#define accipetorpos(x, y) fgetpos(x, y) //accipe torrentem positionem
#define compensatorpos(x, y, z) fseek(x, y, z) //quaere torrentem positionem
#define saltatorpos(x, y) fsetpos(x, y) //salta ad torrentis positionem
#define nunctorpos(x) ftell(x) //nunc _ torrentis position
#define retracta(x) rewind(x) 
#define purgaerr(x) clearerr(x) //purga errorem
#define fctor(x) feof(x) //(da) FINIS_CARTAE torrentis
#define errtor(x) ferror(x) //(da) errorem torrentis
#define scribeerr(x) perror(x) //scribe errorem

// <string.h>
//#define memimita(...) memccpy(__VA_ARGS__) //memoriae () imita \\Dunno, what it does
#define meml(...) memchr(__VA_ARGS__) //(inveni) in memoria litteram
//#define memcmp(...) memcmp(__VA_ARGS__) //memoriarum compara
#define memimita(...) memcpy(__VA_ARGS__) //memoriam imita
#define memmova(...) memmove(__VA_ARGS__) //memoriam mova
#define memconsti(...) memset(__VA_ARGS__) //memoriam constitue
//copy the pointer of string
#define idxfincatimita(...) stpcpy(__VA_ARGS__) //index ad finem catenae _ imita
#define idxfinfixcatimita(...) stpncpy(__VA_ARGS__) //index ad finem fixae catenae _ imita
#define catadfine(...) strcat(__VA_ARGS__) //catenam adfine
#define catl(...) strchr(__VA_ARGS__) //(inveni) catenae litteram
#define catcmp(...) strcmp(__VA_ARGS__) //catenas compara
// strcoll means STRing COLLate
#define catcoll(...) strcoll(__VA_ARGS__) //catenas collige
// _l is localization
#define catcoll_l(...) strcoll_l(__VA_ARGS__) //catenas collige in localem
#define catimita(...) strcpy(__VA_ARGS__) //catenam imita
