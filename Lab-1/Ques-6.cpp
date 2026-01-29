#include <iostream>
using namespace std;
int main(){
	int balance = 200000;
	char accountType;
	int accountNumber;
	int withdrawAmount;
	
	cout<<"Enter account type ('s' for saving 'c' for current): ";
	cin>>accountType;
	
	cout << "Enter account number: ";
    cin >> accountNumber;
    
    cout << "Enter withdrawal amount: ";
    cin >> withdrawAmount;
     
     if(withdrawAmount > 100000){
     	cout<<"you cant withdraw more than 100000";
	}
	 if (withdrawAmount > balance) {
    cout << "Insufficient balance.";
    }
    
    if(accountType == 's'){
    	balance = balance - withdrawAmount;
    	
    	int fee = withdrawAmount * 0.02;
        balance = balance - fee;

        if (withdrawAmount > 50000) {
            int tax = balance * 0.05;
            balance = balance - tax;
	}
	
	cout << "Savings account withdrawal successful.\n";
        cout << "Remaining balance: " << balance;
    }
    // Current Account
    else if (accountType == 'C') {
        balance = balance - withdrawAmount;
        balance = balance - 100;
        if (withdrawAmount > 50000) {
            int tax = balance * 0.05;
            balance = balance - tax;
        }
        cout << "Current account withdrawal successful.\n";
        cout << "Remaining balance: " << balance;
    }
    // Invalid Account Type
    else {
        cout << "Invalid account type.";
    }
    return 0; 
}