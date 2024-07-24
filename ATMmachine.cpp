#include<iostream> // include of library (cin & cout)
using namespace std; // avoid the repetiton of "std::"
void transferFunds(double senderBalance, double receiverBalance) // function to transfer between two accounts. 
{
    double amount;
    cout<<"\tEnter the amount to transfer: $\t";
    cin>>amount;
    if (amount > 0 && amount <= senderBalance) // condition applied for checking whether the amount for transfering is sufficient.
    {
        senderBalance = senderBalance - amount; // amount deducted from senders balance.
        receiverBalance = receiverBalance + amount; // amount being added in receivers balance
        cout << "\tFunds transfer successful. Sender's remaining balance: $" << senderBalance << endl;
        cout << "\tReceiver's new balance: $\t" << receiverBalance << endl; // update of the balance
    } 
    else 
    {
        cout << "Invalid transfer amount or insufficient funds." << endl;
    }
}
int main() //  main function.
{
    int pin;
    double balance = 10000.78, amount, receiverBalance = 5000.0;
    cout << "-------WELCOME TO HABIB BANK LIMITED-------" << endl;
    while (true) // validate PIN entry in a loop
    {
        cout << "Please insert the card in the machine" << endl;
        cout << "Please enter the 4-digit pin: " << endl;
        cin >> pin;
        if (pin == 7654) //checking of the pin whether it is correct.
        {
            cout << "Please wait for the processing" << endl;
            break;
        } 
        else 
        {
            cout << "Invalid PIN. Please try again." << endl; // Error displayed for invalid PIN.
        }
    }
    char options;  
    do // main menu loop.
    {
        cout<< "Please choose the mode of transaction: " << endl;
        cout<<"*********************"<<endl;
        cout<< "A. Withdrawal" << endl;
        cout<< "B. Deposit" << endl;
        cout<< "C. Balance Inquiry" << endl;
        cout<< "D. Transfer Funds" << endl;
        cout<< "E. Change PIN" << endl;
        cout<< "F. EXIT" << endl;
        cout<<"********************"<<endl;
        cin >> options;
        cout<<"********************"<<endl;
        switch (options) // switch statement applied for different means of transctions. 
        {
            case 'a':
            case 'A': // process of Withdrawal.
                cout << "Please enter the amount for withdrawal: $ ";
                cin >> amount;
                if (amount > 0 && amount <= balance) // checking whether sufficient amount is available in the account.
                {
                    balance = balance - amount;
                    cout << "Successful withdrawal. Remaining balance: $ " << balance << endl; //update after the successful withdrawl.
                } 
                else 
                {
                    cout << "Insufficient balance." << endl; //condition if sufficient amount is not available.
                }
                break;
            case 'b':
            case 'B': // process of deposit.
                cout << "Please enter the amount to be deposited: $ ";
                cin >> amount;
                if (amount > 0) //checking if deposit amount is valid.
                {
                    balance = balance + amount;
                    cout << "Successful deposit. New balance: $ " << balance << endl; // update after successful deposit.
                } 
                else
                {
                    cout << "Invalid deposit. Please try again." << endl; //error for invalid deposit.
                }
                break;
            case 'c':
            case 'C':
                cout << "Current Balance: $ " << balance << endl; // amount of money present in the account.
                break;
            case 'd':
            case 'D':
                transferFunds(balance, receiverBalance); //transfer fund option.
                break;
            case 'e':
            case 'E':
                int newPIN;
                cout << "Enter the new 4-digit pin: " << endl; // change of PIN option.
                cin >> newPIN;
                pin = newPIN;
                cout << "Congratulations, Your pin has been successfully changed." << endl;
                break;
            case 'f':
            case 'F':
                cout << "EXITING. Thank you!" << endl; //exit option.
                break;
            default:
                cout << "INVALID. Please select the correct option." << endl; // display error for invalid option.
                break;
        }
    } while (options != 'F');
    return 0;
}