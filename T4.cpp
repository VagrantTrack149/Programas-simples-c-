//Neil Otniel Moreno Rivera
#include<iostream>
#include<cstdlib>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <locale.h>
using namespace std;
/* La manera en que fue desarrollado el programa, fue mezclando ambos programas, colas y pilas, haciendo que cada estructura tuviera un nombre diferenciado y los apuntadores tuvieran 
Un nombre ilustrativo, lo suficiente para poder seguir el camino y/o saber su funcionamiento, algunas variables fueron usadas en ambos casos, puesto que no afectaban o apesar de tener 
el mismo nombre, eran variables totalmente independientes, por las clases, si hubieramos desarrollado el programa con funciones, la cosa hubiera sido distinta.*/
struct strcola{
    int nro;
    struct strcola *sgte;
    struct strcola *ptr;
};
typedef struct strcola *ptr;
class Cola{
    public:
        Cola();
        void Encolar(int);
        int Desencolar( );
        bool ColaVacia();
        void MostrarCola();
        void VaciarCola();
    private:
        ptr front;
        ptr back;
};
Cola::Cola(void){
    front=NULL;
    back=NULL;
}
bool Cola::ColaVacia(){
    if(front==NULL)
        return true;
    else return false;
}
void Cola::Encolar(int x){
     ptr p_aux;
     p_aux=new(struct strcola);
     p_aux->nro=x;
     p_aux->sgte=NULL;
     if(front==NULL)
        front=p_aux;
     else back->sgte=p_aux;
        back=p_aux;
}
int Cola::Desencolar(){
    int n;
    ptr p_aux;
    p_aux=front;
    n=p_aux->nro;
    front=(front)->sgte;
    delete(p_aux);
    return n;
}
void Cola::MostrarCola(){
    ptr p_aux;
     p_aux=front;
     while(p_aux!=NULL){
        cout<<"\t"<<p_aux->nro;
        p_aux=p_aux->sgte;
     }
}
void Cola::VaciarCola(){
 
     ptr p_aux,r_aux;
     p_aux=front;
     while(p_aux!=NULL){
        r_aux=p_aux;
        p_aux=p_aux->sgte;
        delete(r_aux);
     }
     front=NULL;
     back=NULL;
}
 
int menucola()
{
    cout<<"\nMenú de opciones, Colas:\n";
    cout<<"1. ENCOLAR"<<endl;
    cout<<"2. DESENCOLAR"<<endl;
    cout<<"3. MOSTRAR COLA"<<endl;
    cout<<"4. VACIAR COLA"<<endl;
    cout<<"5. SALIR"<<endl;
    cout<<"Ingrese opcion: ";
}
struct strpila{
	int num;
	struct strpila *sgte;
};

typedef struct strpila *pi;

class Pila{
	public:
		Pila();
		void Aplilar(int);
		int Desapilar();
		void Cima();
		bool PilaVacia();
		void MostrarPila();
		void DestruirPila();
	private:
		pi cima;
};

Pila::Pila(){
	cima=NULL;
}

bool Pila::	PilaVacia(){
	if(cima==NULL)
		return true;
	else
		return false;
}
void Pila::Aplilar(int g){
	pi p_aux;
	p_aux=new(struct strpila);
	p_aux->num=g;
	p_aux->sgte=cima;
	cima=p_aux;
}
int Pila::Desapilar(){
	int g;
	pi p_aux;
	if(cima==NULL)
		cout<<"\nPila Vacia"<<endl;
	else
	{
		p_aux=cima;
		g=p_aux->num;
		cima=cima->sgte;
		delete(p_aux);
	}
	return g;
}

void Pila::MostrarPila(){
	pi p_aux;
	p_aux=cima;
	
	while(p_aux!=NULL){
		cout<<"\t"<<p_aux->num<<endl;
		p_aux=p_aux->sgte;
	}
}
void Pila::DestruirPila(){
	pi p_aux;
	while(cima!=NULL)
	{
		p_aux=cima;
		cima=cima->sgte;
		delete(p_aux);
	}
}

void menupila(){
	cout<<"\nMenú de opciones, pilas:\n";
    cout<<"1. APILAR"<<endl;
    cout<<"2. DESAPILAR"<<endl;
    cout<<"3. MOSTRAR PILA"<<endl;
    cout<<"4. VACIAR PILA"<<endl;
    cout<<"5. SALIR"<<endl;
    cout<<"Ingrese opcion: ";
}
int main(){
    setlocale(LC_ALL, "spanish");
    Cola cola;
  	Pila pila;
    int x,g,op,w;
    cout<<"¿Desea entrar al menú de pilas o al menú de colas?\n"<<endl;
    cout<<"1.-Colas\n";
    cout<<"2.-Pilas\n";
    cout<<"Cualquier otro número, salir"<<endl;
    cin>>w;
 	switch(w){
 		case 1:
 			system("cls");
    		do{ menucola();  cin>> op;
        	switch(op){
            case 1: cout<< "\n\t Digite un número a encolar: "; cin>> x;
                    cola.Encolar(x);
                    cout<<"\n\n\t\tNúmero " << x <<" dentro de la cola"<<endl;
                    break;
            case 2:
                    if(cola.ColaVacia()==true)
                        cout<<"\n\n\tCola vacia.";
                    else{
                        x = cola.Desencolar( );
                        cout<<"\n\n\tNúmero "<<x<<" desencolado\n";
                        }
                    break;
            case 3:
                    cout << "\n\n\t Cola: \n\n";
                    if(cola.ColaVacia()!=true)
                        cola.MostrarCola();
                    else
                        cout<<"\n\n\tCola vacia..!"<<endl;
                    break;
            case 4:
                    cola.VaciarCola();
                    cout<<"\n\n\t\tCola eliminada";
                    break;
            default: cout<<"\n\tIngrese una opcion valida";
         }
        cout<<endl<<endl;
        system("pause");  system("cls");
    	}while(op!=5);
	break;
	case 2:
		do{
		menupila();
		cin>>op;
		switch(op){
			system("cls");
			case 1: cout<<"\n\tDigite número a apilar:";
			cin>>g;	pila.Aplilar(g);
			cout<<"\n\n\tNumero: "<<g<<" ahora es la cima"<<endl;
			break;
			case 2: 
			if(pila.PilaVacia()==true)
				cout<<"\n\n\tPila Vacia";				
			else
			{
				x=pila.Desapilar();
				cout<<"\n\n\tNumero: "<<g<<" desapilado\n\n";				
			}
			break;
			case 3:
				cout<<"\n\n\tPila:\n\n";
				if(pila.PilaVacia()!=true)
					pila.MostrarPila();	
				else
					cout<<"\n\n\tPila vacia"<<endl;	
				break;	
			case 4:
				pila.DestruirPila();
				cout<<"\n\n\tPila eliminda"<<endl;
			 	break;
			case 5:
				cout<<"Saliendo"<<endl;
			 	break;
		}system("pause");
		system("cls");
	}while(op!=5);
	break;
	default: cout<<"Saliendo..."<<endl;
	}
	system("pause");
return 0;
}
