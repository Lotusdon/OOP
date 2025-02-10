

#include <iostream>
using namespace std;



class car{
    int id;
    string model;
    int year;
    bool rented;
    
    public:
    car(){
        rented=false;
    }
    car(int i,string m,int y,bool r){
        id=i;
        model=m;
        year=y;
        rented=r;
        
    }
    
    void rentCar(){
        rented=true;
        cout<<"Car has been rented"<<endl;
    }
    void returnCar(){
        rented=false;
        cout<<"Car has been returned"<<endl;
    }
    int isVintage(){
        if(year<2000){
            return true;
        }
        else return false;
    }
    
};

int main() {
    car c1;
    car c2(22,"24E56",2004,false);
    cout<<"Car 1"<<endl;
    c1.rentCar();
    c1.returnCar();
    cout<<"Is car vintage: "<<(c1.isVintage()?"Yes":"NO");
    cout<<endl<<"Car 2"<<endl;
    c2.rentCar();
    c2.returnCar();
    cout<<"Is car vintage: "<<(c2.isVintage()?"Yes":"NO");
    


    return 0;
}
