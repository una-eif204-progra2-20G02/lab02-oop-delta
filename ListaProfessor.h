#include <sstream>
using std::string;

#include "NodoProfessor.h"

class ListaProfessor {
    NodoProfessor *primero;
    NodoProfessor *inicio;
public:
    ListaProfessor();

    virtual ~ListaProfessor();

    virtual void agregarProfessor(Professor *);

    virtual string toString();

};