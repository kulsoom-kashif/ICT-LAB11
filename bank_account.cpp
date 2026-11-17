#include <iostream>
using namespace std;
class bank_account{
	private:
		//10000
		float balance;
		//validate the pin
		int verifyPin(int pin){
			const int pins=1234;
			return pin==pins;
		}
	public:
		//parameter constructor
		bank_account(float balance)
		{
			// 10000
			this->balance = balance;
		}
		void withdraw(int pin, float amount){
			// if it is true
			if(verifyPin(pin)){
				if(amount > 0 && amount <= balance)
				{
					balance = balance - amount;
						cout<<"Withdraw amount is "<<amount<<endl;
				}else
				{
					cout<< "Insufficent balace ";
				}
			}else 
			{
				cout<<"Pin is invalid";
			}
	}
	void check_balance(int pin){
		if(verifyPin(pin)){
			cout<<"Account balance"<<balance<<endl;
		}
		else{
			cout<<"Pin is invalid";
		}
	}
	
};

int main(){
	int pin;
	float amount = 2000;
	cout<<"enter pin ";
	cin>>pin;
	bank_account b1(10000);
	b1.withdraw(pin,amount);
	b1.check_balance(pin);
}