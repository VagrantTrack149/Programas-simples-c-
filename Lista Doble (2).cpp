#include<iostream>
#include<cstdlib>
using namespace std;

struct nodo{
	int dato;
	nodo* siguiente;
	nodo* atras;
}*primero, *ultimo;

void insertarNodo();
void buscarNodo();
void modificarNodo();
void eliminarNodo();
void mostrarListaPU();
void mostrarListaUP();
void menu();

int main(){
	system("color 9f");
	int op;
	do{
		menu();
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"\n\n INSERTAR DATO EN LA LISTA \n\n";
				insertarNodo();				
				break;
			case 2:
				cout<<"\n\n BUSCAR DATO EN LA LISTA \n\n";
				buscarNodo();
				break;
			case 3:
				cout<<"\n\n MODIFICAR DATO EN LA LISTA \n\n";
				modificarNodo();
				break;
			case 4:
				cout<<"\n\n ELIMINAR DATO EN LA LISTA \n\n";
				eliminarNodo();
				break;
			case 5:
				cout<<"\n\n MOSTRAR DATOS DE LA LISTA P-U \n\n";
				mostrarListaPU();
				break;
			case 6:
				cout<<"\n\n MOSTRAR DATOS DE LA LISTA U-P \n\n";
				mostrarListaUP();
				break;
			case 7:
				cout<<"\n\n SALIR DEL PROGRAMA";
				break;
			default:
				cout<<"Opcion no valida...!!!";
		}
		cout<<endl<<endl;
		system("pause");
		system("cls");
	}while(op!=7);
	return 0;
}

void insertarNodo(){
	nodo* nuevo = new nodo();
	cout<<"Ingrese un dato: ";
	cin>>nuevo->dato;
	
	if(primero==NULL){
		primero=nuevo;
		primero->siguiente=NULL;
		primero->atras=NULL;
		ultimo=primero;
	}else{
		ultimo->siguiente=nuevo;
		nuevo->siguiente=NULL;
		nuevo->atras=ultimo;
		ultimo=nuevo;
	}
	cout<<"\n Elemento: "<<nuevo->dato<<" ingresado\n\n";
}
void buscarNodo(){
	nodo* actual = new nodo();
	actual=primero;
	int nodoBuscado=0;
	bool encontrado=false;
	
	if(primero!=NULL){
		cout<<"Ingrese el dato a buscar: ";
		cin>>nodoBuscado;
		
		while(actual!=NULL && encontrado!=true){
			if(actual->dato==nodoBuscado){
				cout<<"\n Dato "<<nodoBuscado<<" encontrado ";
				encontrado=true;
			}
			actual=actual->	siguiente;
		}
		if(!encontrado){
			cout<<"El elemento no esta en la lista";
		}
	}else{
		cout<<"Lista vacia...!!!";
	}
	
}
void modificarNodo(){
	nodo* actual = new nodo();
	actual=primero;
	int nodoBuscado=0;
	bool encontrado=false;
	
	if(primero!=NULL){
		cout<<"Ingrese el dato a buscar: ";
		cin>>nodoBuscado;
		
		while(actual!=NULL && encontrado!=true){
			if(actual->dato==nodoBuscado){
				cout<<"\n Dato "<<nodoBuscado<<" encontrado "<<endl;
				//solicitamos el dato a remplazar
				cout<<"\n Ingrese el nuevo dato: ";
				cin>>actual->dato;
				cout<<"\n\t Dato modificado con exito...!!!";
				
				encontrado=true;
			}
			actual=actual->	siguiente;
		}
		if(!encontrado){
			cout<<"El elemento no esta en la lista";
		}
	}else{
		cout<<"Lista vacia...!!!";
	}
}
void eliminarNodo(){
	nodo* actual = new nodo();
	actual=primero;
	nodo* anterior = new nodo();
	anterior=NULL;
	int nodoBuscado=0;
	bool encontrado=false;
	
	if(primero!=NULL){
		cout<<"Ingrese el dato a buscar: ";
		cin>>nodoBuscado;
		
		while(actual!=NULL && encontrado!=true){
			if(actual->dato==nodoBuscado){
				cout<<"\n Dato "<<nodoBuscado<<" encontrado ";
				//Eliminar dato encontrado
				if(actual==primero){//elimina el primer elemento de la lista
					primero=primero->siguiente;
					primero->atras=NULL;
				}else if(actual==ultimo){//elimina el �ltimo elemento de la lista 
					anterior->siguiente=NULL;
					ultimo=anterior;					
				}else{//elimina cualquier elemento del centro de la lista
					anterior->siguiente=actual->siguiente;
					actual->siguiente->atras=anterior;
				}
				cout<<"Nodo Eliminado";
				encontrado=true;
			}
			anterior=actual;
			actual=actual->	siguiente;
		}
		if(!encontrado){
			cout<<"El elemento no esta en la lista";
		}
	}else{
		cout<<"Lista vacia...!!!";
	}
}
void mostrarListaPU(){
	nodo* actual = new nodo();
	actual=primero;
	
	if(primero!=NULL){
		while(actual!=NULL){
			cout<<" "<<actual->dato;
			actual=actual->siguiente;
		}
	}else{
		cout<<"\n Lista Vacia...!!!";
	}	
}
void mostrarListaUP(){
	nodo* actual = new nodo();
	actual=ultimo;
	
	if(primero!=NULL){
		while(actual!=NULL){
			cout<<" "<<actual->dato;
			actual=actual->atras;
		}
	}else{
		cout<<"\n Lista Vacia...!!!";
	}
	
	
	
}
void menu(){
	cout<<" \t|-------------------------------------------|\n";
    cout<<" \t|		IMPLEMENTACION DE UNA LISTA SIMPLE    |\n";
    cout<<" \t|-------------------------------------------|\n";
    cout<<" \t|                                           |\n";
    cout<<" \t|  1. INSERTAR                              |"<<endl;
    cout<<" \t|  2. BUSCAR                             	  |"<<endl;
    cout<<" \t|  3. MODIFICAR                             |"<<endl;
    cout<<" \t|  4. ELININAR                              |"<<endl;
    cout<<" \t|  5. MOSTRAR P-U                        	  |"<<endl;
    cout<<" \t|  6. MOSTRAR U-P                        	  |"<<endl;
    cout<<" \t|  7. SALIR                                 |"<<endl;
    cout<<" \t|                                           |"<<endl;
    cout<<" \t|-------------------------------------------|\n";
    cout<<"\n\t Ingrese opcion: ";
}
