#include <bits/stdc++.h>
using namespace std;

bool allSame(const string &s) {
    for (char c : s) {
        if (c != s[0]) return false;
    }
    return true;
}

bool has(int i, int n,const string &s, char target){
    for (int k = i + 1; k < n; k++) {
        if (s[k] == target) {
            return true;
        }
    }
    return false;
}


int Standing(int n, const string &s){
    int standingLeft = 0, standingRight=0;
    for (int i=0; i<n; i++) {
        if( s[i] == '.'){
            standingLeft++;
        }else{
            if(s[i] == 'L'){
                standingLeft = 0;
            }
            break;
        }
    }

    for (int j=n-1; j>=0; j--) {
        if( s[j] == '.'){
            standingRight++;
        }else{
            if(s[j] == 'R'){
                standingRight=0;
            }
            break;
        }
    }


    return (standingRight+standingLeft);
}


int MiddleStanding(int n, const string &s){
    int dots = 0;

    for (int i=0; i<n; i++) {

        if(s[i] == 'L'){
            if( has(i, n, s, 'R') ){
                for (int j=i+1; j<n; j++) {
                    if(s[j] == '.'){
                        dots++;
                    }else{
                        break;
                    }
                }
            }

        }

        if( s[i] == 'R'){
            if( has(i, n, s, 'L')){
                int R_L = 0;
                for (int j=i+1; j<n; j++) {
                    if(s[j] == '.') R_L++;
                    else break;
                }

                if(R_L % 2 != 0 ) dots=dots+1;
            }
        }
    }

    return dots;
}

int main()
{
    int n; cin>>n;
    string s; cin>>s;
    
    if(allSame(s) && s[0] == '.'){
        cout<<n<<endl;
        return 0;
    }

    int stand = Standing(n, s);
    int dots = MiddleStanding(n, s);

    // cout<<stand<<endl;
    // cout<<dots<<endl;

    cout<< stand+dots <<endl;

    return 0;
}