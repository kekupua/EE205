#include <iostream>
#include "employee.h"
#include "admin.h"
#include "factory.h"
#include "management.h"
#include "sales.h"
#include "technical.h"
using namespace std;

int main(){
  admin CEO(1,"Jeff", 150000);
  factory labor(2, "Bob", 150);
  management lead(3, "Steve", 70000, 5000, 1250);
  sales grunt(4, "Arnold", 35000, 5000);
  technical engineer(5, "Michael", "f", 120000); // fulltime

  float value1 = CEO.monthlySalary();
  float value2 = labor.monthlySalary(500); // 500 items made
  float value3 = lead.monthlySalary();
  float value4 = grunt.monthlySalary(5000); // $5000 generated
  float value5 = engineer.monthlySalary(5000);
  return 0;
}
