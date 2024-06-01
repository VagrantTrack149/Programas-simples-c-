#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
 
struct pila
{
int d;
pila *a;
}*c,*e;
 
void menu(void);
void ingresar(void);
void sacar (void);
void actualizar_pila(void);
 
main()
{
menu();
}
void menu(void)
{
int y,opc;
 for(;;)
 {
 cout<<"\n1. Ingresar datos";
 cout<<"\n2. Sacar datos";
 cout<<"\n0. Terminar";
 cout<<"\n Ingrese opcion: ";cin>>opc;
 switch(opc)
 {
 case 1:
 ingresar();
 break;
 case 2: sacar();
 break;
 case 0: exit(1);
 default: cout<<"\n Opcion no valida!!"; break;
 }
actualizar_pila();
cout<<"\n\nOprima una tecla para continuar";
getch();
 }
}
 
void ingresar (void)
{
 if(!c)
 {
 c=new(pila);
 cout<<"Ingrese elemento: ";
 cin>>c->d;
 c->a=NULL;
 return;
 }
 
 e=new(pila);
 cout<<"\nIngrese elemento: ";
 cin>>e->d;
 e->a=c;
 c=e;
}
 
void sacar(void)
{
 if(!c)
 {
 cout<<"\n\nNo hay elementos!!";
 return;
 }
 
 e=new(pila);
 e=c;
 cout<<"\n\nElemento eliminado: " <<e->d;
 c=e->a;
 delete(e);
 
}
void actualizar_pila(void)
{
 int i,ca=0;
 e=c;
 while(e)
 {
 ca++;
 e=e->a;
 }
 
for(i=0;i<=ca;i++)
 {
 cout<<" ";
 }
 //muestro lo que tiene la pila!!
 i=0;
 e=c;
 while(e)
 {
 cout<<"\n";
 cout<<++i<<" - "<<e->d;
 e=e->a;
 }
}
