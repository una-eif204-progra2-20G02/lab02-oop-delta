#include "Professor.h"

class NodoProfessor {
public:
	NodoProfessor(Professor*, NodoProfessor*);
	virtual ~NodoProfessor();
	virtual Professor* obtenerDato();
	virtual void fijarDato(Professor*);
	virtual NodoProfessor* obtenerSiguiente();
	virtual void fijarSiguiente(NodoProfessor*);
private:
	Professor* dato;
	NodoProfessor* siguiente;

};