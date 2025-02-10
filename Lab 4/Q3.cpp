#include <iostream>
using namespace std;



class account{
    string anum;
    string aname;
    double bal;
    
    public:
    account(){
        bal=0.0;
        
    }
    account(string n,string na,double b){
        anum=n;
        aname=na;
        bal=b;
    }
    void deposit(double am){
        bal +=am;
        
    }
    void withdraw(double am){
        if(bal>=am){
            bal = bal-am;
        }
        else {
            cout<<"insufficient balance"<<endl;
        }
    }
    void checkBalance(){
        cout<<"Balance: "<<bal<<endl;
        
    }
};

int main() {
    account a1;
    account a2("ABD123","qazi",4000);
    a1.deposit(20);
    a1.withdraw(40);
    cout<<"Account 1";
    a1.checkBalance();
    cout<<"Account 2";
    a2.checkBalance();
    
    return 0;
}
