#include <iostream>
#include <cstdlib>
#include <conio.h>
/*#include <Quick.h>
#include <Insersion.h>
#include <Secuencial.h>
#include <Binaria.h>*/
using namespace std;
//Tareas-Colas de prioridad
struct nodo{
    char dato;
    int priori;       
    string desc;
    struct nodo *sgte;
};
struct cola{
    nodo *delante;
    nodo *atras  ;
};
struct nodo *crearNodo( char x, int pr,string z){
    struct nodo *nuevoNodo = new(struct nodo);
    nuevoNodo->dato = x;
    nuevoNodo->priori = pr;
    nuevoNodo->desc=z;
    return nuevoNodo;
};
void encolar( struct cola &q, char valor, int priori,string desp ){
     struct nodo *aux = crearNodo(valor, priori,desp);
     aux->sgte = NULL;
     if( q.delante == NULL)
         q.delante = aux;   
     else
         (q.atras)->sgte = aux;
     q.atras = aux;        
}
void ordenarPrioridad( struct cola &q ){
     struct nodo *aux1, *aux2;
     int p_aux;
     char c_aux;
     string d_aux;  
     aux1 = q.delante;
     while( aux1->sgte != NULL){
            aux2 = aux1->sgte;
            while( aux2 != NULL){
                   if( aux1->priori < aux2->priori ){
                       p_aux = aux1->priori;
                       c_aux = aux1->dato;
                       d_aux=aux1->desc;
                       aux1->priori = aux2->priori;
                       aux1->dato   = aux2->dato;
                       aux1->desc=aux2->desc;
                       aux2->priori = p_aux;
                       aux2->dato   = c_aux;
                       aux2->desc=d_aux;
                   }
                   aux2 = aux2->sgte;
            }
            aux1 = aux1->sgte;
     }
}
void insertar( struct cola &q, char c, int pr,string x ){
     encolar( q, c, pr,x );
     ordenarPrioridad( q ); 
}
void muestraCola( struct cola q ){
     struct nodo *aux;
     aux = q.delante;
     cout << " Tarea|   Prioridad   |Descripcion " << endl;
     cout << " ------------------- " << endl;    
     while( aux != NULL ){
            cout<<"    "<< aux->dato << "     |   " << aux->priori<<"   |   "<<aux->desc << endl;
            aux = aux->sgte;
     }    
}
void vaciaCola( struct cola &q){
     struct nodo *aux;
     while( q.delante != NULL)
     {
            aux = q.delante;
            q.delante = aux->sgte;
            delete(aux);
     }
     q.delante = NULL;
     q.atras   = NULL;
     
}
bool contenido(struct cola&q){
    if(q.delante==NULL)
        return true;
    else return false;
}
int desencolar( struct cola &q ){
     int num,prio;
     string x;
     struct nodo *aux ;
     aux = q.delante;      // aux apunta al inicio de la cola
     num = aux->dato;
     prio=aux->priori;
     x=aux->desc;
     q.delante = (q.delante)->sgte;
     delete(aux);          // libera memoria a donde apuntaba aux
     return num;
}
//Empleados-Listas dobles
struct nodo_listas_dobles{
    int nivel,no_empleado;
    string nombre;
    nodo_listas_dobles* siguiente;
    nodo_listas_dobles* atras;    
}*primero,*ultimo;
void insertarem(){
    nodo_listas_dobles* nuevo=new nodo_listas_dobles();
    cout<<"Ingrese el nombre: "<<endl;
    cin>>nuevo->nombre;
    cout<<"Ingrese el no de empleado: "<<endl;
    cin>>nuevo->no_empleado;
    cout<<"Ingrese su nivel o rango: "<<endl;
    cin>>nuevo->nivel;
    if (primero==NULL){
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
    cout<<"\nNuevo empleado ingresado: "<<nuevo->no_empleado<<endl;
}
void buscarem(){
    nodo_listas_dobles* actual= new nodo_listas_dobles();
    actual=primero;
    int nodo_buscado=0;
    bool encontrado=false;
    if (primero!=NULL){
        cout<<"Ingrese el no de empleado: "<<endl;
        cin>>nodo_buscado;
        while (actual!=NULL && encontrado!=true){
            if (actual->no_empleado==nodo_buscado){
                cout<<"\n Empleado "<<nodo_buscado<<"Encontrado";
                encontrado=true;
            }
            actual=actual->siguiente;
        }
        if (!encontrado){
            cout<<"El no de empleado no se encontro"<<endl;
        }
    }else{
        cout<<"No hay empleados registrados"<<endl;
    }
}
void modificarem(){
    nodo_listas_dobles* actual= new nodo_listas_dobles();
    actual=primero;
    int nodo_buscado=0;
    bool encontrado=false;
    if (primero!=NULL){
        cout<<"Ingrese el no de empleado: "<<endl;
        cin>>nodo_buscado;
        while (actual!=NULL && encontrado!=true){
            if (actual->no_empleado==nodo_buscado){
                cout<<"\n Empleado "<<nodo_buscado<<"Encontrado";
                encontrado=true;
                cout<<"Ingrese el nuevo no de empleado: "<<endl;
                cin>>actual->no_empleado;
                cout<<"\nno de empleado modificado"<<endl;
            }
            actual=actual->siguiente;
        }
        if (!encontrado){
            cout<<"El no de empleado no se encontro"<<endl;
        }
    }else{
        cout<<"No hay empleados registrados"<<endl;
    }
}
void eliminarEm(){
    nodo_listas_dobles* actual=new nodo_listas_dobles();
    actual=primero;
    nodo_listas_dobles* anterior= new nodo_listas_dobles();
    anterior=NULL;
    int nodoBuscado=0;
    bool encontrado=false;
    if (primero!=ultimo){
        cout<<"Ingrese el no de empleado: "<<endl;
        cin>>nodoBuscado;
        while (actual!=NULL && encontrado!=true){
            if (actual->no_empleado==nodoBuscado){
                cout<<"\n Empleado "<<nodoBuscado<<"Encontrado";
                if (actual==primero){
                    primero=primero->siguiente;
                    primero->atras=NULL;
                }else if(actual==ultimo){
					anterior->siguiente=NULL;
					ultimo=anterior;					
				}else{
					anterior->siguiente=actual->siguiente;
					actual->siguiente=anterior->atras;
				}
				cout<<"\nEmpleado Eliminado";
				encontrado=true;
            }
            anterior=actual;
            actual=actual->siguiente;
        }
        if (!encontrado){
            cout<<"El no de empleado no se encontro"<<endl;
        }
    }else{
        cout<<"No hay empleados registrados o no se pueden eliminar al haber un solo empleado"<<endl;
    }
}

void mostarem(){
    nodo_listas_dobles* actual= new nodo_listas_dobles();
    actual=primero;
    if (primero!=NULL){
        while (actual!=NULL){
            cout<<"|"<<actual->nivel<<"|"<<actual->nombre<<"|"<<actual->no_empleado<<endl;
            actual=actual->siguiente;
        }
    }else{
        cout<<"No hay empleados registrados"<<endl;
    }
}
//Jerarquia-Arboles
struct Nodo_arbol{
	int dato;
	Nodo_arbol *der;
	Nodo_arbol *izq;
	Nodo_arbol *padre;
};
Nodo_arbol *crearNodo(int,Nodo_arbol *);
void insertarNodo(Nodo_arbol *&,int,Nodo_arbol *);
void mostrarArbol(Nodo_arbol *,int);
void eliminar(Nodo_arbol *, int);
void eliminarNodo(Nodo_arbol *);
Nodo_arbol *minimo(Nodo_arbol *);
void reemplazar(Nodo_arbol *, Nodo_arbol *);
void destruirNodo(Nodo_arbol *);
Nodo_arbol *arbol = NULL;
Nodo_arbol *crearNodo(int n,Nodo_arbol *padre){
	Nodo_arbol *nuevo_nodo = new Nodo_arbol();
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	nuevo_nodo->padre = padre;
	return nuevo_nodo; 
}
void insertarNodo(Nodo_arbol *&arbol, int n, Nodo_arbol *padre){
	if(arbol == NULL){
		Nodo_arbol *nuevo_nodo = crearNodo(n, padre);
		arbol = nuevo_nodo;
	}else{
		int valorRaiz = arbol->dato;
		if(n<valorRaiz){
			insertarNodo(arbol->izq,n,arbol);
		}
		else{
			insertarNodo(arbol->der,n,arbol);
		}
	}	
}
void mostrarArbol(Nodo_arbol *arbol, int cont){
	if(arbol == NULL){
		return;
	}else{
		mostrarArbol(arbol->der, cont+1);
		for(int i=0;i<cont;i++){
			cout<<"   ";
		}
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izq, cont+1);
	}
}
void eliminar(Nodo_arbol *arbol, int n){
	if(arbol == NULL){
		return;
	}else if(n < arbol->dato){
		eliminar(arbol->izq,n);
	}else if(n > arbol->dato){
		eliminar(arbol->der,n);
	}else{
		eliminarNodo(arbol);
	}
}
void eliminarNodo(Nodo_arbol *nodoEliminar){
	if(nodoEliminar->izq && nodoEliminar->der){
		Nodo_arbol *menor = minimo(nodoEliminar->der);
		nodoEliminar->dato = menor->dato;
		eliminarNodo(menor);
	}else if(nodoEliminar->izq){
		reemplazar(nodoEliminar, nodoEliminar->izq);
		destruirNodo(nodoEliminar);
	}else if(nodoEliminar->der){
		reemplazar(nodoEliminar, nodoEliminar->der);
		destruirNodo(nodoEliminar);
	}else{
		reemplazar(nodoEliminar, NULL);
		destruirNodo(nodoEliminar);
	}
}
Nodo_arbol *minimo(Nodo_arbol *arbol){
	if(arbol == NULL){
		return NULL;
	}if(arbol->izq){
		return minimo(arbol->izq);
	}else{
		return arbol;
	}
}
void reemplazar(Nodo_arbol *arbol, Nodo_arbol *nuevoNodo){
	if(arbol->padre){
		if(arbol->dato == arbol->padre->izq->dato){
			arbol->padre->izq = nuevoNodo;
		}
		else if(arbol->dato == arbol->padre->der->dato){
			arbol->padre->der = nuevoNodo;
		}
	}if(nuevoNodo){
		nuevoNodo->padre = arbol->padre;
	}
}
void destruirNodo(Nodo_arbol *nodo){
	nodo->izq = NULL;
	nodo->der = NULL;
	delete nodo;
}
//Conectividad-Grafos
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
Tnodo c;void insertar_nodo(){
	Tnodo t,nuevo=new struct nodo_grafo;
	cout<<"Ingrese la id de la sede: ";
	cin>>nuevo->nombre;
	nuevo->sgt=NULL;
	nuevo->arp=NULL;
	if(c==NULL){
		c=nuevo;
		cout<<"Sede ingresada"<<endl;
	}else{
		t=c;
		while(t->sgt!=NULL){
			t=t->sgt;
		}
		t->sgt=nuevo;
		cout<<"Sede ingresada"<<endl;
	}
}
void agrega_arista(Tnodo &aux, Tnodo &aux2, Tarista &nuevo){
	Tarista q;
	if(aux->arp==NULL){
		aux->arp=nuevo;
		nuevo->dest=aux2;
		cout<<"Conexion agregada"<<endl;
	}else{ q=aux->arp;
		while(q->sgt!=NULL){
			q=q->sgt;
		}  
		    nuevo->dest=aux2;
			q->sgt=nuevo;
			cout<<"Conexion agregada"<<endl;
	}
}
void insertar_arista(){
	char ini, fin;
	Tarista nuevo= new struct arista;
	Tnodo aux,aux2;
	if(c==NULL){
		cout<<"No existen sedes registradas"<<endl;
		return;
	}
	nuevo->sgt=NULL;
	cout<<"Ingrese el nodo de inicio: ";
	cin>>ini;
	cout<<"Ingrese nodo final: ";
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
void vaciar_aristas(Tnodo &aux){
	Tarista q,r;
	q=aux->arp;
	while(q->sgt!=NULL){
		r=q;
		q=q->sgt;
		delete(r);
	}
}
void eliminar_nodo(){
	char var;
	Tnodo aux,ant;
	aux=c;
  if(c==NULL){
  	cout<<"Grafo vacio"<<endl;
  }else{
  cout<<"Ingrese la sede(id) a eliminar: ";
  cin>>var;
  while(aux!=NULL){
  	if(aux->nombre==var){
  		if(aux->arp!=NULL){
  			vaciar_aristas(aux);
		  }
		  if(aux==c){
		  	c=c->sgt;
		  	delete(aux);
		  	cout<<"Sede eliminada"<<endl;
		  	return;
		  }
	  else{
	  	ant->sgt=aux->sgt;
	  	delete(aux);
	  	cout<<"Sede eliminado"<<endl;
	  	return;
	  }
    }else{
    	ant=aux;
    	aux=aux->sgt;
	        }
        }
    }
}
void eliminar_arista(){
	char ini,fin;
	    Tnodo aux,aux2;
	    Tarista q,r;
	    cout<<"Eliminar conexion \n";
	    cout<<"Ingrese la sede de inicio: ";
	    cin>>ini;
	    cout<<"Ingrese sede final: ";
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
					   cout<<"Conexion "<<aux->nombre<<"-"<<aux2->nombre<<" Eliminada";
					   return;
				   }
			   }
			   r=q;
			   q=q->sgt;
		   }
		   aux=aux->sgt;
		}
}
void mostrar_grafo(){
	Tnodo ptr;
	Tarista ar;
	ptr=c;
	cout<<"Lista de conexiones entre sedes"<<endl;
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
void mostrar_aristas(){
	Tnodo aux;
	Tarista ar;
	char var;
	cout<<"Mostrar conexiones de la sede"<<endl;
	cout<<"Ingrese la sede: ";
	cin>>var;
	aux=c;
	while(aux!=NULL){
		if(aux->nombre==var){
			if(aux->arp==NULL){
				cout<<"La sede no tiene conexiones aun "<<endl;
				return;
			}else{
				cout<<"Sede|lista de sedes a las que esta conectada"<<endl;
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
void quicksort(int A[100],int primero, int ultimo){
    int central,i,j;
    double pivote;
    central=(primero+ultimo)/2;
    pivote=A[central];
    i=primero;
    j=ultimo;
    do{
            while(A[i]<pivote) i++;
            while(A[j]>pivote) j--;
            if(i<=j){
                double temp;
                temp=A[i];
                A[i]=A[j]; /*intercambia A[i] con A[j] */
                A[j]=temp;
                i++;
                j--;
            }
        }
    while(i<=j);
    if(primero<j)
        quicksort(A,primero,j); /*mismo proceso con sublista izquierda*/
    if(i<ultimo)
        quicksort(A,i,ultimo); /*mismo proceso con sublista derecha*/
}
void seleccionsort (int  A[], int n){
        int min,i,j,aux;
        for (i=0; i<n-1; i++){
              min=i;
              for(j=i+1; j<n; j++)
                    if(A[min] > A[j])
                       min=j;
              aux=A[min];
              A[min]=A[i];
              A[i]=aux ;
        }
} 
void insercionDirecta(int A[],int n)
{
      int i,j,v;
      for (i = 1; i < n; i++){
             v = A[i];
             j = i - 1;
             while (j >= 0 && A[j] > v){
                  A[j + 1] = A[j];
                  j--;
             }
             A[j + 1] = v;
      }   
}
void menu_principal(int op){
    c=NULL;
   int a,b,d,n,f;//Opcion interior
    int nivel,i;
    int contador=0,A[100];
    char no_tarea; //Numero de tarea
    struct cola q;
    struct nodo_listas_dobles* r=NULL;
    int prio;//Prioridad
    string desr;
    q.atras=NULL;
    q.delante=NULL;
    fflush(stdin);
    do{
    cout<<"Menu para control de empleados y tareas"<<endl;
    cout<<"¿Que desea realizar?"<<endl;
    cout<<"1.-Administrar empleados"<<endl;
    cout<<"2.-Administrar tareas"<<endl;
    cout<<"3.-Administrar conexiones"<<endl;
    cout<<"4.-Administrar crecimiento"<<endl;
    cout<<"5.-Ordenar numero(Introducir de nuevo)"<<endl;
    cout<<"6.-Ordenar numero(Introducir de nuevo)"<<endl;
    cout<<"7.-Ordenar numero(Introducir de nuevo)"<<endl;
    cout<<"0.-Salir"<<endl;
    cin>>op;
    system("cls");
    switch (op){
     case 1:
        /* Empleados(Listas Dobles) */
         cout<<"Menu de empleados"<<endl;
        cout<<"1.-Introducir un empleado"<<endl;
        cout<<"2.-Ver empleados"<<endl;
        cout<<"3.-Eliminar empleado"<<endl;
        cout<<"4.-Buscar empleado"<<endl;
        cout<<"5.-Modificar numero de empleado"<<endl;
        cout<<"6.-Ordenar por nivel"<<endl;
        cout<<"7.-Ordenar por numero de empleado"<<endl; 
        cout<<"0.-Regresar"<<endl;
        cin>>a;
        switch (a){
        case 1:
            insertarem();
            break;
        case 2:
            mostarem();
            break;
        case 3:
            eliminarEm();
            break;
        case 4:
            buscarem();
            break;
        case 5:
            modificarem();
            break;
        case 6:
            cout<<"No terminado"<<endl;
            mostarem();
            //Ordenar por nivel
            break;
        case 7:
            cout<<"No terminado"<<endl;
            mostarem();
            //Ordenar por no de empleado
            break;
        default:
            menu_principal(op);
            break;
        }
        break;
    case 2:
        cout<<"Menu de tareas"<<endl;
        cout<<"1.-Digitar alguna tarea"<<endl;
        cout<<"2.-Ver las tareas"<<endl;
        cout<<"3.-Eliminar tarea(Con mas prioridad)"<<endl;
        cout<<"4.-Vaciar tareas"<<endl;
        cout<<"0.-Regresar"<<endl;
        cin>>b;
        switch (b){
        case 1:
            cout<<"Digite el numero de la tarea: ";
            cin>>no_tarea;
            cout<<"Digite la prioridad: ";
            cin>>prio;
            cout<<"Digite la descripcion: "<<endl;
            cin>>desr;
            cout<<no_tarea<<"-"<<prio<<"-"<<desr<<endl;
            //getline(cin,desr);
			insertar(q,no_tarea,prio,desr);
            system("pause");
            break;
        case 2:
            ordenarPrioridad(q);
            if (contenido(q)==true){
                cout<<"La lista de tareas esta vacia"<<endl;
            }else{
                muestraCola(q);
            }
            system("Pause");
            break;
        case 3:
            if(contenido(q)==true){
                 cout<<"La lista de tareas esta vacia"<<endl;
            }else{
                desencolar(q);
                cout<<"Resolución de la ultima tarea con exito"<<endl;
            }
            system("pause");
            break;
        case 4: vaciaCola(q);   cout<<"Tareas vaciadas"<<endl; system("pause");
        break;
        default:
            menu_principal(op);
            break;
        }system("cls");
        break;        
    case 3:/* Conexiones(Grafos) */
        cout<<"Menu de conexiones"<<endl;
	    cout<<"1. Insertar sede"<<endl;
	    cout<<"2. Insertar conexion"<<endl;
	    cout<<"3. Eliminar sede"<<endl;
	    cout<<"4. Eliminar conexion"<<endl;
	    cout<<"5. Mostrar conexiones"<<endl;
	    cout<<"6. Mostar nexos de una sede"<<endl;
	    cout<<"Ingrese una opcion: ";
        cin>>f;
        switch(f){
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
        break;
    case 4:
        cout<<"Menu de jerarquia(Prediccion)"<<endl;
        cout<<"1.-Insertar niveles"<<endl;
        cout<<"2.-Ver niveles"<<endl;
        cout<<"3.-Eliminar nivel"<<endl;
        cin>>d;
        switch (d){
        case 1:
            cout<<"Digite el nivel a introducir: ";
            cin>>n;
            insertarNodo(arbol,n,NULL);
            cout<<endl;
            break;
        case 2:
            cout<<"Arbol de niveles: "<<endl;
            mostrarArbol(arbol,contador);
            cout<<endl;
            system("pause");
            break;
        case 3:
            cout<<"Digite el nivel a eliminar: ";
            cin>>nivel;
            eliminar(arbol,nivel);
        break;
        default:
            menu_principal(op);
            break;
        }
        break;
    case 5:
        cout<<"Digite la cantidad de numeros a ordenar Max 100"<<endl;
        cin>>n;
        for (int i = 0; i < n; i++){
            cout<<"Digite el valor : ";
            cin>>A[i];
        }
        quicksort(A,0,n-1);
        for (int i = 0; i < n; i++){
            cout<<"|"<<A[i];
        }
    break;
    case 6:
    cout<<"Digite la cantidad de numeros a ordenar Max 100"<<endl;
        cin>>n;
        for (int i = 0; i < n; i++){
            cout<<"Digite el valor : ";
            cin>>A[i];
        }
        insercionDirecta(A,n);
        for (int i = 0; i < n; i++){
            cout<<"|"<<A[i];
        }
    break;
    case 7:
    cout<<"Digite la cantidad de numeros a ordenar Max 100"<<endl;
        cin>>n;
        for (int i = 0; i < n; i++){
            cout<<"Digite el valor : ";
            cin>>A[i];
        }
        seleccionsort(A,n);
        for (int i = 0; i < n; i++){
            cout<<"|"<<A[i];
        }
    break;
    default:cout<<"Digite una opcion valida"<<endl;
        break;
    }}while (op!=0);
}
main(){
    int op;
    menu_principal(op);
    system("pause");
    return 0;
}
