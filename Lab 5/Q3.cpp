#include <iostream>
#include <string>
using namespace std;

//Create a class called ValidateString. The purpose of this class will be check if the given characters in a
//string are alphabet only. Numbers and symbols will mean that the string is invalid. By using a
//parameterized constructor, create multiple objects for your class that accept different strings. Create a
//constant function that checks whether the string variable is valid or not.
//What happens if you do not make your function constant? Add a comment right above your function
//explaining why we make a function constant.

class ValidateString{
	string word;

	public:
	ValidateString(){}	
    ValidateString(string s):word(s){}
     bool check ()const{
     	bool flag=true;
     	for (int i = 0; i < word.length(); i++) {
        if(word[i]>122 || word[i]<65 || (word[i]>90 && word[i]<97))
        flag=false;
        
    }
     	return flag;
    	
	}
};


int main(){
string word;
const int size=3;
   ValidateString code[size];
   for(int i=0;i<size;i++){
   	cout<<"enter string: ";
   	cin>>word;
   	code[i]=ValidateString(word);
   	if (code[i].check()){
   		cout<<"string is string"<<endl;
	   }
	else {
		cout<<"string has symbols"<<endl;
	}   
   }
	
	
	
}
