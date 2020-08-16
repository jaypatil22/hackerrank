string gameOfThrones(string s) {
    vector<int > a(26,0);

    for(char c : s) {
        a[c-97]++;
    }
    bool flag = 0;
    if(s.length()%2)
        flag = 1;

    for(int b : a) {
        if(b%2) {
            if(flag) {
                flag = 0;
                continue;
            }
            else
                return "NO";
        }
    }

    return "YES";
}
