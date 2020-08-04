#include"lista.h"

template <class T>
Lista<T>::Lista() {
	primero = NULL;
}

template <class T>
Lista<T>::~Lista() {
	this->limpiaLista();
}

template<class T>
void Lista<T>::limpiaLista() {
	Nodo<T>* actual = NULL;
	while (primero != NULL){
		actual = primero;
		primero = actual->getSiguiente();  // Había un error...
		delete actual;
	}
}

template <class T>
T* Lista<T>::retornaElemento(int pos){
	int cont = 1;
	Nodo<T>* p = primero;
	while (p != NULL && cont < pos){
		p = p->getSiguiente();
		cont++;
	}
	if (cont == pos) {
		return p->getObjetoPtr();
	}
	return NULL;
}

template<class T>
Nodo<T>* Lista<T>::getPrimero(){
	return primero;
}

template <class T>
bool Lista<T>::insertaObjeto(T* objeto){
	Nodo<T>* actual;
	Nodo<T>* nuevo = new Nodo<T>(objeto, NULL);
	if (primero == NULL){
		primero = nuevo;
	}
	else {
		actual = primero;
		while (actual->getSiguiente() != NULL){
			actual = actual->getSiguiente();
		}
		actual->setSiguiente(nuevo);
	}
	return true;
}

template <class T>
string Lista<T>::verLista(){
	Nodo<T>* p = primero;
	int cont = 1;
	stringstream s;
	if (p == NULL){
		s << "No hay ningun elemento en esta lista" << endl;
	}
	else {
		while (p != NULL){
			s << "No." << cont << endl << *(p->getObjetoPtr()) << endl;
			p = p->getSiguiente();
			cont++;
		}
	}
	return s.str();
}