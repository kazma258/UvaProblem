#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n, m;
    while(cin >> n >> m) {
        if(!n && !m) break;
        vector<vector<int> > v(m*2);
        int temp;
        for(int i = 0; i < n; i++){
            cin >> temp;
            v[(temp%m) + m].push_back(temp);
        }

        cout << n << " " << m << endl;
        for(int i =0; i< m*2; i++){
            vector<int> vtemp;
            sort(v[i].rbegin(), v[i].rend());
            for(int j = 0; j < v[i].size(); j++){
                if(v[i][j] & 1){
                    cout << v[i][j] << endl;
                }else
                    vtemp.push_back(v[i][j]);
            }

            for(auto it = vtemp.rbegin(); it != vtemp.rend(); ++it){
                cout << *it << endl;
            }
        }
        cout << "0 0" << endl;
    }

    return 0;
}