int makingAnagrams(string s1, string s2) {
    vector<int> a(26,0),b(26,0);

    for(char c : s1) {
        a[c - 97]++;
    }
    for(char c : s2) {
        b[c -97]++;
    }
    int res =0;
    for(int i = 0;i<a.size();i++) {
        res += abs(a[i]-b[i]);
    }

    return res;
}
