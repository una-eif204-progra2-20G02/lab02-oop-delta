//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PROFESSOR_H
#define LAB02_OOP_PROFESSOR_H
#include "Person.h"

class Professor: public Person, public error_code {
  private:
   double monthly_salary;
   double commission_rate;
  
 public:
  //Professor(double,double);
  Professor(string = " ",string = " ",int = 0,double = 0,double = 0);
  virtual ~Professor();

  double get_monthly_salary() const;
  void set_monthly_salary(double);

  double get_commission_rate();
  void set_commission_rate(double);

  virtual double salary()const;
  virtual string to_string()const;
};

#endif //LAB02_OOP_PROFESSOR_H
