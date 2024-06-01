#include <iostream>
#include <graphics.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;
int main(){
    initwindow(900,650,"Menu");
    setviewport(0,0,900,650,5);
    setbkcolor(COLOR(236,210,132));
    clearviewport();
    readimagefile("peje.png",50,250,200,100);
    setcolor(WHITE);
    settextstyle(10,0,7);
    //outtextxy(50,100,"Bebidas y postres");
    getch();
    return 0;
}
