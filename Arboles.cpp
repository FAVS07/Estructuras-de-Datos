
#include <iostream>

using namespace std;

struct Nodo{
    int dato;
    Nodo *der;
    Nodo *izq;
};

Nodo *crearNodo(int);
void insertarNodo(Nodo *&,int);

Nodo *arbol = NULL;

int main()
{
    int dato ;
    cin >> dato;
    insertarNodo(arbol,dato);
    return 0;
}

/// Funcion para crear nuevo Nodo

Nodo *crearNodo(int n){
    Nodo *nuevo_nodo = new Nodo ();
    nuevo_nodo -> dato = n;
    nuevo_nodo -> der = NULL;
    nuevo_nodo -> izq = NULL;
    
    return nuevo_nodo;
    
}

///// Funcion para insertar elementos en el arbol

void insertarNodo(Nodo *&arbol , int n){
    if(arbol == NULL){/// Arbol esta vacio
        Nodo *nuevo_nodo = crearNodo(n);
        arbol = nuevo_nodo;
    }else{ //// Arbol tiene aligno
        int valorRaiz = arbol ->dato; // obtenemos el valor de la valorRaiz
        if(n < valorRaiz){
            insertarNodo(arbol->izq,n);
        }else{// elemento mayor a la raiz
            insertarNodo(arbol->der,n);
        }
    }
   
   
    
}



