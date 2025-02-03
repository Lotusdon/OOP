#include <iostream>
using namespace std;


  class Time{
      int hours;
      int minutes;
      int seconds;
      public:
      Time(){
          hours=0;
          minutes=0;
          seconds=0;
      }
      Time(int h,int m,int s){
          hours=h;
          minutes=m;
          seconds=s;
          
      }
      void display(){
          cout<<hours<<" : "<<minutes<<" : "<<seconds<<"\n";
      }
      Time add(Time a,Time b){
          Time total ;
          total.hours=a.hours+b.hours;
           total.minutes=a.minutes+b.minutes;
            total.seconds=a.seconds+b.seconds;
            return total;
      }
  };
  
  int main(){
      
      
        int h1, m1, s1, h2, m2, s2;
           cout<<"enter hours for time 1: ";
           cin>>h1;
            cout<<"enter minutes for time 1: ";
           cin>>m1;
            cout<<"enter seconds for time 1: ";
           cin>>s1;
           
           Time t1(h1,m1,s1); 
           
           cout<<"enter hours for time 2: ";
           cin>>h2;
            cout<<"enter minutes for time 2: ";
           cin>>m2;
            cout<<"enter seconds for time 2: ";
           cin>>s2;
           
           Time t2(h2,m2,s2);
           
           Time t3;
           t3=t3.add(t1,t2);
           t3.display();
           
   
    return 0;
      
  }
