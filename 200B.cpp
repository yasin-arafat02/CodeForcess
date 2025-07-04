#include <iostream>
using namespace std;
int main() {
    int n;cin>>n;
    double count = 0;
    int arr[n];
    for (int i = 0; i < n; i++)cin>>arr[i]; 
    for (int i = 0; i < n; i++){
        count+=arr[i];
    }
    cout<<count/n;
}
