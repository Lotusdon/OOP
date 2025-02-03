#include <iostream>
#include <conio.h>
using namespace std;



  class tollbooth{
      unsigned int nc;
      double money;
      public:
      tollbooth(){
          nc=0;
          money=0;
          
      }
      void payingCar(){
          nc+=1;
          money+=0.5;
          
      }
      void nopayCar(){
          nc+=1;
      }
      void display(){
          cout<<"total number of cars : "<<nc<<endl;
          cout<<"total money received : "<<money<<endl;
      }
  };
  
  int main(){
      tollbooth t1;
      char c;
      int flag=0;
      cout<<"welcome to tollbooth system made "<<endl;
      	cout<<"enter a to add a paying car"<<endl;
      	cout<<"OR"<<endl;
      	cout<<"enter b to add a non paying car"<<endl;
      	cout<<"enter esc to display and exit"<<endl;
      while(flag==0){
      	
          c=_getch();
          switch(c){
              case 'a':
              t1.payingCar();
              break;
            case 'b':
             t1.nopayCar();
             break;
              case char(27):
              t1.display();
              flag=1;
          }
          
      }
      
        
           
   
    
      
  }
