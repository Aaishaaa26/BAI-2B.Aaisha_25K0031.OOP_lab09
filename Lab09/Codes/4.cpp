#include <iostream>
using namespace std;

class PaymentMethod{
	public:
		virtual void processPayment(double amount) = 0;
		virtual ~PaymentMethod(){}		
};

class CreditCard : public PaymentMethod{
	string cardNumber;
	public:
		CreditCard(string num) : cardNumber(num) {}
		
		void processPayment(double amount) override{
			cout << "_____Credit Card______" <<endl;
			if(amount > 10000){
				cout << "Payment Failed. (v large trans amount)" << endl;
			}
			else{
				cout << "Card Declined" << endl;
			}
		}
};

class DigitalWallet : public PaymentMethod{
	double balance;
	public:
		DigitalWallet(double bal) : balance(bal) {}
		
		void processPayment(double amount) override{
			cout << "\n___Digital WAllet___" << endl;
			if(amount > balance){
				cout << "Payment Failed. (insuff amount, ghareeb)" << endl;
			}
			else{
				balance -= amount;
				cout << "Transaction Successful.\nRemaining Balnce: "<< balance << endl;
			}
		}
};

int main(){
	PaymentMethod* p1 = new CreditCard("03980983");
	PaymentMethod* p2 = new DigitalWallet(2000);
	
	p1->processPayment(500);
	p2->processPayment(1850);
	
	delete p1;
	delete p2;
}
