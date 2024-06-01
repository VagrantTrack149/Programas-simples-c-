#include<iostream>
#include<cstdlib>
using namespace std;
struct nodo{
	int dato;
	nodo* next;
	nodo* back;
}*First, *end;
void Insertar();
void Buscar();
void Mod();
void Eliminar();
void Mostrar();
void menu();
void Ordenar(int,int);
int numero,Q[100];
QuickSort(int Q[100], int primero, int ultimo){
	fflush(stdin);
	int central, pivote, temporal,i,j;
	central = (primero +ultimo)/2; 
	pivote = Q[central];
	i= primero;
	j= ultimo;
	do{	
		while(Q[i]<pivote) i++; 
		while(Q[j]>pivote) j--; 
		if(i<=j){
			temporal=Q[i];
			Q[i]=Q[j];
			Q[j]=temporal;
			i++;
			j--;
		}
	}while(i<=j);
	if(primero<j){
		QuickSort(Q, primero,j);
	}
	if(i<ultimo){
		QuickSort(Q,i,ultimo);
	}
}
mostrarOrden(int Q[100], int numero){
	int i,j;
	cout<<endl;
	cout<<"\nQuicksort"<<endl;
	cout<<"\nOrden Ascendente"<<endl;
	for(i=0;i<=numero;i++){
		cout<<Q[i]<<" ";
	}
	cout<<"\nOrden Descendente"<<endl;
	for(i=numero;i>=0;i--){
		cout<<Q[i]<<" ";
	}
}
Burbuja(struct nodo&q){
	nodo* actual=new nodo();
	
	actual=q.back;
	struct nodo *aux,*aux1;
	int p_aux;
	while(aux->next!=NULL){
		aux1=aux->next;
		while(aux1!=NULL){
			if(aux->dato>aux1->dato){
				p_aux=aux->dato;
				aux->dato=aux1->dato;
			}
			aux1=aux1->next;	
		}
		aux=aux->next;
	}
	if(q.back!=NULL){
		while(actual!=NULL){
			cout<<" "<<actual->dato;
			actual=actual->back;
		}
	}
}
Insercion(int Q[100],int numero){
	int aux,i;
	aux=0;
	int pos;
	for(i=0;i<=numero;i++){
		pos=i;
		aux=Q[i];
		while((pos>0)&&(Q[pos-1]>aux)){
			Q[pos]=Q[pos-1];
			pos--;
		}
		Q[pos]=aux;
	}
	cout<<"Inserci�n"<<endl;
	cout<<"Orden Ascendente"<<endl;
	for(i=0;i<=numero;i++){
		cout<<Q[i]<<" ";
	}
	cout<<"\nOrden Descendente"<<endl;
	for(i=numero;i>=0;i--){
		cout<<Q[i]<<" ";
	}
}
Seleccion(int Q[100],int numero){
	int aux,i,j;
	aux=0;
	int min=0;
	for(i=0;i<numero;i++){
		min=i;
		for(j=i+1;j<numero;j++){
			if(Q[j]<Q[min]){
				min=j;
			}
		}
		aux=Q[i];
		Q[i]=Q[min];
		Q[min]=aux;
	}	
	cout<<"Selecci�n"<<endl;
	cout<<"Orden Ascendente"<<endl;
	for(i=0;i<=numero;i++){
		cout<<Q[i]<<" ";
	}
	cout<<"\nOrden Descendente"<<endl;
	for(i=numero;i>=0;i--){
		cout<<Q[i]<<" ";
	}	
}
int main(int numero){
	int op;
	struct nodo q;
	do{
		menu();
		cin>>op;
		switch(op){
			case 1:
				cout<<"\n\n Insertar dato: \n\n";
				Insertar();				
			break;
			case 2:
				cout<<"Buscar dato: \n";
				Buscar();
			break;
			case 3:
				cout<<"Modificar dato: \n";
				Mod();
			break;
			case 4:
				cout<<"Elimnar dato\n";
				Eliminar();
			break;
			case 5:
				cout<<"Mostar lista sin ordenar\n";
				Mostrar();
			break;
			case 6:
				cout<<"Ordenar lista\n";
				Ordenar(op,Q);
			break;
			case 0:
				cout<<"\n\n Saliendo.";
				break;
			default:
				cout<<"Opcion invalida";
		}
		cout<<endl<<endl;
		system("pause");
		system("cls");
	}while(op!=0);
	return 0;
}
void Insertar(){
	nodo* nuevo = new nodo();
	cout<<"Ingrese un dato: ";
	cin>>nuevo->dato;
	if(First==NULL){
		First=nuevo;
		First->next=NULL;
		First->back=NULL;
		end=First;
	}else{
		end->next=nuevo;
		nuevo->next=NULL;
		nuevo->back=end;
		end=nuevo;
	}
	cout<<"\n Elemento: "<<nuevo->dato<<" ingresado\n\n";
}
void Buscar(){
	nodo* actual = new nodo();
	actual=First;
	int nodoBuscado=0;
	bool encontrado=false;
	if(First!=NULL){
		cout<<"Ingrese el dato a buscar: ";
		cin>>nodoBuscado;
		while(actual!=NULL && encontrado!=true){
			if(actual->dato==nodoBuscado){
				cout<<"\n Dato "<<nodoBuscado<<" encontrado ";
				encontrado=true;
			}
			actual=actual->	next;
		}
		if(!encontrado){
			cout<<"El elemento no esta en la lista";
		}
	}else{
		cout<<"Lista vacia";
	}
}
void Mod(){
	nodo* actual = new nodo();
	actual=First;
	int nodoBuscado=0;
	bool encontrado=false;
	if(First!=NULL){
		cout<<"Ingrese el dato a buscar: ";
		cin>>nodoBuscado;
		while(actual!=NULL && encontrado!=true){
			if(actual->dato==nodoBuscado){
				cout<<"\n Dato "<<nodoBuscado<<" encontrado "<<endl;
				cout<<"\n Ingrese el nuevo dato: ";
				cin>>actual->dato;
				cout<<"\n\t Dato modificado con exito";
				
				encontrado=true;
			}
			actual=actual->	next;
		}
		if(!encontrado){
			cout<<"El elemento no esta en la lista";
		}
	}else{
		cout<<"Lista vacia";
	}
}
void Eliminar(){
	nodo* actual = new nodo();
	actual=First;
	nodo* prev = new nodo();
	prev=NULL;
	int nodoBuscado=0;
	bool encontrado=false;
	if(First!=NULL){
		cout<<"Ingrese el dato a buscar: ";
		cin>>nodoBuscado;
		while(actual!=NULL && encontrado!=true){
			if(actual->dato==nodoBuscado){
				cout<<"\n Dato "<<nodoBuscado<<" encontrado ";
				if(actual==First){
					First=First->next;
					First->back=NULL;
				}else if(actual==end){
					prev->next=NULL;
					end=prev;					
				}else{
					prev->next=actual->next;
					actual->next->back=prev;
				}
				cout<<"Nodo Eliminado";
				encontrado=true;
			}
			prev=actual;
			actual=actual->	next;
		}
		if(!encontrado){
			cout<<"El elemento no esta en la lista";
		}
	}else{
		cout<<"Lista vacia";
	}
}
void Mostrar(){
	nodo* actual = new nodo();
	actual=First;
	
	if(First!=NULL){
		while(actual!=NULL){
			cout<<" "<<actual->dato;
			actual=actual->next;
		}
	}else{
		cout<<"\n Lista Vacia";
	}	
}
void menu(){
	cout<<"Men� de algoritmos de ordenamiento"<<endl;
	cout<<"Primero, debe llenar el arreglo antes de ordenar:"<<endl;
    cout<<"1. Insertar un dato"<<endl;
    cout<<"2. Buscar un dato"<<endl;
    cout<<"3. Modificar un dato"<<endl;
    cout<<"4. Eliminar"<<endl;
    cout<<"5. Mostar"<<endl;
    cout<<"6. Ordenar"<<endl;
    cout<<"0. Salir"<<endl;
    cout<<"\n\t Ingrese opcion: ";
}
void Ordenar(int op, int Q[100]){
	int p;
	cout<<"Men� de algoritmos de ordenamiento"<<endl;
    cout<<"1. Burbuja"<<endl;
    cout<<"2. Inserci�n"<<endl;
    cout<<"3. Selecci�n"<<endl;
    cout<<"4. Quicksort"<<endl;
    cout<<"5. Regresar"<<endl;
    cout<<"Ingrese opcion: ";
	cin>>p;
    switch(p){
    	case 1: system("cls");
    			//Burbuja();
    	break;
    	case 2:
    			system("CLS");
    			Insercion(Q,numero);
    	break;
    	case 3:
    			system("CLS");
    			Seleccion();
    	break;
    	case 4:	system("CLS");
    			QuickSort(Q,0, numero-1);
				mostrarOrden(Q, numero);
    	break;
		case 5:
				system("CLS");
				menu();
				cin>>op;
		break;
	}
}
