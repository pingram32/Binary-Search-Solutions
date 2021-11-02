string solve(string s) {
    int count=0;
    string a;
    for(int i=0;i<s.size();i++){
        while(s[i]==s[i+count]){
            count++;
        }
        a+=s[i+count-1];
        i+=count-1;
        count=0;
    }
    return a;
}
