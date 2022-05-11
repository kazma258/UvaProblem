#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	while(cin >> s&& s!= "0"){
		int result = 0;
		for(int i = 0; i < s.length(); i++){
			if(i%2 == 0) //¾l¼Æ0->©_¼Æ¦ì 
				result += s[i]-'0';
			else
				result -= s[i]-'0';
		}
		cout << s << " is ";
		if(result%11 != 0)
			cout << "not ";
		cout << "a multiple of 11."<< endl;
	}
	return 0;
}
