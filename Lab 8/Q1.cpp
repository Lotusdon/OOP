#include <iostream>
using namespace std;

class device{
	string id;
	string type;
	double rating;
	bool status;
	
	public:
		device(){ type="none";
		}
		
		void turnon(){
			status=true;
		}
		void turnoff(){
			status=false;
		}
		double calculatePowerUsage(int h){
			double energy,sf,ct,dt;
			if(type=="light"){
				energy=rating*h;
				
			}
			else(type=="fan"){
				cout<<"enter speed factor for fan";
				cin>>sf;
				energy=(rating*h*sf);
				
			}
			else(type=="ac"){
				cout<<"enter current temperature for ac";
				cin>>ct;
				cout<<"enter desired temperature for ac";
				cin>>dt;
				energy=(rating*h*(1-(ct-dt)/100));
				
			}
			else(type=="security"){
				
			}
			
		}
	
	
};
class light:public device{
	public:
		light(){
			type="light";
		}
		void turnon(){
			status=true;
		}
		void turnoff(){
			status=false;
		}
	
};

class fan:public device{
	public:
		fan(){
			type="fan";
		}
		void turnon(){
			status=true;
		}
		void turnoff(){
			status=false;
		}
	
};

class ac:public device{
	public:
		ac(){
			type="ac";
		}
		void turnon(){
			status=true;
			
		}
		void turnoff(){
			status=false;
		}
	
};

class User{
	string id;
	string role;
	int access;
	
	public:
		
		void viewAccessibleDevices(){
			
		}
};

class 
