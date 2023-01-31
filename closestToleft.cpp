#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
 
 
signed findingindex(vector<int>A,int target)
{
    int start = 0;
    int end = A.size()-1;
    int flag=-1;
 
    while(start<=end)
    {
        int mid = (start+end)/2;
        if(A[mid]>target)
        {
            end = mid-1;
        }
        else if(A [mid]<=target){
            flag = mid;
            start = mid+1;
        }
       
    }
    return flag;
}
 
 
void solve(){
    int n,k,a;
    cin>>n>>k;
    vector<int>A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    while(k>0)
    {
        cin>>a;
        cout<<findingindex(A,a)+1<<endl;
        --k;
    }
}
 
signed main()
{
    solve();
return 0;
}