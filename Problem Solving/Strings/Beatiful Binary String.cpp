int beautifulBinaryString(string b) {

    int res =0;

    for(int i = 0;i<b.size()-2;i++) {
        if(b[i] == '0' && b[i+1] == '1' && b[i+2] == '0') {
            b[i+2] = '1';
            res++;
        }
    }
    return res;
}
