int palindromeIndex(string s) {

    int l = s.length();
    int i,j,a,b;
    for(i=0,j=l-1;i<=j;i++,j--) {
        if(s[i] != s[j])
            break;
    }
    if(i>j)
        return -1;

    for(a=i+1,b=j;a<j && b>i+1;a++,b--) {
        if(s[a] != s[b])
            return j;
    }

    return i;

}
