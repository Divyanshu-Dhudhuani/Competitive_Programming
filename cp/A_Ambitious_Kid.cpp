#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int min=INT_MAX;
    cin >> N;
    for(int i=0; i<N; i++){
        int l;
        cin >> l;
        if(l<0 && (-(l)<min)){
            min = -l;
        }
        else if(l==0){
            min = 0;
            break;
        }
        else if(l<min && l>0){
            min = l;
        }
    }
    cout << min;
    return 0;
}