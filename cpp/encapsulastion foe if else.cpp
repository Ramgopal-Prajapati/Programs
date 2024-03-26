#include<iostream>
using namespace std;

class ram{
	public:
int n;

void input(){
	cout<<"Enter the pin number ";
	cin>>n;	
}
void display(){
	if(n==2345){
		cout<<"You can acces your account ";
		
	}
	else{
		cout<<"You can not access your acount ";
	}
}
};

int main(){
	
	ram p;
	p.input();
	p.display();
	return 0;
}
