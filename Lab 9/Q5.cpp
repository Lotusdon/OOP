#include <iostream>
using namespace std;

class Activity{
	public:
		virtual void calculateCaloriesBurned()=0;
};

class Running:public Activity{
	double distance;
	double time;
	public:
		Running(double d,double t):distance(d),time(t){
		}
		void calculateCaloriesBurned()override{
			cout<<"You have ran "<<distance<<" miles in "<<time<<" seconds and burned "<<distance*time <<" calories! . Good Job Running"<<endl;
		}
};

class Cycling:public Activity{
	
	double speed;
	double time;
	public:
		Cycling(double s,double t):speed(s),time(t){
		}
		void calculateCaloriesBurned()override{
			cout<<"You have cycled with a speed of "<<speed<<" miles per hour in "<<time<<" hours and burned "<<speed*time <<" calories! . Cycling is not your strong point"<<endl;
		}
		
};

int main(){
	Running Usain(1200,300);
	Cycling Faadil(120,2);
	Usain.calculateCaloriesBurned();
	Faadil.calculateCaloriesBurned();
	
}
