#include <bits/stdc++.h>

using namespace std;

bool check(int *arr, int n) {
    vector<int> save;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (arr[i] > arr[j])
                return false;
            if (find(save.begin(), save.end(), arr[i] + arr[j]) != save.end()) {
                return false;
            } else
                save.push_back(arr[i] + arr[j]);
        }
    }
    return true;
}

int main(int argc, char const *argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n, cont = 1;
    while (cin >> n) {
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << "Case #" << cont << ": It is ";
        if (check(arr, n) == false)
            cout << "not ";
        cout << "a B2-Sequence.\n\n";
        cont++;
    }

    return 0;
}