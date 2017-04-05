// Administrative have a fixed salary.
#include "admin.h"
using namespace std;

float admin::monthlySalary(){
  cout << getName() << "\n=======" << endl;
  cout << "Salary: " << getSalary() << endl << endl;
  return getSalary();
}
