#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    string s;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        cin >> s;
        if(s.length()==n){
            s = "#"+s; 
            int len = s.length();
            if((s.find("...") <= len-3) && (len-3 >=0)){
                cout << 2 << endl;
            }
            else{
                if(count(s.begin(), s.end(), '#') == s.length()){
                    cout << 0 << endl;
                }else{

                    cout << count(s.begin(), s.end(), '.') << endl;
                }
            }
            s.erase();
        }
    }
    return 0;
}