#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    int min = INT16_MAX, max = INT16_MIN;
    int minIndex = 0, maxIndex = 0;
    for (int i = 0; i < n; i++)cin>>arr[i];
    for (int i = 0; i < n; i++){
        if (arr[i]>max){
            max = arr[i];
            maxIndex = i;
        }
        if (arr[i]<=min){
            min = arr[i];
            minIndex = i;
        } 
    }
    int swap = maxIndex + (n-1-minIndex);
    if(minIndex<maxIndex)swap--;
    cout<<swap<<endl;
    
}