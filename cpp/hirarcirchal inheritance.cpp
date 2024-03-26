#include<iostream>
using namespace std;

class ram{     // base class          
                                                   //Hierarchical Inheritance example
	public:
		
		
		string name="Ramgopal";
		public:
		void myname(){
			cout<<"This is a hierarchical inheritance example"<<endl;
		cout<<endl;
			cout<<"My name is ="<<name<<endl;
		}
};
class gopal:public ram{                          //drived class
	public:
		string surname="Prajapati";
		public:
		void mysur(){
			cout<<"My surname is ="<<surname<<endl;
		}
};
class gulshan:public ram{                  // drived calass
	public:
		int roll=29;
		public:
		void myroll(){
			cout<<"My roll number is ="<<roll<<endl;
			
		}
};

 class mahak:public ram{                               //drived class
	public:
		int age=20;
		public:
		void myage(){
			cout<<"My age is ="<<age<<endl;
		}
};
int main(){                  //object creation 
	
	gopal obj1;
	gulshan obj2;
	mahak obj3;
	
    obj1.myname();
	obj1.mysur();
    obj2.myroll();
	obj3.myage();
	return 0;
}
