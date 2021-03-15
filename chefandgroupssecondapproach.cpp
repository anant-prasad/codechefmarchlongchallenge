#include <bits/stdc++.h>

using namespace std;

int main() {

    /* freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); */

    int t,j; cin>>t; 
    while(t--){
		int n, count=0;
		string s;
		cin>>s;
		n=s.length();
		if(s[0]=='1'){
			count++;
			}
		for(int i=1;i<n;i++){
    		if(s[i]=='1'&&s[i-1]=='0'){
			count++;
			}
		}
		cout<<count<<"\n";
    }
	

    return 0;
}
