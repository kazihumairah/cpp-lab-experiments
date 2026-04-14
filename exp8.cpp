 
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
