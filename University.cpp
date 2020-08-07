//
// Created by Maikol Guzman on 8/2/20.
//
#include <sstream>
#include "University.h"

  University::University(){ }
  University::University(string name_){ name = name_; }
  University::University(string name_,Professor* Prof,Administrative* Admin){
   name = name_;

   num_Profe=0;
   num_Admin=0;

   professor = Prof;
   administrative = Admin;
   for(int i=0; i<10;i++){
     professor_list[i] = NULL;
     administrative_list[i] = NULL;
   }
  }

  string University::get_name(){return name; }
  void University::set_name(string x){ name = x;}

  Professor* University::get_Professor(){return professor;}
  void  University::set_Professor(Professor* Prof){professor = Prof;}
  
  Administrative* University::get_Administrative(){return administrative;}
  void University::set_Administrative(Administrative* Admin){ administrative=Admin;}

  Professor**University::get_Professor_List(){}
  Administrative**University::get_Administrative_List(){}

  void University::Add_Professor(Professor* prof){
    if(num_Profe<10){
      professor_list[num_Professor] = prof;
      num_Profe++;
    }
    else{
      std::cout<<"No hay campo"<<endl;
    }
  }

  void University::Add_Administrative(Administrative* admin){
    if(num_Admin<10){
      administrative_list[num_Admin] = admin;
      num_Admin++;
    }
    else{
      std::cout<<"No hay campo"<<endl;
    }

  }