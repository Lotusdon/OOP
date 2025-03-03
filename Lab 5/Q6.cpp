#include <iostream>
#include <string>
using namespace std;


class RenderEngine{
	public:
		RenderEngine(){
			cout<<"Render Engine created"<<endl;
		}
};
class PhysicEngine{
	public:
		PhysicEngine(){
			cout<<"Physic Engine created"<<endl;;
		}
};

class GameEngine{
    RenderEngine render;
    string input;
    PhysicEngine physic;

	public:
    GameEngine(){
    	cout<<"Game engine created"<<endl;
	}
	~GameEngine(){
		cout<<"Game engine destroyed"<<endl;
	}
};


int main(){
GameEngine game;
	
	
}
