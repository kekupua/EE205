#include "employee.h"
using namespace std;


void employee::display() {
  if(name != "") cout << name << "\n=========" << endl;
  else{
    cout << "Empty!" << endl;
    return;
  }
  if(id) cout << "ID: " << id << endl;
  if(address != "") cout << "Address: " << address << endl;
  if(email != "") cout << "Email: " << email << endl;
  if(department != "") cout << "Department: " << department << endl;
  if(title != "") cout << "Title: " << title << endl << endl;
  return;
}

long int employee::getID(){
  return id;
}

void employee::setID(long int i){
  id = i;
}

float employee::getSalary(){
  return salary;
}

void employee::setSalary(float value){
  salary = value;
}

string employee::getName(){
  return name;
}

void employee::setName(string n){
  name = n;
}

string employee::getAddress(){
  return address;
}

void employee::setAddress(string a){
  address = a;
}

string employee::getEmail(){
  return email;
}

void employee::setEmail(string e){
  email = e;
}

string employee::getDepartment(){
  return department;
}

void employee::setDepartment(string d){
  department = d;
}

string employee::getTitle(){
  return title;
}

void employee::setTitle(string t){
  title = t;
}
