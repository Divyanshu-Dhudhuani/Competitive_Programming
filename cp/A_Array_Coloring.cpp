#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        int even=0, odd=0;
        vector<int> vec;
        for(int j=0; j<n; j++){
            int l;
            cin >> l;
            vec.emplace_back(l);
        }
        for(auto it: vec){
            if(it%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(odd%2!=0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}