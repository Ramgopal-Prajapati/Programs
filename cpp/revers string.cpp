#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str[]="RAMGOPAL";
	cout<<"Orinal string "<<str<<endl;
	cout<<"String after reversed="<<endl;
	for(int i=(strlen(str)-1);i>=0;i--){
		cout<<str[i];
	}
	return 0;
}
