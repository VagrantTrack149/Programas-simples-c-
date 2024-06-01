#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;


//Estructura del arbol.
struct Nodo_arbol{
	int dato;
	Nodo_arbol *der;
	Nodo_arbol *izq;
	Nodo_arbol *padre;
};

void menu();
Nodo_arbol *crearNodo(int,Nodo_arbol *);
void insertarNodo(Nodo_arbol *&,int,Nodo_arbol *);
void mostrarArbol(Nodo_arbol *,int);
void eliminar(Nodo_arbol *, int);
void eliminarNodo(Nodo_arbol *);
Nodo_arbol *minimo(Nodo_arbol *);
void reemplazar(Nodo_arbol *, Nodo_arbol *);
void destruirNodo(Nodo_arbol *);

Nodo_arbol *arbol = NULL;

int main(){
	menu();
	
	getch();
	return 0; 
}

void menu(){
	int dato, opcion, contador=0;
	
	do{
		cout<<"\n\n\t------------------------------------------------\n";
		cout<<"\t|        �QUE METODO QUIERES UTILIZAR?           |\n";
		cout<<"\t|------------------------------------------------|\n";
		cout<<"\t|                                                |\n";
		cout<<"\t|                   1. INSERTAR NODO             |\n";
		cout<<"\t|                   2. MOSTRAR NODO              |\n";
		cout<<"\t|                   3. ELIMINAR NODO             |\n";
		cout<<"\t|                   4. SALIR                     |\n";
		cout<<"\t|                                                |\n";
		cout<<"\t--------------------------------------------------\n";
		cout<<"\n\tIngrese una opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1: cout<<"\n\tDigite un numero: ";
					cin>>dato;
					insertarNodo(arbol,dato,NULL);
					cout<<endl;
					system("pause");
					break;
			case 2: cout<<"\n\tMOSTRANDO EL ARBOL: \n";
					mostrarArbol(arbol,contador);
					cout<<endl;
					system("pause");
					break;
			case 3: cout<<"\n\tDigite el numero a eliminar: ";
					cin>>dato;
					eliminar(arbol, dato);
					cout<<endl;
					system("pause");
					break;
		}
		system("cls");
	}while(opcion != 4);
}

//Funcion para crear el nodo
Nodo_arbol *crearNodo(int n,Nodo_arbol *padre){
	Nodo_arbol *nuevo_nodo = new Nodo_arbol();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	nuevo_nodo->padre = padre;
	
	return nuevo_nodo; 
}

//Funcion para insertar el nodo
void insertarNodo(Nodo_arbol *&arbol, int n, Nodo_arbol *padre){
	if(arbol == NULL){
		Nodo_arbol *nuevo_nodo = crearNodo(n, padre);
		arbol = nuevo_nodo;
	}
	else{
		int valorRaiz = arbol->dato;
		if(n<valorRaiz){
			insertarNodo(arbol->izq,n,arbol);
		}
		else{
			insertarNodo(arbol->der,n,arbol);
		}
	}	
}

//Funcion para mostrar arbol
void mostrarArbol(Nodo_arbol *arbol, int cont){
	if(arbol == NULL){
		return;
	}
	else{
		mostrarArbol(arbol->der, cont+1);
		for(int i=0;i<cont;i++){
			cout<<"   ";
		}
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izq, cont+1);
	}
}

//Funcion eliminar nodo.
void eliminar(Nodo_arbol *arbol, int n){
	if(arbol == NULL){
		return;
	}
	else if(n < arbol->dato){
		eliminar(arbol->izq,n);
	}
	else if(n > arbol->dato){
		eliminar(arbol->der,n);
	}
	else{
		eliminarNodo(arbol);
	}
}

void eliminarNodo(Nodo_arbol *nodoEliminar){
	if(nodoEliminar->izq && nodoEliminar->der){
		Nodo_arbol *menor = minimo(nodoEliminar->der);
		nodoEliminar->dato = menor->dato;
		eliminarNodo(menor);
	}
	else if(nodoEliminar->izq){
		reemplazar(nodoEliminar, nodoEliminar->izq);
		destruirNodo(nodoEliminar);
	}
	else if(nodoEliminar->der){
		reemplazar(nodoEliminar, nodoEliminar->der);
		destruirNodo(nodoEliminar);
	}
	else{
		reemplazar(nodoEliminar, NULL);
		destruirNodo(nodoEliminar);
	}
}

//Funcion minimo
Nodo_arbol *minimo(Nodo_arbol *arbol){
	if(arbol == NULL){
		return NULL;
	}
	if(arbol->izq){
		return minimo(arbol->izq);
	}
	else{
		return arbol;
	}
}

//Funcion reemplazar
void reemplazar(Nodo_arbol *arbol, Nodo_arbol *nuevoNodo){
	if(arbol->padre){
		if(arbol->dato == arbol->padre->izq->dato){
			arbol->padre->izq = nuevoNodo;
		}
		else if(arbol->dato == arbol->padre->der->dato){
			arbol->padre->der = nuevoNodo;
		}
	}
	if(nuevoNodo){
		nuevoNodo->padre = arbol->padre;
	}
}

void destruirNodo(Nodo_arbol *nodo){
	nodo->izq = NULL;
	nodo->der = NULL;
	
	delete nodo;
}
