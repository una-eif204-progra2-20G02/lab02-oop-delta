//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_ADMINISTRATIVE_H
#define LAB02_OOP_ADMINISTRATIVE_H
#include "Person.h"

class Administrative: public Person {
  double monthly_salary;

public:
  Administrative(double);
  Administrative(string, string, int, double);
  ~Administrative();

  void set_monthly_salary(double);
  double get_monthly_salary() const;

  void salary();
  virtual string toString() const;
};

#endif //LAB02_OOP_ADMINISTRATIVE_H