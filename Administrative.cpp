//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include <iomanip>
#include "Administrative.h"
Administrative::(double salary):monthlySalary(salary){}
Administrative::Administrative(string nomb,string apel,int id,double salar):Person(nomb,apel,id),monthlySalary(salary){}
Administrative::~Administrative(){}
void Administrative::setMonthlySalary(double MS){MS=monthlySalary};
double Administrative::getMonthlySalary(){return monthlySalary;}
double Administrative::salary(return salary)const{}

string Administrative::toString(
  stringstream x;
  
  return x.str();
)const{}