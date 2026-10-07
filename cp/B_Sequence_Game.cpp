#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        vector<int> vec1;
        for(int j=0; j<n; j++){
            int l;
            cin >> l;
            vec1.emplace_back(l);
        }
        vector<int> vec2;
        for(int k=0; k<n-1; k++){
            if(vec1[k]>vec1[k+1]){
                vec2.emplace_back(vec1[k]);
                vec2.emplace_back(vec1[k+1]);
            }
            else if(vec1[k]<=vec1[k+1] && (vec1[k]-1)>0){
                vec2.emplace_back(vec1[k]);
                vec2.emplace_back(vec1[k]-1);
            }
            else{
                vec2.emplace_back(vec1[k]);
            }
            
        }
        vec2.emplace_back(vec1[n-1]);   
        cout << vec2.size() << endl;
        for(int l=0; l<vec2.size(); l++){
            cout << vec2[l] << " ";
        }
        cout << endl;
    }
    return 0;
}