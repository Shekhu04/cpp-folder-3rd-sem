#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int maxNO=INT_MIN;
    int minNO=INT_MAX;

    for(int i=0;i<n;i++){
        maxNO=max(maxNO,array[i]);
        minNO=min(minNO,array[i]);

    }
    cout<<maxNO<<" "<<minNO;
    return 0;
    }