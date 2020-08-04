//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_UNIVERSITY_H
#define LAB02_OOP_UNIVERSITY_H

#include <vector>
#include "Professor.h"
#include "Administrative.h"
#include "Lista.h"

class University {
 private: 
  string name;

  Professor* professor;
  Administrative* admistrative;

  
  Professor* professorList[10];
  Administrative* administrativeList[10];

  public:

  University();
  University(string = " ");
  University(string=" ",Professor*=NULL,Administrative*=NULL);

  string getName();
  void serName(string);

  Professor* getProfessor();
  void  setProfessor(Professor*);
  
  Administrative* getAdministrative();
  void setAdministrative(Administrative*);

  Professor** getProfessorList();
  Administrative** getAdministrativeList();

  void AddProfessor(Professor*);
  void AddAdministrative(Administrative*);
};


#endif //LAB02_OOP_UNIVERSITY_H
