#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, x;
    int element;
    int max_diff=0;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n >> x;
        vector<int> v(1, 0);
            for(int j=0; j<n; j++){
                cin >> element;
                v.emplace_back(element);
            }
        v.emplace_back(x);    
        max_diff=v[1]-v[0];
        for(int k=0; k<(n); k++){
            if((v[k+1]-v[k])>=max_diff){
                max_diff=v[k+1]-v[k];
            }
        if(((v[n+1]-v[n])*2)>=max_diff){
            max_diff=(v[n+1]-v[n])*2;
        }
        
        }
        cout << max_diff << endl;
        v.clear();

    }
    return 0;
}