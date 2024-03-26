#include<iostream>
using namespace std;

class ramgopal {
	public:
		int  roll,m1, m2 , m3;
		void get(){
			cout<<"this is a multiple "<<endl;
			cout<<"Enter the value of roll number"<<endl;
			cin>>roll;
			cout<<" Enter the value of m1, m2,m3"<<endl;
			cin>>m1>>m2>>m3;
	}
};

class shivangi{
	
	public:
		int x;
		void getsum(){
			
			cout<<"Enter shivangi roll"<<endl;
			cin>>x;
		}
};
class output : public ramgopal,public shivangi{
	
	int r,average;
	public:
		void display(){
			
			r=(m1+m2+m3+x);
			average=r/4;
			
			cout<<"roll number is "<<roll<<endl;
			cout<<"total number is "<<r<<endl;
			cout<<"aeverage is "<<average<<endl;
			cout<<"Hense Ramgopal is a good boy";
		}
};
int main (){
	
	output gopal;
	gopal.get();
	gopal.getsum();
	gopal.display();
	
	return 0;
	
}

