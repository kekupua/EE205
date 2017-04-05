#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

class employee {
public:
  employee() {
    id = 0;
    name = "";
    address = "";
    email = "";
    department = "";
    title = "";
  }

  employee(long int i, string n) : id(i), name(n) {
    address = "";
    email = "";
    department = "";
    title = "";
  }
  
  virtual float monthlySalary(){ return 0;}

  void display();

  long int getID();
  void setID(long int i);

  float getSalary();
  void setSalary(float value);

  string getName();
  void setName(string name);

  string getAddress();
  void setAddress(string address);

  string getEmail();
  void setEmail(string email);

  string getDepartment();
  void setDepartment(string depart);

  string getTitle();
  void setTitle(string t);

private:
  long int id;
  float salary;
  string name;
  string address;
  string email;
  string department;
  string title;
};

#endif
