#include <iostream>
using namespace std;
// Define the base class Account
class Account{
	private:
		string accountNumber;
		double balance;
	public:
// Default constructor - initializes account number and balance
		Account();
// Parameterized constructor - initializes account number and balance
		Account(string,double);
// Function to deposit money - prompts user for amount and updates balance
		void deposit();
// Function to withdraw money - prompts user for amount and updates balance with check
		void withdraw();
// Getter function to get account number
		string get_account_num();
// Setter function to set account number
		void set_account_num(string);
// Getter function to get balance
		double get_balance();
// Setter function to set balance
		void set_balance(double);
// Function to display account information
		void disp();
};

// Default constructor implementation - sets defaults for account number and balance
Account::Account(){
	accountNumber = "0000";
	balance = 0;
}

// Parameterized constructor implementation - initializes account number and balance from arguments
Account::Account(string a , double b){
	accountNumber = a;
	balance = b;
}

// Deposit function implementation - prompts user for amount and updates balance
void Account::deposit(){
	float num;
	cout<<"Enter the Account Number : ";
	cin>>accountNumber;
	cout<<"Enter Your Ammount you want to deposit : ";
	cin>>num;
	balance = balance + num;
}

// Withdraw function implementation - prompts user for amount and updates balance with check
void Account::withdraw(){
	float num;
	cout<<"Enter Your Amount you want to withdraw : ";
	cin>>num;
		balance = balance - num;
}

// Setter function implementation for account number
void Account::set_account_num(string b){
	accountNumber = b;
}

// Getter function implementation for account number 
string Account::get_account_num(){
	return accountNumber;
}

// Setter function implementation for balance
void Account::set_balance(double a){
	balance = a;
}

// Getter function implementation for balance
double Account::get_balance(){
	return balance;
}

// Display function
void Account::disp(){
	cout<<"__^_^__^_^__^_^__^_^__^_^__^_^__^_^__^_^__"<<endl;
	cout<<"Account Number = "<<accountNumber<<endl;
	cout<<"Balance = "<<balance<<endl;
	cout<<"__^_^__^_^__^_^__^_^__^_^__^_^__^_^__^_^__"<<endl;
}

////////////////////////////////////////////////////////////////////////////

// Define class SavingAccount derived from Account
class SavingAccount : public Account{
	private:
		double interestRate;
	public:
		// Default constructor
		SavingAccount();
		// Parameterized constructor
		SavingAccount(string,double,double);
		// Function to calculate interest on balance
		void calculate();
		void disp();
		
};

// Default constructor implementation for SavingAccount
SavingAccount::SavingAccount(){
	interestRate =  0 ;
}

// Parameterized constructor implementation for SavingAccount
SavingAccount::SavingAccount(string a ,double b,double c){

	set_account_num(a);
	set_balance(b);
	interestRate =  c ;
	
}

void SavingAccount::calculate(){
	double new_bal;
	new_bal = get_balance();
	new_bal = new_bal+new_bal*interestRate;
	set_balance(new_bal);
}

// Display function
void SavingAccount::disp(){
	cout<<"__^_^__^_^__^_^__^_^__^_^__^_^__^_^__^_^__"<<endl;
	cout<<"-----SAVING ACCOUNT--------"<<endl;
	cout<<"Account Number = "<<get_account_num()<<endl;
	cout<<"New Balance = "<<get_balance()<<endl;
	cout<<"Interest Rate = "<<interestRate<<endl;
	cout<<"__^_^__^_^__^_^__^_^__^_^__^_^__^_^__^_^__"<<endl;
}

//////////////////////////////////////////////////////////////////////////////////////////

// Define class CheckingAccount derived from Account
class CheckingAccount : public Account{
	private:
		double monthlyfee;
	public:
		CheckingAccount();
		CheckingAccount(string,double,double);
		void deduct();
		void disp();
		
};

// Default constructor implementation for CheckingAccount
CheckingAccount::CheckingAccount(){
	monthlyfee = 0;
}

// Parameterized constructor implementation for CheckingAccount
CheckingAccount::CheckingAccount(string a ,double b,double c){
	set_account_num(a);
	set_balance(b);
	monthlyfee =  c ;
	
}

//Function to deduct monthly fee from toatal balance 
void CheckingAccount::deduct(){
	double new_bal;
	new_bal = get_balance();
	new_bal = new_bal-monthlyfee;
	set_balance(new_bal);
}

// Display function to display new balance and monthly fee
void CheckingAccount::disp(){
	cout<<"__^_^__^_^__^_^__^_^__^_^__^_^__^_^__^_^__"<<endl;
	cout<<"-----CHECKING ACCOUNT--------"<<endl;
	cout<<"Account Number = "<<get_account_num()<<endl;
	cout<<"New Balance = "<<get_balance()<<endl;
	cout<<"Monthly Fee Deducted = "<<monthlyfee<<endl;
	cout<<"__^_^__^_^__^_^__^_^__^_^__^_^__^_^__^_^__"<<endl;
}


int main(){
	Account a1;
	a1.deposit();
	a1.withdraw();
	a1.disp();
	SavingAccount b1("B-44555",100,0.4);
	b1.calculate();
	b1.disp();
	CheckingAccount c1("A-678988",1200,100);
	c1.deduct();
	c1.disp();
}












