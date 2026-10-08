#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        vector<int> a;
        vector<int> b;
        vector<int> c;
        for(int j=0; j<n; j++){
            int r;
            cin >> r;
            a.emplace_back(r);
        }
        int flag=0;
        sort(a.begin(), a.end());
        for(int k=1; k<n; k++){
            if(a[0]!=a[k]){
                flag=1;
                break;
            }
        }
        int num;
        for(int p=0; p<n; p++){
            if(a[0]==a[p]){
                num=p;
            }
        }
        if(flag==1){
            for(int l=num+1; l<n; l++){
                c.emplace_back(a[l]);
            }
            for(int q=0; q<=num; q++){
                b.emplace_back(a[q]);
            }
            cout << b.size() << " " << c.size() << endl;
            for(auto it1: b){
                cout << it1 << " ";
            }
            cout << endl;
            for(auto it2: c){
                cout << it2 << " ";
            }
            cout << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}