#include<iostream>
using namespace std;
int binary(int array[],int x,int low,int high)
{
	while(low<=high){
		int mid=low+(high-1)/2;
		if(array[mid]==x){
			return mid;
		}
		if(array[mid]<x){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return -1;
}
int main(){
	int arr[5],i,j,b;
	cout<<"Enter array element"<<endl;;
	for(i=0;i<5; i++){
		cin>>arr[i];
	}
	cout<<"Here is element of array"<<endl;
	for(j=0; j<5; j++){
		cout<<arr[j]<<endl;;
	}
	cout<<"Enter element you want to search "<<endl;
	cin>>b;
	int n=sizeof(arr)/sizeof(arr[0]);
	int result=binary(arr,5,0,n-1);
	if(result>=0){
		cout<<"Element :  is "<<b<<"found at"<<result<<endl;
	}
	else{
		cout<<"The element is not found found:"<<result<<endl;
		
	}
	return 0;
}
