#include "Nodo.h"

template<class T>
Nodo<T>::Nodo(T* ptr, Nodo<T>* nod)
	: objetoPtr(ptr), sig(nod) {}

template<class T>
Nodo<T>::~Nodo() {
	delete objetoPtr;
}

template<class T>
T* Nodo<T>::getObjetoPtr() {
	return objetoPtr;
}

template<class T>
Nodo<T>* Nodo<T>::getSig() {
	return sig;
}

template<class T>
void Nodo<T>::setObjetoPtr(T* ptr) {
	objetoPtr = ptr;
}

template<class T>
void Nodo<T>::setSig(Nodo<T>* nod) {
	sig = nod;
}
