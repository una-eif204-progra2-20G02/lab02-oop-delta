#include "Administrative.h"

class NodoAdmin {
public:
	NodoAdmin(Administrative*, NodoAdmin*);
	virtual ~NodoAdmin();
	virtual Administrative* obtenerDato();
	virtual void fijarDato(Administrative*);
	virtual NodoAdmin* obtenerSiguiente();
	virtual void fijarSiguiente(NodoAdmin*);
private:
	Administrative* dato;
	NodoAdmin* siguiente;

};