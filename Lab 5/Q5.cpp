#include <iostream>
#include <string>
using namespace std;

//Keeping in mind our previous car example, write a class that represents a car, and useaggregation and
//composition to combine different components like engine, wheels, headlights and steering to create the
//car object.
//
//Hint: create the individual classes firstbeforeperforming the composition. Remember
//thatfor aggregation, you will need pointers! You’ll be needing constructors and setters to
//set these values in case of aggregation. Same hint applies to other questions.

class Engine{
	public:
		Engine(){
			cout<<" Engine created"<<endl;
		}
};
class Wheel{
	public:
		Wheel(){
			cout<<"Wheel created"<<endl;;
		}
};

class Headlight{
	public:
		Headlight(){
			cout<<"headlight created"<<endl;;
		}
};

class Car{
    Engine* v8;
    string steeringinput;
    Wheel* tyre;
    Headlight light;

	public:
    Car(){
    	cout<<"Car created"<<endl;
	}
	~Car(){
		cout<<"Car destroyed"<<endl;
	}
};


int main(){
Car game;
	
	
}
