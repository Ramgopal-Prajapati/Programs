#include<iostream>
using namespace std;
class ram{
	public:
	string gav="polaykalan";
	void mygav(){
		cout<<"This is a hybrid inharitance "<<endl;
		cout<<endl;
		cout<<"My gav is ="<<gav<<endl;
	}
};
class gopal{
	public:
		string dist="shajapur";
		void mydist(){
			cout<<"My dist is ="<<dist<<endl;
			
		}
};
class rashi:public ram{
	public:
		string state="MP";
		void mystate(){
			cout<<"My state is a ="<<state<<endl;
			
		}
};
class sp:public ram,public gopal{
	public:
		string fri="RSGLBASTPK";
		void myfri(){
			cout<<"This is my friends ="<<fri<<endl;
		}
};
int main(){
	sp yaar;
	rashi  dil;
	yaar.mygav();
	yaar.mydist();
	dil.mystate();
	yaar.myfri();
	return 0;
}
