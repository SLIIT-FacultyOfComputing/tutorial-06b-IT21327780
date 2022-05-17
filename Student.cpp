#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
Student::assignDetails(int pstudentID, const char pname[]) {
  studentID*pstudentID;
  strcpy(name,pname);
}

// Display StudentId and Name
Student::display() {
  cout << "Student ID : " << studentID << endl;
  cout << "Student Name : " << name << endl;
}
