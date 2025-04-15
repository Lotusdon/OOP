#include <iostream>
using namespace std;

class SmartDevice{
	
		
	public:
		virtual void turnOn()=0;
		virtual void turnOff()=0;
		virtual bool getStatus()=0;
};

class LightBulb:public SmartDevice{
	bool isOn=false;
	int brightness;
	public:
		 void turnOn()override{
		 	isOn=true;
		 }
		 void turnOff()override{
		 	isOn=false;
		 }
		 bool getStatus()override{
		 	return isOn;
		 }
};

class Thermostat:public SmartDevice{
	bool isOn=false;
	double temperature;
	public:
		void turnOn()override{
		 	isOn=true;
		 }
		 void turnOff()override{
		 	isOn=false;
		 }
		 bool getStatus()override{
		 	return isOn;
		 }
};


int main(){
	LightBulb l1;
	Thermostat t1;
	cout<<"Default Status"<<endl;
	cout<<"Light : "<<l1.getStatus()<<endl;
	cout<<"Thermostat : "<<t1.getStatus()<<endl;
	
	l1.turnOn();
	t1.turnOn();
	cout<<"After turning Status 'ON' "<<endl;
	cout<<"Light : "<<l1.getStatus()<<endl;
	cout<<"Thermostat : "<<t1.getStatus()<<endl;
	
}
