int anagram(string s) {
    if(s.length()%2)
        return -1;
    else {
        int i = 0;
        vector<int> a(26,0),b(26,0);
        for(;i<s.length()/2;i++) {
            a[s[i]-97]++;
        }
        for(;i<s.length();i++) {
            b[s[i]-97]++;
        }

        int res = 0;
        for(int j =0 ;j<a.size();j++) {
            res += abs(a[j] - b[j]);
        }

        return res/2;
    }


}
