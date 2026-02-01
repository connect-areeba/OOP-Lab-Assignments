#include <iostream>
using namespace std;
class firstprogram {
private: // we declare a as private to hide it from outside
int number1;
public:
void set(int input1){//set() function to set the value of a
number1 = input1;
}
int get() { // get() function to return the value of a
return number1;
}
};
// main function
int main() {
firstprogram myInstance;
myInstance.set(10);
cout<<myInstance.get()<<endl;
return 0;
}
