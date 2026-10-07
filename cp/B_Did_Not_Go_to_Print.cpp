#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        string s;
        int n;
        cin >> n;
        cin >> s;
        stack<int> st;
        vector<int> vec;
        for(int j=0; j<n; j++){
            // cout << s[j] << endl;
            if(s[j]=='1'){
                st.push(j+1);
            }
            if(int(s[j])=='2'){
                if(st.empty()!=1){
                    vec.emplace_back(j+1);
                    st.pop();
                }
            }
        }
        int size = st.size();
        for(int k=0; k<size; k++){
            vec.emplace_back(st.top());
            st.pop();
        }
        sort(vec.begin(), vec.end());
        cout << vec.size() << endl;
        for(auto it: vec){
            cout << it << " ";
        }
        cout << endl;
        vec.clear();
        s.erase();

    }
    return 0;
}