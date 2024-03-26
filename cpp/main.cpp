#include <iostream>
#include<string>
using namespace std;

class phone{
	string p_name;
	string p_size;
	public:
		
		phone(string name, string size){
			
			p_name= name;
			p_size = size;
			
		}
		void makecall(){
			
			cout<<"this is a make call="<<p_name<<endl;
			
		}
		void receivecall(){
			cout<<"this is a receive call="<<p_size<<endl;
			
		}
};

int main()
{
	
	
	phone phone1("iphine_x","345");
	phone1.makecall();
	phone1.receivecall();
	
	cout<<endl;
	
	phone gpixal("googal pixal 2xl","444");
	
	gpixal.makecall();
	gpixal.receivecall();
	
	return 0;
	
}
