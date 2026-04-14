#include <iostream>
using namespace std;

class Vehicle{
	protected:
		string model;
		double rate;
		
	public:
		Vehicle(string m, double r) : model(m), rate(r) {}
		
		virtual double getDailyRate() = 0;
		virtual void displayDetails() =0;
		
		virtual ~Vehicle(){}
};

class Car: public Vehicle{
	public:
		Car(string m, double r) : Vehicle(m,r) {}
		
		double getDailyRate() override{
			return rate*1.01;
		}
		
		void displayDetails() override{
			cout <<"\n____Car Details___" << endl <<"Model: " << model << endl << "Daily Rate: $ " << getDailyRate() << endl;
		}
};

class Bike: public Vehicle{
	public:
		Bike(string m, double r) : Vehicle(m,r) {}
		
		double getDailyRate() override{
			return rate*1.05;
		}
		
		void displayDetails() override{
			cout <<"\n____Bike Details___" << endl <<"Model: " << model << endl << "Daily Rate: $ " << getDailyRate() << endl;
		}
};


int main(){
	Vehicle* v1;
	Vehicle* v2;
	v1 = new Car("Lightning mcqueen", 1000);
	v2 = new Bike("Batpod", 9999);
	
	v1->displayDetails();
	v2->displayDetails();
	
	delete v1;
	delete v2;
}
