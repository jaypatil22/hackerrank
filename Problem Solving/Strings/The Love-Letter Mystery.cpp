int theLoveLetterMystery(string s) {
    int res = 0;

    for(int i=0,j=s.size()-1;i<=j;i++,j--) {
        res += abs((int)s[i] - (int)s[j]);
    }

    return res;

}
