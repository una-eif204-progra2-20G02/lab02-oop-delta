#include <sstream>
using std::string;

#include "NodoProfessor.h"

class ListaProfessor {
public:
	ListaProfessor();
	virtual ~ListaProfessor();
	virtual void agregarProfessor(Professor*);
	virtual string toString();

private:
	NodoProfessor* primero;
	NodoProfessor* inicio;


};