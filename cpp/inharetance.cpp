#include<iostream>
using namespace std;

class ram{
	public:
	int a,b;
	public:
		void accept(){
			cout<<"Enter the valu of a";
			cin>>a;
			cout<<"Enter the value of b";
			cin>>b;
		}
};
class raama: public ram
{
	public:
	int sum;
	public:
		void  add(){
			sum=a+b;
		}
		void display(){
			
			cout<<"this is a "<<sum;
		}
};
int main (){
	ram obj;
	obj.accept();
	//obj.add();
	//obj.display();
	
	return 0;
}
