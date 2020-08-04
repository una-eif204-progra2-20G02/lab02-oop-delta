//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include <iomanip>
#include "Administrative.h"

Administrative::Administrative(double salary):monthlySalary(salary){}

Administrative::Administrative(string nomb,string apel,int id,double salar):Person(nomb,apel,id),monthlySalary(salary){}

Administrative::~Administrative(){ }

void Administrative::setMonthlySalary(double MS){ MS = monthlySalary}
double Administrative::getMonthlySalary(){ return monthlySalary;}

double Administrative::salary()const{
  return salary;
}

string Administrative::toString() const{
  stringstream x;

  x<<"Administrative Information : " <<getNom()<<" "<<getApellido()<<endl;
  x<<"Doc ID: "<<getId()<<endl;
  x<<"Monthly Salary: "<<getMonthlySalary()<<endl;

  return x.str();
}