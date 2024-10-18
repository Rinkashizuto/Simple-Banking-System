#include <iostream>
#include <iomanip>

using namespace std;
double deposit(double bal);

void showBalance(double bal);

double withdraw(double bal);

void line();

int main()
{

int choice;
double bal;
    do{
        cout << "Welcome To My Banking System!\n";
        line();
        cout << "What Would You Like To Do?\n";
        cout << "1. Balance Enquiry\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        line();
        cout << "Enter :";
        cin >> choice;

        switch (choice)
        {
        case 1:
                showBalance(bal);
            break;
        case 2:
                bal += deposit(bal);
                showBalance(bal);
            break;
        case 3:
                bal -= withdraw(bal);
                showBalance(bal);
            break;
        
        case 4:
                cout << "Thank You For Your Time!";
                break;
        default:
            cout << "Your Input Isn't In The Following Option!";
            break;
        }
    }
    while(choice != 4);



}

void line(){
    for(int i = 0; i <= 30; i++){
        cout << "=";
    }
    cout << '\n';
}

void showBalance(double bal){

    double balance;

    cout << "Your Balance Is " << fixed << setprecision(2) << bal << endl;
}

double deposit(double bal)  
{
    cout << "Please Enter How Much You Would Like To Deposit\n";
    cin >> bal;

    return bal;
}

double withdraw(double bal)
{
    double balance;

    cout << "Please Enter Desired Withdrawal :";
    cin >> balance;

    return balance;
}
