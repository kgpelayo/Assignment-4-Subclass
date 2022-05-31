#include <iostream>
#include <string>
using namespace std;

class student: public person{
  private:
    string studentNum;
    
  public:
    string course;
    string department;
    string college;
    
    student(){}
    
    //SET Methods
    void setstudentNum(string nstudentNum){
      studentNum = nstudentNum;
    }
    void setcourse(string ncourse){
      course = ncourse;
    }
    void setdepartment(string ndepartment){
      department = ndepartment;
    }
    void setcollege(string ncollege){
      college = ncollege;
    }
    
    //GET Methods
    string getstudentNum(){
      return studentNum;
    }
    string getcourse(){
      return course;
    }
    string getdepartment(){
      return department;
    }
    string getcollege(){
      return college;
    }
    
    //VIEW Methods
    //Paragraph View
    void printStudent(){
      cout << endl << "------------" << endl;
      cout << "Hi ";
      person::printName();
      cout << "! Welcome to UP Mindanao and congratulations! " << endl;
      cout << "We are plased to inform you that you are admitted in the " << endl;
      cout << getcourse() << "program under the department of " << endl;
      cout << getdepartment() << "," << endl;
      cout << "College of " << getcollege() << ". Your student number is " << getstudentNum() << endl;
      cout << endl << "------------" << endl;
    }
    //Details View
    void printStudentDetails(){
      cout << endl << "------------" << endl;
      person::printPerson();
      cout << "Student Number: " << getstudentNum() << endl;
      cout << "Course: " << getcourse() << endl;
      cout << "Department: " << getdepartment() << endl;
      cout << "College: " << getcollege() << endl;
      cout << endl << "------------" << endl;
    }
    
};