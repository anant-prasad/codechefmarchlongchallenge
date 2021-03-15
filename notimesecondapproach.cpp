#include <bits/stdc++.h>

using namespace std;
/* 
typedef long long ll;
typedef vector<int> vi; */

int main() {

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int N,H,X,T,count=0;
    
    cin>>N>>H>>X;
    for(int i=0; i<N; i++){
        cin>>T;
        if(X + T == H){
            cout<<"YES";
            count++;
            break;
        }
    }
    if(count==0){
        cout<<"NO";
    }

    return 0;
}
