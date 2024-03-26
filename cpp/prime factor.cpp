#include<iostream>
using namespace std;

int main (){
	int n;
	cout<<"Enter the number "<<endl;
	cin>>n;
	for(int i=2; i>=1;i++){
		while(n%i==0){
			
			cout<<i<<" "<<endl;;
			 n=n/i;
			 break;
		}
	}
	return 0;
}
