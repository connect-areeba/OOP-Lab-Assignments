//Write a program to convert temp from Fahrenheit to Celsius unit using equation C=(F-32)/1.8

#include <iostream>
using namespace std;
int main(){
	float Fahrenheit;
	float Celsius;
	
	cout<<"Enter temp in Fahrenheit: ";
	cin>>Fahrenheit;
	
	Celsius = (Fahrenheit-32)/1.8;
	
	cout<<"Temperature in Fahrenheit is = "<<Fahrenheit<<endl;
	cout<<"Temperature in Celsius is = "<<Celsius<<endl;
	
	return 0;
	
}