string twoStrings(string s1, string s2) {
    vector<int > a(26,0),b(26,0);

    for(char c : s1) {
        a[c-97]++;
    }
    for(char c : s2) {
        b[c-97]++;
    }

    for(int i =0;i<26;i++) {
        if(a[i] != 0 && b[i] != 0) {
            return "YES";
        }
    }

    return "NO";

}
