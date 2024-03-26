#include<iostream>
using namespace std;
class ram{
	public:
		int imag,real;
		ram(int r=0,int i=0){
			real=r;
			imag=i;
			
		}
		ram operator+(ram const&obj){
			ram objj;
			objj.real=(real+obj.real);
			objj.imag=(imag+obj.imag);
			return objj;
		}
		void print(){
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
};
int main(){
	cout<<"This is a overloaded operater +;"<<endl;
	cout<<endl;
	ram c1(20,7),c2(4,6);
	ram c3=(c1+c2);
	c3.print();
	return 0;
}
