#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int cnt=0, mx=0, ones=0;
		for(int i=0; i<(int)s.size(); ++i) {
			if(s[i]=='1') {
				ones++;
				cnt++;
			}
			else
				cnt=0;
			mx=max(mx, cnt);
		}
		if(mx==0&&ones==0)
			cout << "NO";
		else if(mx!=ones)
			cout << "NO";
		else 
			cout << "YES";
		cout << "\n";
	}
}
