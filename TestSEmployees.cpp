#include <iostream>
#include <string>
#include <person.h>
#include <employees.h>
using namespace std;

int main() 
{
    string fname, lname, gender, emailAdd, cpNumber;
    string empNum, position, office, salary;
    employees sample;
    
    cout << "Programmed by: Khublei Mo Satori Pelayo" << endl << endl;
    cout << endl << "------------" << endl;  
    
    cout << "First Name: ";
    getline(cin, fname);
    cout << fname << endl;
    sample.person::setfname(fname);
    
    cout << "Last Name: ";
    getline(cin, lname);
    cout << lname << endl;
    sample.person::setlname(lname);
    
    cout << "Gender: ";
    getline(cin, gender);
    cout << gender << endl;
    sample.person::setgender(gender);
    
    cout << "Email: ";
    getline(cin, emailAdd);
    cout << emailAdd << endl;
    sample.person::setemailAdd(emailAdd);
    
    cout << "Cellphone Number: ";
    getline(cin, cpNumber);
    cout << cpNumber << endl;
    sample.person::setcpNumber(cpNumber);
    
    cout << "Employee Number: ";
    getline(cin, empNum);
    cout << empNum << endl;
    sample.setempNum(empNum);
    
    cout << "Position: ";
    getline(cin, position);
    cout << position << endl;
    sample.setposition(position);
    
    cout << "Office/Unit: ";
    getline(cin, office);
    cout << office << endl;
    sample.setoffice(office);
    
    cout << "Salary: ";
    getline(cin, salary);
    cout << salary << endl;
    sample.setsalary(salary);
    
    sample.printEmployees();
    
    sample.printEmployeesDetails();
    
    return 0;
}