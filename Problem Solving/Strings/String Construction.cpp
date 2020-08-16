int stringConstruction(string s) {

    vector<int> a(26,0);
    int res =0;
    for(char c:s) {
        if(a[c-97] == 0)
            res++;
        a[c-97]++;
    }

    return res;

}
