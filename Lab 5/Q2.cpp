#include <iostream>
using namespace std;

//Create a class called LoanHelper, which helps the user calculate their loan payments. The class
//should have a variable that stores interest rate for the loan as a user defined constant value. Aside
//from the that, it also stores the amount for the loan taken and amount of months that the user will
//repay the loan in. The loan repayment should be calculated on a monthly basis, and the interest rate
//should be applied over the monthly return amount. The output should be something like:
//“You have to pay 999 every month for 12 monthsto repay your loan”
//Note: first divide loan amount by number of months, then apply the interest rate on it. Interest rate
//should be a value between 0-0.5%

class LoanHelper{
	const float interestrate;
	float amount;
	int months;
	
	
	
	
	public:
    LoanHelper(float r, float a,int m):interestrate(r){
    	
    	amount =a;
    	months =m;
    	}
    	
    void loanrepay(){
    	float interest= (amount/months)*interestrate;
    	float am= (interest+amount)/months;
    	cout<<"You have to pay "<<am<<" every month for "<<months<< " months to repay your loan";
    	
	}
};



int main(){
   float interestr,am,months;
   cout<<"Enter interest rate between 0.0-0.5: ";
   cin>>interestr;
   cout<<"Enter amount to loan: ";
   cin>>am;
   cout<<"Enter months you will repay in: ";
   cin>>months;
   
   LoanHelper l1(interestr,am,months);
   l1.loanrepay();
	
	
	
}
