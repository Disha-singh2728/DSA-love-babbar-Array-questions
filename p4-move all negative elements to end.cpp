//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
      // take a vector which will store the negative elements in order
      // if any postive element is found maintain them in order in given array only
      vector<int> vneg;
      int i, j=0;
      for(i=0;i<n;i++){
       if(arr[i]>=0)
        arr[j++]=arr[i];
       else
        vneg.push_back(arr[i]);
      }
      i=0;
     while(j<n){
      arr[j++]=vneg[i++];
     }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends
