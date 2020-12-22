/*Problem
An arithmetic array is an array that contains at least two integers and the
differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3],
and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are
not arithmetic arrays.
Sarasvati has an array of N non-negative integers. The i-th integer of the array is
Ai
. She wants to choose a contiguous arithmetic subarray from her array that has
the maximum length. Please help her to determine the length of the longest
contiguous arithmetic subarray.*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the total number of element :";
	cin>>n;
	int arr[n];
	cout<<"enter the element of array:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
//	element defined
  int pd=arr[1]-arr[0]; //previous common diffrence
  int current=2;
  int ans=2;
  int j=2;
  while(j<n)
  {
  	if(arr[j]-arr[j-1]==pd){
  		current++;
	  }
	  else{
	  	pd=arr[j]-arr[j-1];
	  	current=2;
	  }
	  ans=max(ans,current);
	  j++;
	  
  }
  cout<<ans<<endl;
  return 0;
}
