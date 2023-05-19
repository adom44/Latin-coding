#include "../latin.h"
int latitudoMundi=100, longitudoMundi=50;


vacuum MundumGenerare(){
	per(int y=1; y<=longitudoMundi; y++){
		per(int x=1; x<=latitudoMundi; x++){
			//depictare margines mappae
			si(x==1 || x==latitudoMundi || y==1 || y==longitudoMundi){
				scribe("#");
			}aliter{
				scribe(" ");
			}
		}
		scribe("%c",NOVA_LINEA);
	}
}

integer primus(){
	MundumGenerare();
	
	redde 0;
}
