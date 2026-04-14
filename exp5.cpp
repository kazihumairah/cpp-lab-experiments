#include <iostream> // Header file for input and output
using namespace std;
// Class definition
class Student
{
private:
 static int count; // Static data member (common for all objects)
public:
 // Constructor
 Student()
 {
 count++; // Increment count whenever object is created
 }
 // Static member function
 static void showCount()
 {
 cout << "Total number of students: " << count << endl;
 // Static function can access only static data me
}
};
// Initialization of static data member
int Student::count = 0;
// Main function
int main()
{
 Student s1; // Create first object
 Student s2; // Create second object
 Student s3; // Create third object
 // Call static member function using class name
 Student::showCount();
 return 0; // End of program
}
