//Write a program to swap three numbers entered by a user using pointers.
#include <iostream>
using namespace std;
void swapNumbers(int *a, int *b, int *c)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}
int main()
{
    int num1, num2, num3;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;
    swapNumbers(&num1, &num2, &num3);
    cout << "After swapping:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;
    cout << "Third number: " << num3 << endl;
    return 0;
}