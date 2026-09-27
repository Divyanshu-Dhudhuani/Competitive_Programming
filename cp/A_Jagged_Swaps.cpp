#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        int arr[11];
        for(int j=0; j<n; j++){
            cin >> arr[j];
        }
        int min = *min_element(arr, arr+n);
        if(arr[0]!=min){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
        
    
    }
    return 0;
}