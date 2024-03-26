#include<iostream>
using namespace std;

int mian()
{
	int n;
	int arr[100];
	cout<<"Enter array size "<<endl;
	cin>>n;
	cout<<"Enter array element "<<endl;
	for(int i=0; i<=n; i++){
		cin>>arr[i];
		
	}
	int curmin=arr[0];
	int curmax=arr[0];
	for(int i=0; i<=n; i++)
	{
		if(arr[i] > curmax){
			curmax=arr[i];
		}
		else if(arr[i]<curmin){
			curmin=arr[i];
		}
	}
	cout<<"Now minimam element is "<<curmin<<endl;
	cout<<"Now maximum element is "<<curmax;
	return 0;
}
