//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include <iomanip>
#include "Administrative.h"

Administrative::Administrative(double ms):monthly_salary(ms){}

Administrative::Administrative(string nomb,string apel,int id,double salar):Person(nomb,apel,id),monthly_salary(salar){}

Administrative::~Administrative(){ }

void Administrative::set_monthly_salary(double monthlySalary) {
    Administrative::monthly_salary = monthlySalary;
}

double Administrative::get_monthly_salary() const { return monthly_salary;}

double Administrative::salary() const{ }

string Administrative::to_string() const{
  stringstream x;Person*per;
  x<<"Administrative Information : " <<per->get_nom()<<" "<<per->get_appellido()<<endl;
  x<<"Doc ID: "<<per->get_ID()<<endl;
  x<<"Monthly Salary: "<<get_monthly_salary()<<endl;
  return x.str();
}