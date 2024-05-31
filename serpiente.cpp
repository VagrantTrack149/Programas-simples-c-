#include <windows.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
    //Controles
#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80
#define ESC 27

int cuerpo[500][2];
int n=1;
int tam=3;
int x=10, y=12, dir=3;
char tecla,p,f;
int xc=30, yc=15, vel=100, punt=10 ,h=1,s;
void inicio(){
	printf("SNAKE GAME\n");
	printf("CONTROLES:\n");
	printf("FLECHAS PARA MOVERTE\n");
	printf("ESC PARA SALIR\n");
	printf("PRESIONA CUALQUIER TECLA PARA COMENZAR\n");
	scanf("%c",&p);
	system("cls");
}
void gotoxy(int x, int y)
{
    HANDLE hCon;
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    hCon= GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hCon,dwPos);
}
void pintar( ){
    //limites horizontales
    for(int i=2; i<100;i++){
        gotoxy(i,3); printf("%c",205);
        gotoxy(i,23); printf("%c",205);
    }
    //limites verticales
     for(int i=4; i<23;i++){
        gotoxy(2,i); printf("%c",186);
        gotoxy(99,i); printf("%c",186);
    }
    //esquinas
    gotoxy(2,3); printf("%c",201);
    gotoxy(2,23); printf("%c",200);
    gotoxy(99,3); printf("%c",187);
    gotoxy(99,23); printf("%c",188);
}
void guardar_posicion(){
	cuerpo[n][0]=x;
	cuerpo[n][1]=y;
	n++;
	if(n==tam){
		n=1;
	}
}
void pintar_cuerpo(){
	for(int i=1;i<tam;i++){
		gotoxy(cuerpo[i][0],cuerpo[i][1]); printf("*");
	}
}
void borrar_cuerpo(){
		gotoxy(cuerpo[n][0],cuerpo[n][1]); printf(" ");
}
void cambio(){
	if(punt==h*20){
		vel-=10;
		h++;
	}
}
void comida(){
	if(x==xc && y==yc){
		xc=(rand()%86)+4;
		yc=(rand()%19)+4;
		tam++;
		punt+=10;
		gotoxy(xc,yc);printf("%c",4);
		cambio();
	}
}
bool lose(){
	if(y==3 || y==23 || x==2 || x==99) return true;
	for(int j=tam-1;j>0;j--){
		if(cuerpo[j][0]==x && cuerpo[j][1]==y){
			return true;
		}
	}
		return false;
}
void controles(){
			if(kbhit()){
			tecla=getch();
			switch(tecla){
				case UP:
					if(dir !=2){
					dir=1;}
					break;
				case DOWN:
					if(dir!=1){
					dir=2;
					break;}
				case RIGHT:
					if(dir!=4){
					dir=3;
					break;}
				case LEFT:
					if(dir!=3){
					dir=4;
					break;}
			}
		}
}
void puntos(){
	gotoxy(3,1);printf("Puntos: %d",punt);
}

main(){
	inicio();
	if(p!=ESC){
	pintar();
	gotoxy(xc,yc);printf("%c",4);
	while(tecla !=ESC && !lose()){
		borrar_cuerpo();
		guardar_posicion();
		pintar_cuerpo();
		comida();
		controles();
		controles();
		puntos();
		if(dir==1) y--;
		if(dir==2) y++;
		if(dir==3) x++;
		if(dir==4) x--;
		Sleep(vel);
	}}
    system("PAUSE");
    return 0;
}
