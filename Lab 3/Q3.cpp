#include <iostream>
#include <conio.h>
using namespace std;



  class object{
  	int snum;
  	static int count;
  	public:
  		
  	object(){
  		snum=++count;
	  }
    void display(){
    	cout<<"i am object "<<snum<<endl;
	}
  };
  int object::count=0;
  int main(){
      object o1,o2,o3;
      o1.display();
      o2.display();
      o3.display();
      
      
        
           
   
    
      
  }
