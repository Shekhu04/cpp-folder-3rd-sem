#include<iostream>
using namespace std;

int bubbleSort (int arr[],int n){
    for(int i=1 ; i<n; i++) //for round 1 to n-1
    {
        for(int j=0; j<n-i; j++) //process till n-i th index
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int even[5] = {10,3,4,18,9};
    cout << "The sorted array is : " << bubbleSort(even,5) << endl;
    return 0;
}