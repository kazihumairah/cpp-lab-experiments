// Program: Student Information Using Inheritance
#include <iostream>
#include <string>
using namespace std;
// Base class: Student
class Student
{
protected:
 int rollNo; // Roll number of student
 string name; // Name of student
public:
 // Function to accept student details
 void getStudentInfo()
 {
 cout << "Enter Roll Number: ";
 cin >> rollNo;
 cin.ignore(); // Clear input buffer
 cout << "Enter Name: ";
 getline(cin, name);
 }
};
// Derived class: Marks (inherits Student)
class Marks : public Student
{
private:
 float marks[5]; // Marks in 5 subjects
 float total; // Total marks
public:
 // Function to accept marks
 void getMarks()
 {
 total = 0;
 for (int i = 0; i < 5; i++)
 {
 cout << "Enter marks of subject " << i + 1 << ": ";
 cin >> marks[i];
 total += marks[i];
 }
 }
 // Function to display student details and marks
 void display()
 {
 cout << "\n--- Student Information ---\n";
 cout << "Roll Number: " << rollNo << endl;
 cout << "Name : " << name << endl;
 cout << "Marks : ";
 for (int i = 0; i < 5; i++)
{
cout << marks[i] << " ";
 }
 cout << "\nTotal Marks: " << total << endl;
 cout << "Percentage : " << (total / 5) << "%\n";
 }
};
// Main function
int main()
{
 Marks student; // Create object of derived class
 // Accept student info
 student.getStudentInfo();
 // Accept marks
 student.getMarks();
 // Display student info and marks
 student.display();
 return 0;
}


//Program: Employee Info with Multilevel & Hierarchical Inheritance
 
#include <iostream>
#include <string>
using namespace std;
// Base class: Employee
class Employee
{
protected:
 int empId;
 string empName;
 float basicSalary;
public:
void getEmployeeInfo()
 {
 cout << "Enter Employee ID: ";
 cin >> empId;
 cin.ignore();
 cout << "Enter Employee Name: ";
 getline(cin, empName);
 cout << "Enter Basic Salary: ";
 cin >> basicSalary;
 }
};
// Derived class (Multilevel): Department
class Department : public Employee
{
protected:
 string deptName;
public:
 void getDepartmentInfo()
 {
 cin.ignore();
 cout << "Enter Department Name: ";
 getline(cin, deptName);
 }
};
// Derived class (Multilevel): PF (from Department)
class PF : public Department
{
protected:
 float pfAmount;
public:
 void calculatePF()
 {
 pfAmount = basicSalary * 0.12; // 12% of basic salary
 }
 void displayPFInfo()
 {
 cout << "\n--- Employee Details (Multilevel Inheritance) ---\n";
 cout << "Employee ID : " << empId << endl;
 cout << "Employee Name : " << empName << endl;
 cout << "Department : " << deptName << endl;
 cout << "Basic Salary : " << basicSalary << endl;
 cout << "PF Amount (12%) : " << pfAmount << endl;
 }
};
// Another Derived class (Hierarchical) from Employee
class Project : public Employee
{
protected:
 string projectName;
public:
 void getProjectInfo()
 {
 cin.ignore();
 cout << "Enter Project Name: ";
 getline(cin, projectName);
 }
 void displayProjectInfo()
 {
 cout << "\n--- Employee Project Info (Hierarchical Inheritance) ---\n";
 cout << "Employee ID : " << empId << endl;
 cout << "Employee Name : " << empName << endl;
 cout << "Project Name : " << projectName << endl;
 }
};
// Main function
int main()
{
 // Object for multilevel inheritance
 PF emp1;
 cout << "--- Enter Employee Info for PF ---\n";
 emp1.getEmployeeInfo();
 emp1.getDepartmentInfo();
 emp1.calculatePF();
 emp1.displayPFInfo();
// Object for hierarchical inheritance
 Project emp2;
 cout << "\n--- Enter Employee Info for Project ---\n";
 emp2.getEmployeeInfo();
 emp2.getProjectInfo();
 emp2.displayProjectInfo();
 return 0;
}
