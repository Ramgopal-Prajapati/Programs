#include<iostream>
using namespace std;

class ram{
	public:
int n=2;
int i;

void input(){
	cout<<"Enter the pin number ";
	cin>>n;	
}
void display(){
	for(i=1; i<=10; i++){
		cout<<"5"<<"*"<<i<<"="<<n*i<<endl;
	}
}
};

int main(){
	
	ram p;
	p.input();
	p.display();
	return 0;
}
