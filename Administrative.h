//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_ADMINISTRATIVE_H
#define LAB02_OOP_ADMINISTRATIVE_H
#include "Person.h"

class Administrative: public Person {
 private:
  double monthlySalady;

 puclic:
  Administrative(double=0);
  Administrative(string = " ", string=" ", int= 0, double=0);
  ~Administrative();

  void setMonthlySalary(double);
  double getMonthlySalary();

  double salary()const;
  virtual string toString() const;
};

#endif //LAB02_OOP_ADMINISTRATIVE_H