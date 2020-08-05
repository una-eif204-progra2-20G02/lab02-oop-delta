#include <sstream>
using std::string;

#include "NodoAdmin.h"

class ListaAdmin {
public:
	ListaAdmin();
	virtual ~ListaAdmin();
	virtual void agregarAdministrative(Administrative*);
	virtual string toString();

private:
	NodoAdmin* primero;
	NodoAdmin* inicio;
};