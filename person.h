#include <iostream>
#include <string>
using namespace std;

class person{
  public:
    string fname;
    string lname;
    string gender;
    string emailAdd;
    string cpNumber;
    
    person(){}
    
    //SET Methods
    void setfname(string nfname){
      fname = nfname;
    }
    void setlname(string nlname){
      lname = nlname;
    }
    void setgender(string ngender){
      gender = ngender;
    }
    void setemailAdd(string nemailAdd){
      emailAdd = nemailAdd;
    }
    void setcpNumber(string ncpNumber){
      cpNumber = ncpNumber;
    }
    
    //GET Methods
    string getfname(){
      return fname;
    }
    string getlname(){
      return lname;
    }
    string getgender(){
      return gender;
    }
    string getemailAdd(){
      return emailAdd;
    }
    string getcpNumber(){
      return cpNumber;
    }
    
    //VIEW Methods
    //Full Name
    void printName(){
      cout << fname << " " << lname;
    }
    //Details View
    void printPerson(){
      cout << "Name: " << getfname() << " " << getlname() << endl;
      cout << "Gender: " << getgender() << endl;
      cout << "Email Address: " << getemailAdd() << endl;
      cout << "Contact Number: " << getcpNumber() << endl;
    }
};