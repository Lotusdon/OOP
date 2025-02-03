#include <iostream>
using namespace std;

class shop{
	string item[10];
	string price[10];
	int count=0;
	public:
		void add(){
			int n;
			string na,p;
			cout<<"enter number of items to add: ";
			cin>>n;
			for (int i=0;i<n;i++){
				cout<<"enter item name: ";
				cin>>na;
				cout<<"enter price: ";
				cin>>p;
				item[count]=na;
				price[count]=p;
				count++;
			}
		}
		void display(){
			for (int i=0;i<count;i++){
				cout<<"Item "<<i+1<<" : "<<item[i]<<" | "<<"Price : $"<<price[i]<<endl;
				
			}
			
		}
		void edit(){
			string name;
			cout<<"Enter item you want to edit the prices for: ";
			cin>>name;
			for (int i=0;i<count;i++){
				if (item[i]==name){
					cout<<"Item found"<<endl;
					cout<<"enter new price: ";
					cin>>price[i];
					cout<<"Price updated"<<endl;
				}
			}
		}
};

int main(){
	shop s1;
	s1.add();
	s1.display();
	s1.edit();
	s1.display();
	
}
