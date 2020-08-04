//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PERSON_H
#define LAB02_OOP_PERSON_H


#include <string>
#include <ostream>
using namespace std;

/**
 * Abstract Class of Person
 */
class Person {
  private:
  string nom;
  string apellido;
  int id;

  public:

  Person(string=" ", string=" ", int= 0);

 virtual ~Person();

 string getNom();
 void setNom(string);

 string getAppellido();
 void setApellido(string);
 
 int getID();
 void setID(int);

 virtual double salary()const=0;
 virtual string toString()const=0;
};


#endif //LAB02_OOP_PERSON_H
