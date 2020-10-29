#include <iostream>
using namespace std;
//Cyclically Rotate a array 1 by one
int main() {

	int t,j,k,temp1,temp2,n;
	cin>>t; //Number of Array to Rotate
	for(k=0;k<t;k++)
	{
	    cin>>n;
	    int a[n];
	    for(j=0;j<n;j++)
	    cin>>a[j];
	   cout<<a[n-1]<<" ";
	    for(j=1;j<n;j++)
	    cout<<a[j-1]<<" ";
	    cout<<endl;

	}
	return 0;
}