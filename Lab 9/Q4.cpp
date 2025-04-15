#include <iostream>
using namespace std;

class PaymentMethod{
	public:
		virtual void processPayment(double amount)=0;
};

class CreditCard:public PaymentMethod{
	string cardNumber;
	public:
		CreditCard(string c):cardNumber(c){
		}
		void processPayment(double amount)override{
			cout<<"Card is processing Payments"<<endl;
		}
	
};

class DigitalWallet:public PaymentMethod{
	double balance;
	public:
		DigitalWallet(double b):balance(b) {
		}
		void processPayment(double amount)override{
			balance = balance - amount;
			cout<<"Updated Balance: "<<balance<<endl;
		}
	
};

int main(){
	CreditCard card("1234212");
	DigitalWallet nayapay(21000);
	card.processPayment(1000);
	nayapay.processPayment(1000);
}
