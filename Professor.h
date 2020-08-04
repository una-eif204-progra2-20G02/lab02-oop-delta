//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PROFESSOR_H
#define LAB02_OOP_PROFESSOR_H
#include "Person.h"

class Professor: public Person {
  private:
   double monthlySalary;
   double commissionRate;
  
 public:
  Profesor(double=0,double=0);
  Profesor(string=" ", string=" ", int= 0,double=0,double=0);
  virtual ~Profesor();

  double getMonthlySalary();
  void setMonthlySalary(double);

  double getCommissionRate();
  void setCommissionRate(double);

  double salary()const;
  string toString()const;
};

#endif //LAB02_OOP_PROFESSOR_H
