#include<iostream>
using namespace std;

int search(int array[], int size,int valuetosearch){
	
	for(int  i=0; i<size; i++){
		
     if(valuetosearch==array[i]){
     	return i;
	 }
	}
	return -1;
}



int main(){

	int arr[5],i,j,b;
	cout<<"Enter array element"<<endl;
	for(i=0; i<5; i++){
		cin>>arr[i];
	}
	cout<<"Here is element of array"<<endl;
	for(j=0; j<5; j++){
		cout<<arr[j]<<endl;
	}
	cout<<"Enter  element you want to search"<<endl;
	cin>>b;
	int n=sizeof(arr)/sizeof(arr[0]);
	int result = binary(arr,5,0,n-1);
	if(result==-1){
		cout<<"The element"<<arr[result]<<"Is not found"<<endl;
	}
	else{
		cout<<"The element is found index is :"<<result;
}
	
	return 0;
	
}
