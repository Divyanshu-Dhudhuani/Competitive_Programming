#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,m;
    string x,s;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n >> m;
        cin >> x;
        cin >> s;
        int count=0, flag=0;
        for(int j=0; j<=5; j++){
            if(x.find(s)>=0 && x.find(s)<=x.length()){
                cout << count << endl;
                flag=1;
                break;
            }
            else{
                x+=x;
                count++;
            }
        }
        if(flag==0){
            cout << -1 << endl;
        }
        x.erase();
        s.erase();
        
    }
    return 0;
}