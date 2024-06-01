#include <iostream>
#include <cstdlib>
#include <vector>
#include <string.h>
#include <conio.h>
/*#include <Seleccion.h>
#include <Insersion.h>
#include <Secuencial.h>
#include <Binaria.h>*/
using namespace std;
//Corregir desc, descripcion de la tarea
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
     cout << " Caracter  Prioridad " << endl;
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
//Arboles-Listas dobles
struct nodo_listas_dobles{
    int nivel,no_empleado;
    string nombre;
    nodo_listas_dobles* siguiente;
    nodo_listas_dobles* atras;    
}*primero,*ultimo;
//Empleados
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

void menu_principal(int op){
   int a,b,c,d,n;//Opcion interior
    int nivel,i;
    int contador=0;
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
            cout<<"Proximamente"<<endl;
            mostarem();
            //Ordenar por nivel
            break;
        case 7:
            cout<<"Proximamente"<<endl;
            //Ordenar por no de empleado
            break;
        default:
            cout<<"Digite una opcion valida"<<endl;
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
            cout<<no_tarea<<"-"<<prio<<"-"<<endl;
            cout<<"Digite la descripcion: "<<endl;
            cin>>desr;
            //getline(cin,desr);
			insertar(q,no_tarea,prio,desr);
            break;
        case 2:
            ordenarPrioridad(q);
            if (contenido(q)==true){
                muestraCola(q);
            }else{
                cout<<"La lista de tareas esta vacia"<<endl;
            }
            system("Pause");
            break;
        case 3:
            if(contenido(q)==true){
                desencolar(q);
                cout<<"Desencolado con exito"<<endl;
            }else{
                cout<<"La lista de tareas esta vacia"<<endl;
            }
            break;
        case 4: vaciaCola(q);   cout<<"Cola vaciada"<<endl;
        break;
        default: cout<<"Digite una opcion valida"<<endl;
            menu_principal(op);
            break;
        }system("cls");
        break;        
    case 3:
        cout<<"3"<<endl;
        /* Conexiones(Grafos) */
        break;
    case 4:
        cout<<"4"<<endl;
        cout<<"Menu de jerarquia(Prediccion)"<<endl;
        cout<<"1.-Insertar niveles"<<endl;
        cout<<"2.-Ver niveles"<<endl;
        cout<<"3.-Eliminar nivel"<<endl;
        cin>>a;
        switch (a){
        case 1:
            //mostrarArbol(arbol,contador);
            cout<<endl;
            break;
        case 2:
            cout<<"Digite el nivel eliminar: ";
            cin>>nivel;
            //eliminar(arbol,nivel);
            cout<<endl;
            break;
        case 3:

        break;
        default:
            menu_principal(op);
            break;
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
