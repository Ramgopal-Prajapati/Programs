#include <bits/stdc++.h>
using namespace std;
 
void insertionSort( )
{int arr[100];
	 int i,j,n,temp;
	 for(i=0; i<n; i++){
	 	
	 	temp=arr[i];
	 	j=i-1;
	 	while(j>=0 &&arr[j]>temp){
	 		j--;
		 }
		 arr[j+1]=temp;
	 }
}
  int main(){
    int arr[100],a,i,j;
    cout<<"Enter array element :"<<endl;
    for(i=0; i<5; i++)
	{
    cin>>arr[i];
        }
    cout<<"Here your array element"<<endl;
    for(j=0; j<5; j++){
    cout<<arr[j]<<" ";
      }
      cout<<endl;
      insertionSort( );
    return 0;
}
