/*1. Write a C++ program to copy the value of one object to another object using copy
constructor.*/
#include<iostream>
using namespace std;

class Car {
    string name;   
    int id;        
    float cgpa;    
public:
    Car(string n, int i, float c) {
        name = n;
        id = i;
        cgpa = c;
    }
    void displayData(){
        cout << "Car Name: " << name << endl
             << "Car ID: " << id << endl
             << "Mileage: " << cgpa << endl;
    }
    void setData(string n, int i, float c) {
        name = n;
        id = i;
        cgpa = c;
    }
    ~Car(){}
};
int main(){
    Car c1("Civic", 12, 18.5);
    c1.displayData();

    Car c2 = c1;
    c2.displayData();
    return 0;
}
