#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

char mainMenu();
void createAccount(); // User creates own username/password to and is stored in accounts.txt
char bankingMenu();
class bank
{            // Class is used in order to carry the variable bal through void functions
    int bal; // Balance, running total used in functions
public:
    void deposit(void);  // Will add money to the bal variable
    void withdraw(void); // Will subtract withdraw from bal
    void login(void);    // Login achieved by using the accounts.txt file to check for username/password match
    void displayBalance();
    void ShowTransHist();
}; // Gets transaction history from the file path string and display
int main()
{

    char choice;
    bank account;
    while (choice != 'q' || choice != 'Q')
    {
        choice = mainMenu();
        if (choice == 'q' || choice == 'Q')
        {
            cout << "Thanks for stopping by Justin's Bank!";
            break;
        } // I use break a lot in this program. Great for terminating/going back a menu
        switch (choice)
        {
        case 'l':
        case 'L':
            account.login();
            break;
        case 'c':
        case 'C':
            createAccount();
            break;
        case 'v':
        case 'V':
            cout << "Thank you for using our bank and Future Computer Programmer ATM Machine! \nFor your continued support, we are offering 3% cash back on all debit purchases." << endl;
        default:
            cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}
char mainMenu() // Function to display the main menu, not banking menu
{
    char choice;
    cout << "********** MAIN MENU ********** " << endl
         << endl;
    cout << "l(L) -> Login to Banking Menu" << endl;
    cout << "c -> Create New Account" << endl;
    cout << "v -> View Promotions" << endl;
    cout << "q -> Quit the Program" << endl;
    cout << "Enter your choice:" << endl;
    cin >> choice;
    return choice;
}
void createAccount() // Takes and stores users login information, username and password
{
    string username;
    string password;
    cout << "Please create a username" << endl;
    cin >> username;
    cout << "Please create a password" << endl;
    cin >> password;
    ofstream createaccount;
    createaccount.open("accounts.txt", ios::app); // Will store the users information.
    createaccount << username << " " << password << endl;
    createaccount.close();
    cout << "Account created!" << endl;
}
void bank ::login(void) // Takes information stored in create account. Most loaded function, also holds banking menu.
{
    string username;
    string password;
    char choice;
    bank decision;
    ifstream savedaccount;
    savedaccount.open("accounts.txt"); // accounts.txt will verify user information.
    cout << "Enter your username:" << endl;
    cin >> username;
    cout << "Enter your password:" << endl;
    cin >> password;
    string username2, password2;
    savedaccount >> username2 >> password2;
    savedaccount.close();
    if (username != username2 || password != password2)
        cout << "Incorrect login! Create new account or try again." << endl;
    while (username == username2 && password == password2) // Achieved by using accounts.txt match
    {
        choice = bankingMenu(); // Placed function here so that it will only appear if user logins.
        if (choice == 'q' || choice == 'Q')
            break;
        switch (choice)
        {

        case 'd':
        case 'D':
            decision.deposit();
            break;
        case 'w':
        case 'W':
            decision.withdraw();
            break;
        case 'b':
        case 'B':
            decision.displayBalance();
            break;
        case 'r':
        case 'R':
            decision.ShowTransHist();
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    }
}
char bankingMenu() // Banking menu, only opens if user achieves login.
{
    char choice;
    cout << "********* BANKING MENU *********" << endl
         << endl;
    cout << "d. Deposit Money" << endl;
    cout << "w. Withdraw Money" << endl;
    cout << "b. Check Balance" << endl;
    cout << "r. Review Account Activities History" << endl;
    cout << "q. Return to Main Menu" << endl;
    cout << "Enter your choice:" << endl;
    cin >> choice;
    return choice;
}
void bank ::deposit(void) // Takes bal variable from bank class and keeps it as a constant total, deposit adds to bal
{
    long deposit;
    cout << "Enter how much you would like to deposit: ";
    cin >> deposit;
    bal = deposit + bal;
    cout << "You have deposited: $" << deposit << endl;
    if (deposit >= 100000)
        cout << "Now that is a lot of money!" << endl; // Easter egg
}
void bank ::withdraw(void) // Similar to deposit, but subtracts from bal.
{
    long withdraw;
    cout << "Enter how much you would like to withdraw: ";
    cin >> withdraw;
    if (bal > withdraw || bal == withdraw)
    {
        bal = bal - withdraw;
        cout << "You have withdrawn: $" << withdraw << endl;
    }
    else if (bal < withdraw)
        cout << "You don't have enough funds to cover your withdraw request!" << endl;
}
void bank ::displayBalance() // Deposits and withdrawls are taken into account, and the constant total bal is displayed here.
{
    cout << "Your current balance is: $" << bal << endl;
    if (bal >= 1000000)
        cout << "Wow, you're a high roller!" << endl; // More easter eggs, I have fun with this!
}
void bank ::ShowTransHist()
{
    ofstream balance;
    int bal;
    balance.open("transHistory.output", std::ios_base::app);
    balance << bal << endl;
}