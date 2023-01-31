#include<iostream>
using namespace std;

void print(int n) {

    if(n == 0) //base case
    {
        return;
    }

    cout << n << endl; //processing

      print(n-1);  //Recursive relation
    
    //Tail recursion
  
}

int main(){
    int n;
    cin >> n;

    print(n);

    return 0;
}