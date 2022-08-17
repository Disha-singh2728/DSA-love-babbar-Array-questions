//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
    int n=l+r+1;
    // make a max heap
    // always maintain the size of heap as k 
    // so if size of heap is more than k pop top element until size is equal to k
    // so after end of traversal , n-k max elements would have been popped out
    // and max heap contains k smallest element where , kth smallest in the top
    // as top has maximum elemet and kth smallest element is the (n-k+1)th max elemennt also
    // time complexity=O(N)
    // space complexity=O(logk)
    priority_queue<int> mp;
    for(int i=0;i<n;i++)
    {
      mp.push(arr[i]);
      if(mp.size()>k)
       mp.pop();
    }
    return mp.top();
    }
};

//{ Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends
