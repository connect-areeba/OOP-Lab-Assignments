/*3. Create a class called Employee that includes three pieces of information as data members—a
first name (type char* (DMA)), a last name (type string) and a monthly salary (type int). Your
class should have a setter function that initializes the three data members. Provide a getter
function for each data member. If the monthly salary is not positive, set it to 0. Write a test
program that demonstrates class Employee’s capabilities. Create two Employee objects and
display each object’s yearly salary. Then give each Employee a 10 percent raise and display
each Employee’s yearly salary again. Identify and add any other related functions to achieve the
said goal.*/

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
class Employee {
private:
    char* firstName;        // DMA
    string lastName;
    int monthlySalary;
public:
    // Constructor
    Employee() {
        firstName = NULL;
        lastName = "";
        monthlySalary = 0;
    }
    // Destructor
    ~Employee() {
        delete[] firstName;
    }
    // Setter function
    void setEmployee(const char* fName, string lName, int salary) {
        delete[] firstName;                     // free old memory
        firstName = new char[strlen(fName)+1];  // allocate memory
        strcpy(firstName, fName);               // copy name
        lastName = lName;
        if (salary > 0)
            monthlySalary = salary;
        else
            monthlySalary = 0;
    }
    // Getters
    const char* getFirstName() const { return firstName; }
    string getLastName() const { return lastName; }
    int getMonthlySalary() const { return monthlySalary; }

    int getYearlySalary() const {
        return monthlySalary * 12;
    }
    // Raise function
    void giveRaise(int percent) {
        monthlySalary += (monthlySalary * percent) / 100;
    }
    // Display function
    void displayInfo() const {
        cout << "Employee: " << firstName << " " << lastName << endl;
        cout << "Monthly Salary: " << monthlySalary << endl;
        cout << "Yearly Salary: " << getYearlySalary() << endl;
    }
};
int main() {
    Employee emp1, emp2;

    emp1.setEmployee("Aliza", "Beth", 70000);
    emp2.setEmployee("Areeba", "Khan", 90000);

    cout << "===== Initial Salary =====" << endl;
    emp1.displayInfo();
    cout << endl;
    emp2.displayInfo();
    cout << endl;

    emp1.giveRaise(10);
    emp2.giveRaise(10);

    cout << "===== After 10% Raise =====" << endl;
    emp1.displayInfo();
    cout << endl;
    emp2.displayInfo();

    return 0;
}
