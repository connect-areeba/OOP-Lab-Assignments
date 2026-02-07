/*2. Create a class tollbooth. The two data items are a type int to hold the total number of cars and a type double to hold the total amount of money collected. A
constructor initializes both these to 0. When a car passes the toll, a member function called payingCar( ) increments the car total and adds 0.50 to the cash
total. Another member function displays the two totals. DESIGN and IMPLEMENT
this case. Make assumptions (if required) and include it in the description before designing the solution.*/

#include<iostream>
using namespace std;

class tollbooth{
    int cars;
    double money;
    public:
        tollbooth(){
            cars=0;
            money=0.0;
        }

        void payingCar(){
            cars++;
            money+=0.50;
        }

        void display(){
            cout<<"Total cars: "<<cars<<endl<<"Total money collected: $"<<money<<endl;
        }
};

int main(){
    tollbooth t;
    t.payingCar();
    t.payingCar();
    t.display();
    
    return 0;
}RWWB khN 
reeb KHAN
AREEBA KHAN
AREENA KHAN
AREEBA KHAN
