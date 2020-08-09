//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_UNIVERSITY_H
#define LAB02_OOP_UNIVERSITY_H

#include <vector>
#include "Professor.h"
#include "Administrative.h"

class University {
private:
  vector<Professor> List_Professor;
  vector<Administrative> List_Administrative;
  string name;
  Professor* professor;
  Administrative* administrative;

  public:
  University();
  University(string);
  University(string,Professor*,Administrative*);

  string get_name();
  void set_name(string);

  Professor* get_Professor();
  void  set_Professor(Professor*);
  
  Administrative* get_Administrative();
  void set_Administrative(Administrative*);

  Professor get_Professor_List();
  Administrative get_Administrative_List();

  void Add_Professor(Professor);
  void Add_Administrative(Administrative);
};
#endif //LAB02_OOP_UNIVERSITY_H