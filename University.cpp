//
// Created by Maikol Guzman on 8/2/20.
//
#include <sstream>
#include "University.h"
#include <vector>

  University::University(){ }
  University::University(string name_){ name = name_; }
  University::University(string name_,Professor* Prof,Administrative* Admin){
   name = name_;
   professor = Prof;
   administrative = Admin;   
  }

  string University::get_name(){return name; }
  void University::set_name(string x){ name = x;}

  Professor* University::get_Professor(){return professor;}
  void  University::set_Professor(Professor* Prof){professor = Prof;}
  
  Administrative* University::get_Administrative(){return administrative;}
  void University::set_Administrative(Administrative* Admin){ administrative=Admin;}

  Professor University::get_Professor_List(){}
  Administrative University::get_Administrative_List(){}

  void University::Add_Professor(Professor prof){
      for (int cont = 0; cont < vector_prof.size(); cont++) {
          vector_prof.push_back(vector_prof[cont]);
          vector_prof[0]=prof;
      }
      //vector_prof.push_back(prof);
  }

  void University::Add_Administrative(Administrative admin){
    for (int cont = 0; cont < vector_admin.size(); cont++) {
      vector_admin.push_back(vector_admin[cont]);
      vector_admin[0]=admin;
    }
    //vector_admin.push_back(admin);
  }

  void University::command(){
    //University*program=new University();
    Person*prof1=new Professor("Mike","Guzman",1234567890,1575000.00,0.05);
    Person*prof2=new Professor("Pedro","Sanchez",1286608618,1050000.00,0.05);
    cout<<prof1->to_string();
  }