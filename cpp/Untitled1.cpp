#include<iostream>
#include<string>
using namespace std;

class ram{
	
	public:
		
		int l;
		int b;
		int h;
		
	
int  printname(){
	
	cout<<"my name is a ="<<l*b<<endl;
	cin>>l>>b;
	
}
int printsurname(){
	
	cout<<"my surname is ="<<l*b*h<<endl;
	cin>>l>>b>>h;
}
	
};

int main(){
	
	ram obj1;
	obj1.l;
	obj1.b;
	obj1.h;
	cout<<endl;
	obj1.printname();
	cout<<endl;
	obj1.printsurname();
	
	return 0;

}
