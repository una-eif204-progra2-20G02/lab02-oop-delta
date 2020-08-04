//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include "University.h"

  University::University(){ }
  University::University(string name_){ name = name_; }
  University::University(string name_,Professor* Prof,Administrative* Admin){
   name = name_;
   professor = Prof;
   administrative = Admin;
   for(int i=0; i<10;i++){
     professorList[i] = NULL;
     administrativeList[i] = NULL;
   }
  }

  string University::getName(){return name; }
  void University::serName(string x){ name = x;}

  Professor* University::getProfessor(){return professor;}
  void  University::setProfessor(Professor* Prof){professor = Prof;}
  
  Administrative* University::getAdministrative(){return administrative;}
  void University::setAdministrative(Administrative* Admin){ administrative=Admin;}

  Professor* University::getProfessorList(){}
  Administrative* University::getAdministrativeList();

  void University::AddProfessor(Professor*);
  void University::AddAdministrative(Administrative*);