#include <iostream> // Header file for input and output operations
using namespace std; // To use standard namespace
// Class definition
class Student
{
private:
int rollNo; // Stores roll number of the student
string name; // Stores name of the student
string div; // Stores Division of the student
float marks[10]; // Stores marks of subjects (maximum 10)
float total; // Stores total marks
float percentage; // Stores calculated percentage
int n; // Stores number of subjects
public:
// Function to accept student details and marks
void getData()
{
// Accept roll number
cout << "\nEnter Roll Number: ";
cin >> rollNo;
cin.ignore();
// Accept name
cout << "\nEnter name: ";
getline(cin, name);
// Accept div
cout << "\nEnter Division: ";
getline(cin, div);
// Accept number of subjects
cout << "Enter number of subjects: ";
cin >> n;
total = 0; // Initialize total to zero
// Loop to accept marks of each subject
for (int i = 0; i < n; i++)
{
cout << "Enter marks of subject " << i + 1 << ": ";
cin >> marks[i];
total = total + marks[i]; // Add marks to total
}
}
// Function to calculate percentage
void calculate()
{
percentage = total / n; // Calculate percentage
}
// Function to display student result
void display()
{
cout << "\nRoll Number : " << rollNo;
cout << "\nName: " << name;
cout << "\nDivision: " << div;
cout << "\nTotal Marks : " << total;
cout << "\nPercentage : " << percentage << "%\n";
}
};
// Main function
int main()
{
int stud; // Stores number of students
// Accept number of students
cout << "Enter number of students: ";
cin >> stud;
Student s[10]; // Array of objects of Student class
// Loop for each student
for (int i = 0; i < stud; i++)
{
cout << "\n--- Student " << i + 1 << " ---";
s[i].getData(); // Call function to accept data
s[i].calculate(); // Call function to calculate percentage
s[i].display(); // Call function to display result
}
return 0; // End of program
}
