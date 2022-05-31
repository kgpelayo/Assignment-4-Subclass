#include <iostream>
#include <string>
#include <person.h>
#include <student.h>
using namespace std;

int main() 
{
    string fname, lname, gender, emailAdd, cpNumber;
    string studentNum, course, department, college;
    student sample; 
    
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
    
    cout << "Student Number: ";
    getline(cin, studentNum);
    cout << studentNum << endl;
    sample.setstudentNum(studentNum);
    
    cout << "Course: ";
    getline(cin, course);
    cout << course << endl;
    sample.setcourse(course);
    
    cout << "Department: ";
    getline(cin, department);
    cout << department << endl;
    sample.setdepartment(department);
    
    cout << "College: ";
    getline(cin, college);
    cout << college << endl;
    sample.setcollege(college);
    
    sample.printStudent();
    
    sample.printStudentDetails();
    
    return 0;
}