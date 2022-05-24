#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n, good;
    string url;
    cin >> n;
    for(int con = 0; con < n; ++con ){
        int max = 0;
        vector<pair<string, int>> umap;
        for(int i = 0; i < 10; i++){
            cin >> url >> good;
            max = max > good ? max : good;
            umap.push_back(make_pair(url, good));
        }
        cout << "Case #" << con+1 << ":" << endl;
        for(auto it: umap){
            if(it.second == max){
                cout << it.first << endl;
            }
        }
    }

    return 0;
}
