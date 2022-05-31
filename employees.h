#include <iostream>
#include <string>
using namespace std;

class employees: public person{
  private:
    string empNum;
  
  public:
    string position;
    string office;
    string salary;
    
    employees(){}

    //SET Methods
    void setempNum(string nempNum){
      empNum = nempNum;
    }
    void setposition(string nposition){
      position = nposition;
    }
    void setoffice(string noffice){
      office = noffice;
    }
    void setsalary(string nsalary){
      salary = nsalary;
    }
    
    //GET Methods
    string getempNum(){
      return empNum;
    }
    string getposition(){
      return position;
    }
    string getoffice(){
      return office;
    }
    string getsalary(){
      return salary;
    }
    
    //VIEW Methods
    //Paragraph View
    void printEmployees(){
      cout << endl << "------------" << endl;
      cout << "Dear ";
      person::printName();
      cout << ", " << endl << "we are pleased to inform you of your acceptance for the" << endl;
      cout << "post of " << getposition() << " at " << getoffice() << endl;
      cout << "with a starting salary of " << getsalary() << endl;
      cout <<"and the employee number of " << getempNum() << "." << endl;
      cout << endl << "------------" << endl;    
    }
    //Details View
    void printEmployeesDetails(){
      cout << endl << "------------" << endl;
      person::printPerson();
      cout << "Employee Number: " << getempNum() << endl;
      cout << "Position: " << getposition() << endl;
      cout << "Office/Unit: " << getoffice() << endl;
      cout << "Salary: " << getsalary() << endl;
      cout << endl << "------------" << endl;
    }
    
};