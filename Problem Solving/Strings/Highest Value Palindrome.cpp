string highestValuePalindrome(string s, int n, int k) {
    if(s.length()==1)
        return "9";
    int i,j,k1=k;
    set<int> indices;
    for(i=0,j=s.length()-1;i<j;i++,j--) {

        if(s[i] != s[j]) {
            if(k==0)
                return "-1";
            char max = s[i] > s[j] ? s[i] : s[j];
            s[i] = max;s[j] = max;
            indices.insert(i);
            k--;
            if(k<0)
                return "-1";
        }
    }
    for(i=0,j=s.length()-1;i<j;i++,j--) {
        if(s[i]!='9') {
            if(indices.find(i) == indices.end() && k>1) {
                k-=2;
                s[i] = s[j] = '9';
            }
            else if(indices.find(i) != indices.end() && k>0){
                k--;
                s[i] = s[j] = '9';
            }
        }
        if(k<1)
            break;
    }
    if(k>0) {
        if(s.length()%2) {
            s[s.length()/2] = '9';
        }
    }
    return s;

}
