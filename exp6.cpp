#include <iostream>
using namespace std;
class Box
{
 private:
 int length;
 public:
 Box(): length(0) { }
 friend int printLength(Box); //friend function
};
int printLength(Box b)
{ 
b.length += 10;
 return b.length;
}
int main()
{
 Box b;
 cout<<"Length of box: "<< printLength(b)<<endl;
 return 0;
}
Program Code :
Program: Access Private Members Using Friend Function
#include <iostream> // Header file for input and output
using namespace std;
// Class definition
class Sample
{
private:
 int a, b; // Private data members
public:
 // Constructor to initialize values
 Sample(int x, int y)
 {
 a = x; // Assign value to a
 b = y; // Assign value to b
}
 // Friend function declaration
 friend void showData(Sample s);
};
// Friend function definition
void showData(Sample s)
{
 // Accessing private members of class
 cout << "Value of a = " << s.a << endl;
 cout << "Value of b = " << s.b << endl;
 cout << "Sum = " << (s.a + s.b) << endl;
}
// Main function
int main()
{
 // Create object of Sample class
 Sample obj(10, 20);
 // Call friend function
 showData(obj);
 return 0; // End of program
}
