#include <iostream>//1829B
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while (t--)
    {
        int n,current = 0, best =0;cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)cin>>arr[i];
        for (int i = 0; i < n; i++)
        {
            if(arr[i]== 0){
                current++;
                best = max(current,best);
            }
            else current = 0;
        }
        cout<<best<<endl; 
    }
}