#include <iostream>
using namespace std;

class Vehicle{
	protected:
	string model;
	double rate;
	
	public:
		Vehicle(string m,double r):model(m),rate(r){
		}
		virtual double getDailyrate()=0;
		virtual void displayDetails()=0;
};

class Car:public Vehicle{
	public:
		Car(string m,double r):Vehicle(m,r){
		}
		double getDailyrate()override{
			return rate*2;
		}
	    void displayDetails()override{
	    	cout<<"Car Model: "<<model<<endl;
	    	cout<<"Car Rate: "<<rate<<endl;
		}
};

class Bike:public Vehicle{
		public:
			Bike(string m,double r):Vehicle(m,r){
		}
		double getDailyrate()override{
			return rate*5;
		}
	    void displayDetails()override{
	    	cout<<"Bike Model: "<<model<<endl;
	    	cout<<"Bike Rate: "<<rate<<endl;
		}
	
};

int main(){
	Car mehran("1985 ka model",20000);
	Bike Yamaha("2028 ka model",50000);
	mehran.displayDetails();
	cout<<"Car rate is "<<mehran.getDailyrate()<<endl;
	Yamaha.displayDetails();
	cout<<"Bike rate is "<<Yamaha.getDailyrate();
	
}
