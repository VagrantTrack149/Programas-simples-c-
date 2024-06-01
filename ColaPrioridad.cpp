/*
* C++ - Colas con prioridad
* Copyright 2014 Martin Cruz Otiniano
* Description: Se encola caracteres de acuerdo a su prioridad(entero) ingresada.
* Site: martincruz.me
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

/*                Estructura de los nodos de la cola       
------------------------------------------------------------------------*/
struct nodo
{
    char dato;
    int priori;       
    string desc;
    struct nodo *sgte;
};

/*                      Estructura de la cola      
------------------------------------------------------------------------*/
struct cola
{
    nodo *delante;
    nodo *atras  ;
};

/*                         Crear Nodo     
------------------------------------------------------------------------*/
struct nodo *crearNodo( char x, int pr,string z)
{
    struct nodo *nuevoNodo = new(struct nodo);
    nuevoNodo->dato = x;
    nuevoNodo->priori = pr;
    nuevoNodo->desc=z;
    return nuevoNodo;
};

/*                        Encolar cacarter con prioridad      
------------------------------------------------------------------------*/
void encolar( struct cola &q, char valor, int priori,string desp )
{
     
     struct nodo *aux = crearNodo(valor, priori,desp);
     aux->sgte = NULL;
     
     if( q.delante == NULL)
         q.delante = aux;   
     else
         (q.atras)->sgte = aux;

     q.atras = aux;        
}

/*                        Mostrar Cola       
------------------------------------------------------------------------*/
void muestraCola( struct cola q )
{
     struct nodo *aux;
     
     aux = q.delante;
     
     cout << " Caracter  Prioridad " << endl;
     cout << " ------------------- " << endl;
          
     while( aux != NULL )
     {
            cout<<"    "<< aux->dato << "     |   " << aux->priori<<"   |   "<<aux->desc << endl;
            aux = aux->sgte;
     }    
}

/*         Ordenar  por prioridad( criterio de O. por Burbuja)    
------------------------------------------------------------------------*/
void ordenarPrioridad( struct cola &q )
{
     struct nodo *aux1, *aux2;
     int p_aux;
     char c_aux;
     string d_aux;  
     aux1 = q.delante;
     
     while( aux1->sgte != NULL)
     {
            aux2 = aux1->sgte;
            
            while( aux2 != NULL)
            {
                   if( aux1->priori < aux2->priori )
                   {
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
/*                Inserta cacacteres en una cola     
------------------------------------------------------------------------*/
void insertar( struct cola &q, char c, int pr,string x )
{
     /* Encolando caracteres */
     encolar( q, c, pr,x );
     
     /* Ordenando por prioridad */
     ordenarPrioridad( q ); 
}
/*Eliminar el caracter*/
int desencolar( struct cola &q )
{
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
/*Vaciar cola*/
void vaciaCola( struct cola &q)
{
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
/*                        Menu de opciones     
------------------------------------------------------------------------*/
void menu()
{
    cout<<"\n\t COLAS CON PRIORIDAD EN C++ \n\n";
    cout<<" 1. ENCOLAR                           "<<endl;
    cout<<" 2. MOSTRAR                           "<<endl;
    cout<<" 3. DESENCOLAR                             "<<endl;
	cout<<" 5. VACIAR                             "<<endl;
	cout<<" 6. SALIR                             "<<endl;
    cout<<"\n INGRESE OPCION: ";
}

/*                        Funcion Principal        
------------------------------------------------------------------------*/
int main()
{
    struct cola q;
    
    q.delante = NULL;
    q.atras   = NULL;

    char c ;     // caracter a encolar
    int pr;      // prioridad del caracter
    int op;      // opcion del menu
    int x ;      // numero que devuelve la funcon pop
    string desp;
    do
    {
        menu();  cin>> op;

        switch(op)
        {
            case 1:

                 cout<< "\n Ingrese caracter: ";
                 cin>> c;
                 
                 cout<< "\n Ingrese prioridad: ";   
                 cin>> pr;
                 
                 insertar( q, c, pr,desp );
                 ordenarPrioridad(q);
                 cout<<"\n\n\t\tCaracter '" << c << "' encolado...\n\n";
            break; 
                  
            case 2:

                 cout << "\n\n MOSTRANDO COLA DE PRIORIDAD\n\n";
                 
                 if(q.delante!=NULL){
                    ordenarPrioridad(q); muestraCola(q);}
                 else   
                    cout<<"\n\n\tCola vacia...!"<<endl;
            break;
            case 3:
                ordenarPrioridad(q);
                desencolar(q);
				cout<<"\n\nDesencolando la tarea con más prioridad\n";
			break;
			case 4:	cout<<"\nCola vacia"<<endl;
                vaciaCola(q);
			break;
            default:
                    cout<<"\n\tOpcion incorecta..!"<<endl;
                    system("pause");
                    exit(0);
         }

        cout<<endl<<endl;
        system("pause");  system("cls");

    }while(op!=5);
    
    return 0;
}