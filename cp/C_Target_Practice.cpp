#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        string str;
        int count;
        int score=0;
        for(count=1; count<=10; count++){
            cin >> str;
            for(int k=1; k<=10; k++){
                if(str[k-1]=='X'){
                    if(k==1 || count==1 || k==10 || count==10){
                        score+=1;
                    }
                    else if(k==2 || count ==2 || k==9 || count==9){
                        score+=2;
                    }
                    else if(k==3 || count==8 || k==8 || count==3){
                        score+=3;
                    }
                    else if(k==4 || count==4 || k==7 || count==7){
                        score+=4;
                    }
                    else if(k==5 || count==5 || k==6 || count==6){
                        score+=5;
                    }
                }
            }
            str.erase();
        }
        cout << score << endl;
    }
    return 0;
}