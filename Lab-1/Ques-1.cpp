/*Write a program that take input of your roll number along with the marks obtained in five
subjects and display the total marks obtained and the percentage.*/

#include <iostream>
using namespace std;
int main(){
	int roll_no;
	float marks[5], total =0, percentage;
	
	cout<<"Enter roll number: ";
	cin>>roll_no;
	
	for(int i=0; i<5; i++){
		cout<<"Enter marks of subject "<<i+1<<": ";
		cin>>marks[i];
		total += marks[i];
	}
	percentage = (total / 500) *100;
	
	cout<<"Roll Number: "<<roll_no<<endl;
	cout<<"Total Makrs: "<<total<<endl;
    cout<<"Percetnage: "<<percentage<<endl;
    return 0;
}
