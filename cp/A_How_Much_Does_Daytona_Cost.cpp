#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a;
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n,k,flag=0;
        cin >> n >> k;
        for(int j=0; j<n; j++){
            int l;
            cin >> l;
            if(l==k){
                flag=1;
            }
        }
        if(flag==0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}