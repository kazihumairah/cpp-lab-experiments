#include <iostream> // Header file for input and output operations
using namespace std; // Allows use of standard library names without std::
// Class definition
class Patient
{
private: // Private access specifier (data security)
int patientId; // Stores patient ID
string patientName;// Stores patient name
float billAmount; // Stores billing amount
string appointmentDate; // Stores appointment date
public: // Public access specifier
// Default Constructor
Patient()
{
patientId = 0; // Initialize patient ID
patientName = "Not Assigned"; // Initialize patient name
billAmount = 0.0; // Initialize bill amount
appointmentDate = "Not Fixed"; // Initialize appointment date
}
// Parameterized Constructor
Patient(int id, string name, float bill, string date)
{
patientId = id; // Assign value to patient ID
patientName = name; // Assign value to patient name
billAmount = bill; // Assign value to bill amount
appointmentDate = date;// Assign value to appointment date
}
// Copy Constructor
Patient(Patient &p)
{
patientId = p.patientId; // Copy patient ID
patientName = p.patientName; // Copy patient name
billAmount = p.billAmount; // Copy bill amount
appointmentDate = p.appointmentDate;// Copy appointment date
}
// Member function to display patient details
void display()
{
cout << "\nPatient ID : " << patientId; // Display patient ID
cout << "\nPatient Name : " << patientName; // Display patient name
cout << "\nBilling Amount : Rs. " << billAmount; // Display billing amount
cout << "\nAppointment Date : " << appointmentDate; // Display appointment date
cout << endl; // New line
}
};
// Main function
int main()
{
// Create object using default constructor
Patient p1;
cout << "\n--- Default Constructor ---";
p1.display(); // Call display function
// Create object using parameterized constructor
Patient p2(101, "Rahul Patil", 3500.50, "15-02-2026");
cout << "\n--- Parameterized Constructor ---";
p2.display(); // Call display function
// Create object using copy constructor
Patient p3 = p2;
cout << "\n--- Copy Constructor ---";
p3.display(); // Call display function
return 0; // End of program
}
