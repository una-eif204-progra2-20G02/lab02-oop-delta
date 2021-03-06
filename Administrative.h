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
  Administrative(string = " ",string = " ", int = 0, double = 0);
  ~Administrative();

  void set_monthly_salary(double);
  double get_monthly_salary() const;

  virtual double salary() const;
  virtual string to_string() const;
};

#endif //LAB02_OOP_ADMINISTRATIVE_H