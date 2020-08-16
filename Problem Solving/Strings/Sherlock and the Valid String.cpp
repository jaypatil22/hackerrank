string isValid(string s) {
    if(s.length() <= 1)
        return "YES";
    vector<int> a(26,0);

    char first = s[0];
    int div = 0;
    for(char c : s) {
        if(a[c-97] == 0)
            div++;
        a[c-97]++;
    }
    int same = s.length()/div;
    bool flag = 1;
    int su=0,p=0,m=0;
    // for(int b : a) {
    //     cout << b << " ";
    // }
    cout<< "\n";
    for(int b : a) {
        //cout << b << " " << same << " ";
        if(b != 0) {
            if(abs(same-b) > 1) {
                if(b == (same*div-1)/(div-1)) {
                    same = b;
                    continue;
                }
                if(b == 1 && flag)
                {
                    flag = 0;continue;
                }
                return "NO";
            } else if(same-b == 1) {
                m++;
            } else if(b-same == 1) {
                p++;
            } else if(abs(same-b) == 0) {
                su++;
            }
        }
    }

    if (p != 0 && m != 0) {
        return "NO";
    }
    if(p==0&&m==0)
        return "YES";
    if (p == 1 || su == 1 || m == 1) {
        return "YES";
    }
    else
        return "NO";
}
