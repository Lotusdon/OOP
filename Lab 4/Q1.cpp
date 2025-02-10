
#include <iostream>
using namespace std;

class student{
    int studentid;
    string name;
    int age;
    char grade;
    public:
   student(){
       grade='N';
   }
    student(int i,string n,int a,char g){
       studentid=i;
       name=n;
       age=a;
       grade=g;
   }
   
   void promoteStudent(){
       if (grade!='A'){
        --grade;
       }
   }
   string isEligibleForScholarship(){
       string res="False";
       if ( grade =='A'){
           res="True";
           return res;
       }
       return res;
   }
   void displayDetails(){
       cout<<"\n";
       cout<<"Student ID: "<<studentid<<endl;
       cout<<"Name: "<<name<<endl;
       cout<<"Age: "<<age<<endl;
       cout<<"Grade: "<<grade<<endl;
   }
   
    
};

int main() {
   string el;
   student s1;
   student s2(22,"John",17,'C');
   s2.promoteStudent();
   s2.promoteStudent();
   
   el=s2.isEligibleForScholarship();
   
   cout<<"student 2: "<<endl;
   s2.displayDetails();
   cout<<"Student 2 is Eligible For Scholarship: "<<el<<endl;
   cout<<"\n";
   cout<<"student 1: "<<endl;
   s1.displayDetails();

    return 0;
}
