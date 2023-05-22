#include "../latin.h"
int latitudoMundi=100, longitudoMundi=40, longitudoCampiLudorum=50;
int tabulaX=130,tabulaY=35;

struct persona{
	int vitae;
	int stamina;
	int potentia;
	int posX;
	int posY;
};

struct hocLudens{
	struct persona* meaPersona;
	littera nomen[mille];
};

integer MundumGenerare(struct hocLudens *ego, struct persona *entitates){
	purgatab(); //linux

	CARTA *mappa;
	mappa = aperic("mappa.txt", LEGERE);
	si(mappa==NIHIL){
		scribec(errgressus,"carta \"mappa.txt\" non aperitur!\n");
		redde 1;
	}

	scribe("Mappam depictor!\n");
	int l, x=1, y=1;
	dum((l=accipelc(mappa))!=FC){
		si(l==NOVA_LINEA){
			y++;x=1;
			si(y>=tabulaY && y<=longitudoMundi+tabulaY){
				scribe("%c", l);
			}
		}aliter{
			x++;
			si(y>=tabulaY && y<=longitudoMundi+tabulaY){
				si(x>=tabulaX && x<=latitudoMundi+tabulaX){
					veritas entitest=non_est;
					per(longum nonsignis integer e=0; e<magnitudode(entitates);e++){
						si(x==entitates[e].posX && y==entitates[e].posY){
							scribe("§");
							entitest=est;
							seca;
						}
					}
					si(entitest==non_est){
						scribe("%c", l);
					}
				}
			}
		}
		
		
		
		
	}
	claudec(mappa);
	
	scribe("%c", NOVA_LINEA);
	scribe("====================================================================================================");
	scribe("%c", NOVA_LINEA);
	
	//informatio de hoc luditore
	scribe("%s\t|\tVitae: %d\tStamina: %d\tPotentia: %d\tPosX: %d\tPosY: %d\n", ego->nomen, 
	ego->meaPersona->vitae, ego->meaPersona->stamina, ego->meaPersona->potentia, ego->meaPersona->posX,ego->meaPersona->posY);
	
	
	redde 0;
}

integer primus(){
	struct hocLudens ego;
	littera impera[mille]="";
	fac{
		scribe("Nomina personam tuam:\n");
		lege("%s", impera);
		si(catcmp(impera, "")){
			struct persona *meaPersona = malloc(magnitudode(struct persona));
			catimita(ego.nomen, impera);
			ego.meaPersona = meaPersona;
			ego.meaPersona->vitae=100;
			ego.meaPersona->stamina=100;
			ego.meaPersona->potentia=10;
			ego.meaPersona->posX=145;
			ego.meaPersona->posY=50;
			scribe("Nomen \"%s\" feliciter conservatum est\n", ego.nomen);
		}aliter{
			scribe("Scribe nominam tuam!\n");
		}
	}dum(!catcmp(ego.nomen, ""));
	
	
	struct persona entitates[1];
	entitates[0]=*ego.meaPersona;
	
	
	
	
	
	fac{
		si(MundumGenerare(&ego, entitates))redde 1;
		lege("%s", impera);
		
		si(!catcmp(impera, "mova %d %s")){
			//
		}
		
	}dum(catcmp(impera, "exire"));
	
	dealloc(ego.meaPersona);
	
	
	redde 0;
}
