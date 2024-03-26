#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char a[100]="Ram";
	char b[100]="Gopal";
	char p[100];
	int l;
	strcpy(p,a);
	cout<<"Your strin in A is = :"<<a<<endl;
	cout<<"Your string is copied=:"<<p<<endl;
	strcat(a,b);
	cout<<"Your string is concatenate=:"<<a<<endl;
	
	l=strlen(a);
	cout<<" concatenated String  length=:"<<l<<endl;
	
	cout<<endl;
	cout<<"In this program COPY , CONCATENATE, LENGTH  ";
	return 0;
}
