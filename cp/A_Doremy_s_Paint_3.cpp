#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        vector<int> v;
        int even=1, odd=1;
        int l;
        for(int j=0; j<n; j++){
            cin >> l;
            v.emplace_back(l);
    }
    sort(v.begin(), v.end());
    if(v[0]==v[n-1]){
        cout << "Yes" << endl;
    }
    else{
    for(int j=1; j<n; j++){
        if(v[j]==v[0]){
            odd++;
        }
    }
    for(int k=1; k<n-1; k++){
        if(v[k]==v[n-1]){
            even++;
        }
    }

    if(n%2==0){
        if(odd==even && odd==n/2){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    else{
        if(odd==(even+1)&&even==n/2){
            cout << "Yes" << endl;
        }
        else if(even==(odd+1)&&odd==n/2){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    }
}

    return 0;

}