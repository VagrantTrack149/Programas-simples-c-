#include "iostream"
#include "conio.h"
#include "stdlib.h"
using namespace std;
struct nodo_grafo{
	char nombre;
	struct nodo_grafo *sgt;
	struct arista *arp;
};
struct arista{
    int p;
	struct nodo_grafo *dest;
	struct arista *sgt;
};
typedef struct nodo_grafo *Tnodo;
typedef struct arista *Tarista;
Tnodo c;
void insertar_nodo();
void agrega_arista(Tnodo &,Tnodo &,Tarista &);
void insertar_arista();
void vaciar_aristas(Tnodo &);
void eliminar_nodo();
void eliminar_arista();
void mostrar_grafo();
void mostrar_aristas();

int main(void){
	c=NULL;
	int op;
	do{
	cout<<"Menu grafos"<<endl;
	cout<<"1. Insertar Nodo"<<endl;
	cout<<"2. Insertar Arista"<<endl;
	cout<<"3. Eliminar Nodo"<<endl;
	cout<<"4. Eliminar Arista"<<endl;
	cout<<"5. Mostrar Grafo"<<endl;
	cout<<"6. Mostar Aristas de un nodo"<<endl;
	cout<<"7. Salir"<<endl;
	cout<<"Ingrese una opcion";
	cin>>op;
	
	switch(op)
	{
		case 1:
			insertar_nodo();
			break;
		case 2:
		   insertar_arista();
		   break;
		case 3:
		   eliminar_nodo();	
		   break;
		case 4:
			eliminar_arista();
			break;
		case 5:
			mostrar_grafo();
			break;
		case 6:
			mostrar_aristas();
			break;
	}
	cout<<"\n"<<endl;
	system("pause"); system("cls");
}while(op!=7);
	getch();
	return 0;
}
//funcion insertar nodo//
void insertar_nodo(){
	Tnodo t,nuevo=new struct nodo_grafo;
	cout<<"Ingrese variable";
	cin>>nuevo->nombre;
	nuevo->sgt=NULL;
	nuevo->arp=NULL;
	if(c==NULL){
		c=nuevo;
		cout<<"primer nodo";
	}else{
		t=c;
		while(t->sgt!=NULL){
			t=t->sgt;
		}
		t->sgt=nuevo;
		cout<<"nodo ingresado";
	}
}
//agrega arista a dos nodos//
void agrega_arista(Tnodo &aux, Tnodo &aux2, Tarista &nuevo){
	Tarista q;
	if(aux->arp==NULL){
		aux->arp=nuevo;
		nuevo->dest=aux2;
		cout<<"primer arista agregada";
	}else{ q=aux->arp;
		while(q->sgt!=NULL){
			q=q->sgt;
		}  
		    nuevo->dest=aux2;
			q->sgt=nuevo;
			cout<<"Arista agregada";
	}

}
//insertar arista busca la posicion de memoria de dos nodos y luego llama a agrega_arista para insertarla//
void insertar_arista(){
	char ini, fin;
	Tarista nuevo= new struct arista;
	Tnodo aux,aux2;
	if(c==NULL){
		cout<<"grafo vacio";
		return;
	}
	nuevo->sgt=NULL;
	cout<<"Ingrese el nodo de inicio";
	cin>>ini;
	cout<<"Ingrese nodo final";
	cin>>fin;
	aux=c;
	aux2=c;
	while(aux2!=NULL){
		if(aux2->nombre==fin){
			break;
		}
		aux2=aux2->sgt;
	}
	while(aux!=NULL){
		if(aux->nombre==ini){
			agrega_arista(aux,aux2,nuevo);
			return;
		}
		aux=aux->sgt;
	}
}
// es usada para poder eliminar un nodo ya que si tiene aristas es necesario eliminarlas tambien//
void vaciar_aristas(Tnodo &aux){
	Tarista q,r;
	q=aux->arp;
	while(q->sgt!=NULL){
		r=q;
		q=q->sgt;
		delete(r);
	}
}
//eliminar nodo elimina un nodo del grafo pero para poder hacer esto hay que eliminar las aristas//
//por lo que se llama a la funcion vaciar_aristas//
void eliminar_nodo(){
	char var;
	Tnodo aux,ant;
	aux=c;
  if(c==NULL){
  	cout<<"Grafo vacio..";
  }else{
  cout<<"Ingrese nombre del nodo";
  cin>>var;
  while(aux!=NULL){
  	if(aux->nombre==var){
  		if(aux->arp!=NULL){
  			vaciar_aristas(aux);
		  }
		  if(aux==c){
		  	c=c->sgt;
		  	delete(aux);
		  	cout<<"Nodo eliminado..";
		  	return;
		  }
	  else{
	  	ant->sgt=aux->sgt;
	  	delete(aux);
	  	cout<<"Nodo eliminado";
	  	return;
	  }
    }else{
    	ant=aux;
    	aux=aux->sgt;
	}
  }
}
}
//usada para eliminar una arista//
void eliminar_arista(){
	char ini,fin;
	    Tnodo aux,aux2;
	    Tarista q,r;
	    cout<<"Eliminar arista \n";
	    cout<<"Ingrese nodo de inicio";
	    cin>>ini;
	    cout<<"Ingrese nodo final";
	    cin>>fin;
	    aux=c;
	    aux2=c;
	    while(aux2!=NULL){
	    	if(aux2->nombre==fin){
	    		break;
	    	}else{
	         aux2=aux2->sgt;
			}
		}
		while(aux!=NULL){
		   if(aux->nombre==ini){
		   	q=aux->arp;
		   	while(q!=NULL){
		   		if(q->dest==aux2){
		   			if(q==aux->arp){
		   				aux->arp=aux->arp->sgt;
					   }else{
					   	r->sgt=q->sgt;
					   }
					   delete(q);
					   cout<<"Arista "<<aux->nombre<<" ------> "<<aux2->nombre<<" Eliminada";
					   return;
				   }
			   }
			   r=q;
			   q=q->sgt;
		   }
		   aux=aux->sgt;
		}
}
//mostrar grafo//
void mostrar_grafo(){
	Tnodo ptr;
	Tarista ar;
	ptr=c;
	cout<<"Nodo en lista de adyacencia\n";
	while(ptr!=NULL){
		cout<<"  "<<ptr->nombre<<"|";
		if(ptr->arp!=NULL){
			ar=ptr->arp;
			while(ar!=NULL){
			  cout<<" "<<ar->dest->nombre;
			  ar=ar->sgt;
			}
		}
		ptr=ptr->sgt;
		cout<<endl;
	}
}
//muestra todas las aristas de un nodo seleccionado//
void mostrar_aristas(){
	Tnodo aux;
	Tarista ar;
	char var;
	cout<<"Mostrar aristas de nodo\n";
	cout<<"Ingrese nodo";
	cin>>var;
	aux=c;
	while(aux!=NULL){
		if(aux->nombre==var){
			if(aux->arp==NULL){
				cout<<"El nodo no tiene aristas";
				return;
			}else {
				cout<<"Nodo|lista de adyacencia\n";
				cout<<"   "<<aux->nombre<<"|";
				ar=aux->arp;
				while(ar!=NULL){
					cout<<ar->dest->nombre<<" ";
					ar=ar->sgt;
				}
				cout<<endl;
				return;
			}
		}else{
      	aux=aux->sgt;
	  }
	}	
}
