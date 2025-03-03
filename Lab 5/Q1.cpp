#include <iostream>
using namespace std;


class Square{
	float side;
	float area;
	static float allareas;
	
	public:
		Square(float s):side(s){
		}
		
		Square(){
			side=0;
			area=0;
		}
		
		void calcarea(){
			area=side*side;
			allareas+=area;
			
		}
		void setside(float s){
		side=s;
	}
		
		void setarea(float a){
		area=a;
		}
		float getside(){ return side;
		}
		float getarea(){ return area;
		}
		float getallarea(){ return allareas;
		}
};

float Square::allareas=0;

int main(){
	float area,allarea;
	Square s1(10.0);
	Square s2(33.3);
	Square s3(5.2);
	
	s1.calcarea();
	area=s1.getarea();
	cout<<"Square 1:"<<area<<endl;
	
	s2.calcarea();
	
	area=s2.getarea();
	cout<<"Square 2:"<<area<<endl;

	s3.calcarea();
	area=s3.getarea();
	cout<<"Square 3:"<<area<<endl;
	allarea=s3.getallarea();
	cout<<"Square all area:"<<allarea<<endl;
	
	
	
}
