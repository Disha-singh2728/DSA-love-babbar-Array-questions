//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends
// no. of comaprison =2(n-1)+1
// using tournament method we can decrease no. of comaprisons to 3(n/2)+1
pair<long long, long long> getMinMax(long long a[], int n) {
 pair<long long ,long long> p;
 if(n==1)
 {
  p.first=a[0];
  p.second=a[0];
 }
  if(a[0]<a[1]){
   p.first=a[0];
   p.second=a[1];
  }
  else
  {
    p.first=a[1];
   p.second=a[0];  
  }
 for(int i=2;i<n;i++){
  if(a[i]<p.first)
   p.first=a[i];
  else if(a[i]>p.second)
   p.second=a[i];
   
 }
 return p;
}
