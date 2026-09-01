#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x,n,s,el;
    vector<long long> v;
    cin >> x;
    for(long long i=0;i<x;i++){
        cin >> n;
        cin >> s;
        for(long long j=0; j<n; j++){
            cin >> el;
            v.emplace_back(el);
       }
        vector<long long> z(v);
        sort(z.begin(), z.end());
        // cout << "h"<< *(z.begin()) << " " << *(z.end()-1);
        if(s==1 && z==v) cout << "YES" << endl;
        else if(s>1) cout << "YES" << endl;
        else cout << "NO" << endl;
       
       v.erase(v.begin(), v.end());
       z.erase(z.begin(), z.end());
    }
    

    

    return 0;
}