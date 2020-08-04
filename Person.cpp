//
// Created by Maikol Guzman on 8/2/20.
//

#include "Person.h"

Person::Person(string nom_=" ", string apellido_ = " ", int id_ = 0){
    nom=nom_;
    apellido=apellido_;
    id=id_;
  }

Person::~Person(){ }

string Person::getNom(){ return nom;}
void Person::setNom(string x){nom=x;}

string Person::getAppellido(){return apellido;}
void Person::setApellido(string x){apellido=x;}
 
int Person::getID(){return id;}
void Person::setID(int x){id=x;}