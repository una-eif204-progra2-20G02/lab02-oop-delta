#include"Nodo.h"

#include<iostream>
#include<sstream>
using namespace std;

template<class T>
class Lista {
private:
	Nodo<T>* primero;
public:
	Lista();
	virtual ~Lista();
	Nodo<T>* getPrimero();
	void limpiaLista();

	T* retornaElemento(int);
	bool insertaObjeto(T*);
	string verLista();
	void grabaLista(ofstream&);
	Lista<T>* leeLista(ifstream&);
};
