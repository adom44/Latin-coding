#include "../latin.h"
int latitudoMundi=100, longitudoMundi=40, longitudoCampiLudorum=50;
int tabulaX=130,tabulaY=35;

struct persona{
	littera nomen[150];
	int vitae;
	int stamina;
	int potentia;
	int posX;
	int posY;
};

struct hocLudens{
	struct persona* meaPersona;
};

integer MundumGenerare(struct hocLudens *ego/*, struct persona **entitates*/){
	purgatab(); 
	
	CARTA *mappa;
	mappa = aperic("mappa.txt", LEGERE);
	si(mappa==NIHIL){
		scribec(errgressus,"carta \"mappa.txt\" non aperitur!\n");
		redde 1;
	}

	//scribefnst("Mappam depictor!\n");d
	int l, x=1, y=1;
	dum((l=accipelc(mappa))!=FC){
		si(l==NOVA_LINEA){
			y++;x=1;
			si(y>=tabulaY && y<=longitudoMundi+tabulaY){
				scribefnst("%c", l);
			}
		}aliter{
			x++;
			si(y>=tabulaY && y<=longitudoMundi+tabulaY){
				si(x>=tabulaX && x<=latitudoMundi+tabulaX){
					//veritas entitest=non_est;
					/*per(longum nonsignis integer e=0; e<magnitudode(entitates);e++){
						si(x==entitates[e]->posX && y==entitates[e]->posY){
							scribefnst("§");
							entitest=est;
							seca;
						}
					}
					si(entitest==non_est){
						scribefnst("%c", l);
					}*/
					si(x==ego->meaPersona->posX && y==ego->meaPersona->posY){
						scribefnst("§");
					}aliter{
						scribefnst("%c", l);
					}
					
				}
			}
		}
		
		
		
		
	}
	claudec(mappa);
	
	scribefnst("%c", NOVA_LINEA);
	scribefnst("====================================================================================================");
	scribefnst("%c", NOVA_LINEA);
	
	//informatio de hoc luditore
	scribefnst("%s\t|\tVitae: %d\tStamina: %d\tPotentia: %d\tPosX: %d\tPosY: %d\n", ego->meaPersona->nomen, 
	ego->meaPersona->vitae, ego->meaPersona->stamina, ego->meaPersona->potentia, ego->meaPersona->posX,ego->meaPersona->posY);
	//scribefnst("%d-%d\n", entitates[0]->posX, entitates[0]->posY);
	
	
	redde 0;
}

integer primus(vacuum){
	//struct hocLudens ego;
	/*littera impera[150]="";
	fac{
		scribe("Nomina personam tuam:\n");
		lege("%s", impera);
		si(catcmp(impera, "")){
			struct persona *meaPersona = malloc(magnitudode(struct persona));
			
			ego.meaPersona = meaPersona;
			catimita(ego.meaPersona->nomen, impera);
			ego.meaPersona->vitae=100;
			ego.meaPersona->stamina=100;
			ego.meaPersona->potentia=10;
			ego.meaPersona->posX=145;
			ego.meaPersona->posY=50;
			scribe("Nomen \"%s\" feliciter conservatum est\n", ego.meaPersona->nomen);
		}aliter{
			scribe("Scribe nominam tuam!\n");
		}
	}dum(!catcmp(ego.meaPersona->nomen, ""));
	
	*/
	//struct persona* entitates[1]={{"Hadrian",100,100,10,145,50}};
	//scribe("%s\t|\tVitae: %d\tStamina: %d\tPotentia: %d\tPosX: %d\tPosY: %d\n", entitates[0]->nomen, 
//	entitates[0]->vitae, entitates[0]->stamina, entitates[0]->potentia, entitates[0]->posX,entitates[0]->posY);
	
	
	initscr();
	int clavis;
	struct persona *meaPersona = malloc(magnitudode(struct persona));
	struct hocLudens ego;
	ego.meaPersona = meaPersona;
	catimita(ego.meaPersona->nomen, "Hadrian");
	ego.meaPersona->vitae=100;
	ego.meaPersona->stamina=100;
	ego.meaPersona->potentia=10;
	ego.meaPersona->posX=145;
	ego.meaPersona->posY=50;
	
	fac{
		si(MundumGenerare(&ego/*, entitates*/))redde 1;
		
		
		clavis = getch();
		
		muta(clavis){
			exemplum 'a':
				ego.meaPersona->posX-=1;
				seca;
			exemplum 'd':
				ego.meaPersona->posX+=1;
				seca;
			exemplum 'w':
				ego.meaPersona->posY-=1;
				seca;
			exemplum 's':
				ego.meaPersona->posY+=1;
				seca;
		}
		//lege("%s", impera);
		
		//si(!catcmp(impera, "mova %d %s")){
		//	ego.meaPersona->posX+=1;
		//}
		
	}dum(/*catcmp(impera, "exite")*/clavis!='q');
	
	dealloc(ego.meaPersona);
	
	endwin();
	redde 0;
}
