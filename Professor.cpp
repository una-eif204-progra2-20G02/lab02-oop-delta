//
// Created by Maikol Guzman on 8/2/20.
//
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Professor.h"

Profesor::(double salary,double commission){
  monthlySalary=salary;
  commissionRate=commission;
}

Profesor::Profesor(string nom_, string appellido_, int id_,double salary,double commission):Person(nom_,appellido_,id_){
  monthlySalary=salary;
  commissionRate=commission;
}

virtual Profesor::~Profesor(){ } 

double Profesor::getMonthlySalary(){
  return monthlySalary;
}
void Profesor::setMonthlySalary(double month){
  monthlySalary=month;
}

double Profesor::getCommissionRate(){
  return commissionRate;
}
void Profesor::setCommissionRate(double com){
  commission=com;
}


double Profesor::salary()const{
  return monthlySalary-commissionRate;
}

string Profesor::toString()const{
  stringstream s;

  s<<"Professor Information : " <<getNom()<" "<<getApellido()<endl;
  s<<"Doc ID: "<<getId()<<endl;
  s<<"Monthly Salary"<<getMonthlySalary()<<endl;

  return s.str();
}