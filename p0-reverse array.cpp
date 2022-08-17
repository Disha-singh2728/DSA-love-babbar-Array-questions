#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
    int N;
    cin>>N;
    int A[N],i;
    for(i=0;i<N;i++)
    {   
       cin>>A[i];
    }
	for(i=N-1;i>=0;i--)
	{
	    cout<<A[i]<<" ";
	}
	cout<<endl;
    }
	return 0;
}
