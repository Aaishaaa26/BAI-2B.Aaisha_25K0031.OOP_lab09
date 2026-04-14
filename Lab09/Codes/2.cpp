#include <iostream>
using namespace std;

class SmartDevice{
	public:
		virtual void turnOn() = 0;
		virtual void turnOff() = 0;
		virtual void getStatus() = 0;
		
		virtual ~SmartDevice() {}
};

class LightBulb : public SmartDevice{
	bool isOn;
	int brightness;
	
	public:
		LightBulb(bool on, int b) : isOn(on), brightness(b) {}
		
		void turnOn() override{ isOn = true; }
		void turnOff() override{ isOn = false; }
		void getStatus() override{
			cout<<"\n__LightBuls Status___" << endl << "State: " << (isOn ? "0N" : "0FF")<< endl << "Brightness: " << brightness << "%" << endl;
		}
};
class ThermoStat : public SmartDevice{
	bool isOn;
	double temperature;
	
	public:
		ThermoStat(bool on, double temp ) : isOn(on), temperature(temp) {}
		
		void turnOn() override{ isOn = true; }
		void turnOff() override{ isOn = false; }
		void getStatus() override{
			cout<<"\n__ThermoStat Status___" << endl << "State: " << (isOn ? "Active" : "InActive")<< endl << "Temperature: " << temperature << "'C" << endl;
		}
};

int main(){
	SmartDevice* d1 = new LightBulb(true, 90);
	SmartDevice* d2 = new ThermoStat(false, 30);
	
	d1->turnOff();
	d2->turnOn();
	
	d1->getStatus();
	d2->getStatus();
	
	delete d1;
	delete d2;
}
