#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n, sum=0, efficiency;
        cin >> n;
        for(int j=0; j<n-1; j++){
            cin >> efficiency;
            sum+=efficiency;
        }
        cout << -sum << endl;

    }
    return 0;
}