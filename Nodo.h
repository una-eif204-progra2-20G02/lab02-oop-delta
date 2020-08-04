#include<iostream>
#include<sstream>
using namespace std;

template<class T>
class Nodo {
private:
	T* objetoPtr;	Nodo* sig;
public:
	Nodo(T*, Nodo<T>*);
	virtual ~Nodo();
	T* getObjetoPtr();
	Nodo<T>* getSig();
	void setObjetoPtr(T*);
	void setSig(Nodo*);
};
