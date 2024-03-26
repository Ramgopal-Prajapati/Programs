#include<iostream>
using namespace std;

class ram{
	public:
	string p_name="  ";
	int p_roll=0  ;
	
	ram(string n, int x ){//this is a constructor
		p_name=n;
		
		p_roll=x;
	}      // end of constructor
	 void print(){
	 	
	 	cout<<"my name is ="<<endl;
	 	cin>>p_name;
	 	
	 	cout<<"my roll number is "<<endl;
	 	cin>>p_roll;
	 }
	 void get(){
	 	
	 	cout<<"my name is "<<p_name<<endl;
	 	cout<<"my roll no. "<<p_roll;
	 }
};

int main()
{
	ram gopal(" ",98);
	gopal.print();
	gopal.get();
	return 0;
}
