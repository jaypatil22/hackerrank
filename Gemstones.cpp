#include <bits/stdc++.h>

using namespace std;

// Complete the gemstones function below.
int gemstones(vector<string> arr) {

    int res=0;
    map<char, int> m;

    for(int i=0;i<arr.size();i++) {
        for(int j=0;j<arr[i].size();j++) {
            if(m[arr[i][j]] == i) 
                m[arr[i][j]] = i+1;
        }
    }

    auto it = m.begin();
    while(it != m.end()) {
        if(it -> second == arr.size()) {
            res++;
        }
        it++;
    }

    return res;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item;
        getline(cin, arr_item);

        arr[i] = arr_item;
    }

    int result = gemstones(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
