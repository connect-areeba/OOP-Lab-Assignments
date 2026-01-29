//Write a program to find Surface area and volume of a sphere using functions.
//Surface Area=4pr2
//Volume=4/3pr^3

#include <iostream>
using namespace std;

float surfaceArea(float r){
	return 4 * 3.142 * r * r;
}

float volume(float r){
	return (4.0 / 3.0) * 3.1416 * r * r * r;
}

int main(){
	float radius;
	cout<<"Enter radius: ";
	cin>>radius;
	
	cout<<"Surface Area of sphere is: "<<surfaceArea(radius)<<endl;
	cout<<"Volume of sphere is: "<<volume(radius)<<endl;
	
	return 0;

}